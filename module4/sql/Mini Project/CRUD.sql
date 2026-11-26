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
