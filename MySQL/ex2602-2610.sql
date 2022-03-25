create database exercicios_uri;
use exercicios_uri;

# URI 2602

select name from customers where state = 'RS';

# URI 2603

select name, street from customers where city='Porto Alegre';


# URI 2604

select id, name from products where price < 10 or price > 100;

# URI 2605

select products.name, providers.name from products
inner join providers on products.id_providers = providers.id
where products.id_categories = '6';  

# URI 2606

select products.id, products.name from products
inner join categories on products.id_categories = categories.id
where categories.name like '%super%';


