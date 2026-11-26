use school_db;
describe students;
insert into students (name , class, city,email) values
('Abhi','9A','Morbi','abhist@gmail.com'),
('Vivaan','9A','Rajkot','Vivaan@gmail.com'),
('Raj','9A','Mumbai','RAj09@gmail.com'),
('Anjali','9B','Rajkot','anjali@gmail.com'),
('Navyaa','9B','Dholera','Navyajee@gmail.com'),
('Shital','9B','Surat','Foolperson@gmail.com'),
('Rahul','9A','Gondal','RahulNet@gmail.com'),
('Divya','9B','junagadh','divyaTopper@gmail.com');

select * from students;

describe subjects;

insert into subjects values
(1,'Maths','100'),
(2,'Science','100'),
(3,'English','100'),
(4,'Hindi','100'),
(5,'Social Science','100');

select * from students;
select * from subjects;

describe marks;

insert into marks (roll_no,subject_id,marks_obtained) values
(1,1,67),(1,2,81),(1,3,90),(1,4,77),
(2,1,91),(2,2,56),(2,3,88),(2,4,99),
(3,1,92),(3,2,39),(3,3,67),(3,4,85),
(4,1,68),(4,2,71),(4,3,87),(4,4,97),
(5,1,69),(5,2,78),(5,3,74),(5,4,94);

select * from marks;

update students set class = '10A' where class = '9A';
update students set city = 'Anand' where roll_no = 1;
update marks set marks_obtained = marks_obtained + 5 where marks_id = 1;
select * from students;
select * from marks;

select * from marks limit 5;

insert into marks (roll_no,subject_id,marks_obtained) values
(1,1,72);

DELETE FROM marks where 
roll_no = 1  
AND subject_id = 1 
AND marks_obtained = 72 limit 1;

delete from marks where roll_no = 1;
select * from marks;

select * from students;

delete from students where roll_no = 1;

select * from marks limit 5;



