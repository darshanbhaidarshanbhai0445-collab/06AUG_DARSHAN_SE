
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



