
USE canteen_db;

-- ==========================================
-- TEST 1: Trigger reduces stock by 3
-- ChatGPT expected: Stock decreases by exactly 3.
-- MySQL actual: Write your Workbench result here.
-- ==========================================

SELECT stock INTO @stock_before
FROM menu_items
WHERE item_id = 1;

CALL place_order(1, 3);

SELECT
    @stock_before AS before_order,
    stock AS after_order,
    @stock_before - stock AS stock_reduced
FROM menu_items
WHERE item_id = 1;


-- ==========================================
-- TEST 2: SAVEPOINT and ROLLBACK
-- ChatGPT expected: Exactly two new order lines remain.
-- The mistaken 500-plate order is rolled back.
-- MySQL actual: Write your Workbench result here.
-- ==========================================

SET @last_order_id = (
    SELECT COALESCE(MAX(order_id), 0)
    FROM orders
);

START TRANSACTION;

INSERT INTO orders (item_id, quantity, order_date)
VALUES (2, 1, CURDATE());

INSERT INTO orders (item_id, quantity, order_date)
VALUES (3, 1, CURDATE());

SAVEPOINT valid_orders;

INSERT INTO orders (item_id, quantity, order_date)
VALUES (3, 500, CURDATE());

ROLLBACK TO SAVEPOINT valid_orders;

COMMIT;

SELECT *
FROM orders
WHERE order_id > @last_order_id;

SELECT COUNT(*) AS new_order_lines
FROM orders
WHERE order_id > @last_order_id;


-- ==========================================
-- TEST 3: Invalid item ID
-- ChatGPT expected: Order failed.
-- Stock remains unchanged and no invalid order is inserted.
-- MySQL actual: Write your Workbench result here.
-- ==========================================

SELECT stock INTO @stock_before
FROM menu_items
WHERE item_id = 1;

CALL place_order(99, 2);

SELECT
    @stock_before AS before_order,
    stock AS after_order
FROM menu_items
WHERE item_id = 1;

SELECT COUNT(*) AS invalid_orders
FROM orders
WHERE item_id = 99;
