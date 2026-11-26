create database bus_passes;

use bus_passes;

create table passenger(
passenger_id int primary key auto_increment,
name varchar(45),
age int,
city varchar(45)
);

insert into  passenger(passenger_id,name,age,city)values
(1,'vivek',21,'rajkot'),
(2,'darshan',21,'rajkot'),
(3,'kevin',22,'rajkot'),
(4,'vraj',21,'rajkot');
 
 select *from passenger;
 