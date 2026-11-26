use school_db;
select * from marks;
select * from subjects;
select * from students;

alter table marks add foreign key (roll_no) references students(roll_no);
alter table marks add foreign key (subject_id) references subjects(subject_id);

insert into marks (roll_no,subject_id,marks_obtained) values(99,45,89);

-- 14:56:26	insert into marks (roll_no,subject_id,marks_obtained) values (99,45,89)	
-- Error Code: 1452. Cannot add or update a child row: a foreign key constraint fails 
-- (`school_db`.`marks`, CONSTRAINT `marks_ibfk_1` FOREIGN KEY (`roll_no`) REFERENCES `students` (`roll_no`))	0.016 sec


SELECT
    s.name,
    sub.subject_name,
    m.marks_obtained,
    sub.max_marks
FROM students AS s
INNER JOIN marks AS m
    ON s.roll_no = m.roll_no
INNER JOIN subjects AS sub
    ON m.subject_id = sub.subject_id
WHERE s.roll_no = 1 
ORDER BY sub.subject_name;

SELECT
    s.roll_no,
    s.name,
    m.marks_obtained
FROM students AS s
LEFT JOIN marks AS m
    ON s.roll_no = m.roll_no
WHERE m.roll_no IS NULL;

SELECT
    sub.subject_id,
    sub.subject_name,
    COUNT(m.marks_id) AS total_marks
FROM marks AS m
RIGHT JOIN subjects AS sub
    ON m.subject_id = sub.subject_id
GROUP BY
    sub.subject_id,
    sub.subject_name
ORDER BY sub.subject_id;