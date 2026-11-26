
DROP DATABASE IF EXISTS tuition_fee_db;

CREATE DATABASE tuition_fee_db;

USE tuition_fee_db;


-- Students Table
CREATE TABLE students (
    student_id INT PRIMARY KEY,
    name VARCHAR(25) NOT NULL,
    class VARCHAR(10) NOT NULL,
    city VARCHAR(15) NOT NULL
);


-- Courses Table
CREATE TABLE courses (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(50) NOT NULL,
    monthly_fee INT NOT NULL
);


-- Payments Table
CREATE TABLE payments (
    payment_id INT AUTO_INCREMENT PRIMARY KEY,
    student_id INT NOT NULL,
    course_id INT NOT NULL,
    amount INT NOT NULL,
    paid_on DATE NOT NULL,

    FOREIGN KEY (student_id)
        REFERENCES students(student_id),

    FOREIGN KEY (course_id)
        REFERENCES courses(course_id)
);

use tuition_fee_db;
-- =========================================
-- TASK 2: CRUD OPERATIONS
-- =========================================

-- 1. INSERT 5 STUDENTS

INSERT INTO students (student_id, name, class, city)
VALUES
(1, 'Rahul', 'B.Tech', 'Rajkot'),
(2, 'Priya', 'BCA', 'Ahmedabad'),
(3, 'Amit', 'B.Tech', 'Surat'),
(4, 'Neha', 'MCA', 'Vadodara'),
(5, 'Karan', 'BCA', 'Rajkot');


-- 2. INSERT 3 COURSES

INSERT INTO courses (course_id, course_name, monthly_fee)
VALUES
(101, 'Python', 1500),
(102, 'SQL', 800),
(103, 'Full Stack', 2500);


-- 3. INSERT 10 PAYMENTS

INSERT INTO payments (student_id, course_id, amount, paid_on)
VALUES
(1, 101, 1500, '2026-01-05'),
(2, 102, 800, '2026-01-08'),
(3, 103, 2500, '2026-01-12'),
(4, 101, 1500, '2026-01-15'),
(5, 102, 800, '2026-01-20'),
(1, 103, 2500, '2026-02-03'),
(2, 101, 1500, '2026-02-07'),
(3, 102, 800, '2026-02-10'),
(4, 103, 2500, '2026-02-15'),
(5, 101, 1500, '2026-02-20');


-- 4. UPDATE ONE COURSE FEE

UPDATE courses
SET monthly_fee = 1800
WHERE course_id = 101;


-- 5. DELETE ONE PAYMENT

DELETE FROM payments
WHERE payment_id = 10;


-- 6. READ / DISPLAY RECORDS

SELECT * FROM students;

SELECT * FROM courses;

SELECT * FROM payments;


-- 7. JOIN: STUDENT PAYMENT DETAILS

SELECT
    students.name,
    courses.course_name,
    payments.amount,
    payments.paid_on
FROM payments
INNER JOIN students
    ON payments.student_id = students.student_id
INNER JOIN courses
    ON payments.course_id = courses.course_id
ORDER BY payments.paid_on ASC;



-- =========================================
-- TASK 3: MONTHLY FEE SUMMARY
-- =========================================

DELIMITER $$

CREATE PROCEDURE monthly_fee_summary(
    IN p_month INT,
    IN p_year INT
)
BEGIN

    -- Course-wise payment summary

    SELECT
        c.course_name,
        COUNT(p.payment_id) AS number_of_payments,
        SUM(p.amount) AS total_collected

    FROM payments p

    INNER JOIN courses c
        ON p.course_id = c.course_id

    WHERE MONTH(p.paid_on) = p_month
      AND YEAR(p.paid_on) = p_year

    GROUP BY c.course_id, c.course_name;


    -- Grand total in a separate SELECT

    SELECT
        SUM(amount) AS grand_total

    FROM payments

    WHERE MONTH(paid_on) = p_month
      AND YEAR(paid_on) = p_year;

END $$

DELIMITER ;


-- CALL THE PROCEDURE

CALL monthly_fee_summary(1, 2026);



-- =========================================
-- TASK 4: MANUAL PAYMENT TOTAL VERIFICATION
-- =========================================

/*
MANUAL ADDITION OF ORIGINAL 10 PAYMENTS

JANUARY 2026:
1500 + 800 + 2500 + 1500 + 800 = 7100

FEBRUARY 2026:
2500 + 1500 + 800 + 2500 + 1500 = 8800

ORIGINAL GRAND TOTAL = 15900

PAYMENT ID 10 DELETED:
1500

FINAL GRAND TOTAL = 14400
*/


-- Monthly summary for January 2026
CALL monthly_fee_summary(1, 2026);


-- Monthly summary for February 2026
CALL monthly_fee_summary(2, 2026);
