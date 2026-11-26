
USE canteen_db;

START TRANSACTION;

-- Insert first order line
INSERT INTO orders (item_id, quantity, order_date)
VALUES (1, 2, CURDATE());

-- Insert second order line
INSERT INTO orders (item_id, quantity, order_date)
VALUES (2, 3, CURDATE());

-- Create savepoint after two valid orders
SAVEPOINT two_orders;

-- Insert mistaken third order line
INSERT INTO orders (item_id, quantity, order_date)
VALUES (3, 500, CURDATE());

-- Undo only the mistaken third order
ROLLBACK TO SAVEPOINT two_orders;

-- Save the two valid orders
COMMIT;

-- Display all orders
SELECT * FROM orders;
