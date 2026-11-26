drop database if exists canteen_db;
create database canteen_db;
use canteen_db;

create table menu_items (
item_id int primary key auto_increment,
item_name varchar(50),
price int , 
stock int );

create table orders (
order_id int auto_increment primary key , 
item_id int , 
quantity int , 
order_date date , 
foreign key (item_id) references menu_items(item_id));

insert into menu_items (item_name , price , stock ) values
('Samosa',30,25),
('Dabeli',50,30),
('Pizaa',70,40),
('Snacks',30,30),
('Dosa',40,50),
('Idali',40,50);

select * from menu_items;

