# URI 2605

create database representantes_executivos;
use representantes_executivos;

create table providers(
id int auto_increment primary key,
    name_providers varchar(30),
    state varchar(2)
);

create table categories(
id int auto_increment primary key,
    name_categories varchar(30)
);


create table products(
id int auto_increment primary key,
    name_prod varchar(30),
    id_providers int,
    id_categories int,
    foreign key(id_providers) references providers(id),
    foreign key(id_categories) references categories(id)
);

insert into categories(name_categories) values
('old stock'),
    ('new stock'),
    ('modern'),
    ('commercial'),
    ('recyclable'),
    ('executive'),
    ('superior'),
    ('wood'),
    ('super luxury'),
    ('vintage');
   
select * from categories;

insert into providers(name_providers, state) values
('Henrique', 'RJ'),
    ('Marcelo Augusto', 'MG'),
    ('Caroline Silva', 'BA'),
    ('Guilerme Staff', 'RS'),
    ('Isabela Moraes', 'PR'),
    ('Francisco Accerr', 'SP');

select * from providers;  

insert into products(name_prod, id_providers, id_categories) values
('Two-door wardrobe', 6, 8),
    ('Dining Table', 1, 9),
    ('Towel holder', 5, 1),
    ('Computer desk', 4, 6),
    ('Chair', 3, 6),
    ('Single Bed', 1, 2);
   
select * from products;
   
select products.name_prod, providers.name_providers from products
inner join providers on products.id_providers = providers.id
where products.id_categories = '6';    

# URI 2606

create table products_02(
id int auto_increment primary key,
    name_prod varchar(30),
    id_categories int,
    foreign key(id_categories) references categories(id)
);

insert into products_02(name_prod, id_categories) values
('Lampshade', 4),
    ('Table for painting', 9),
    ('Notebook desk', 9),
    ('Computer desk', 6),
    ('Chair', 9),
    ('Home alarm', 4);
   
select * from products_02;

select products_02.id, products_02.name_prod from products_02
inner join categories on products_02.id_categories = categories.id
where categories.name_categories like '%super%';
