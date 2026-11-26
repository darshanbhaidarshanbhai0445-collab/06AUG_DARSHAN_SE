use school_db;
select * from students where class = '10A' order by name asc;

select
    roll_no,
    subject_id,
    marks_obtained AS scored_marks
from marks
where marks_obtained >= 80
order by marks_obtained DESC;

select * from marks order by marks_obtained DESC limit 3;

select name as students_name from students;

select * from marks;

select sum(marks_obtained) as score_done_by_roll_no2 from marks where roll_no = 2;
select round(avg(marks_obtained),2) as avg_score_of_roll_no2 from marks where roll_no = 2;
select count(name) as total_student_in_10A from students where class = '10A';

select * from marks;
select round(avg(marks_obtained),2) as avg_marks_per_Subject from marks group by subject_id;
select sum(marks_obtained) as total_marks_grab_by_each_student from marks group by roll_no order by total_marks_grab_by_each_student desc;
select count(marks_id) as marks_row from marks group by subject_id;

select roll_no, sum(marks_obtained) as topper_marks from marks group by roll_no order by topper_marks desc limit 1;
