create schema 3c;
create table city
( 
city_id int primary key,
city_name varchar(50),
lat double,
 city_long double,
country_id int,
foreign key city(country_id) references country(country_id)
);
insert into city(city_id,city_name,lat,city_long,country_id) values
(1, 'berlin',52.520008,13.404954,1),
(2, 'belgrade',44.787197,20.457273,2),
(3, 'zagreb',45.815399,15.9665683,3),
(4, 'newyork',40.730610,-73.935242,4),
(5, 'losangeles',34.052235,-118.243683,4),
(6, 'warsaw',52.237049,21.017532,5);
create table country
(
country_id int primary key,
country_name varchar(50),
country_name_eng varchar(100),
country_code varchar(25)
);
insert into country(country_id,country_name,country_name_eng,country_code) values
(1, 'deutschland','germany','DEU'),
(2, 'srbija','serbia','SRB'),
(3, 'hrvatska','croatia','HRV'),
(4, 'united states of america','united states of america','USA'),
(5, 'polska','poland','POL'),
(6, 'espana','spain','ESP'),
(7, 'rossiya','russia','RUS');
create table customer
(
customer_id int unique,
customer_name varchar(50),
city_id int,
customer_address varchar(100),
next_call_date date,
ts_inserted timestamp default current_timestamp,
foreign key customer(city_id) references city(city_id)
);
insert into customer(customer_id,customer_name,city_id,customer_address,next_call_date,ts_inserted) values 
(1, 'Jewelry Store', 4, 'Long Street 120', '2020-01-21', '2020-01-09 14:01:20.000'),
(2, 'Bakery', 1, 'Kurfürstendamm 25', '2020-02-21', '2020-01-09 17:52:15.000'),
(3, 'Café', 1, 'Tauentzienstraße 44', '2020-01-21', '2020-01-10 08:02:49.000'),
(4, 'Restaurant', 3, 'Ulica lipa 15', '2020-01-21', '2020-01-10 09:20:21.000');
SELECT 
    co.country_name_eng as country,
    ci.city_name as city,
    cu.customer_name as customer
from country co
left join city ci on co.country_id = ci.country_id
left join customer cu on cu.city_id = ci.city_id
order by co.country_name_eng, ci.city_name, cu.customer_name;
SELECT 
    co.country_name_eng as country,
    ci.city_name as city,
    cu.customer_name as customer
from country co
inner join city ci on co.country_id = ci.country_id  
left join customer cu on  ci.city_id = cu.city_id     
order by co.country_name_eng, ci.city_name, cu.customer_name;
