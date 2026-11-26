
USE canteen_db;

-- Remove the trigger if it already exists
DROP TRIGGER IF EXISTS trg_reduce_stock;

DELIMITER //

-- Create AFTER INSERT trigger
CREATE TRIGGER trg_reduce_stock
AFTER INSERT ON orders
FOR EACH ROW
BEGIN
    UPDATE menu_items
    SET stock = stock - NEW.quantity
    WHERE item_id = NEW.item_id;
END //

DELIMITER ;

-- Remove the manual stock UPDATE from place_order
DROP PROCEDURE IF EXISTS place_order;

DELIMITER //

CREATE PROCEDURE place_order(
    IN p_item_id INT,
    IN p_qty INT
)
BEGIN
    DECLARE EXIT HANDLER FOR SQLEXCEPTION
    BEGIN
        ROLLBACK;
        SELECT 'Order failed' AS message;
    END;

    START TRANSACTION;

    INSERT INTO orders (item_id, quantity, order_date)
    VALUES (p_item_id, p_qty, CURDATE());

    COMMIT;

    SELECT 'Order placed successfully' AS message;
END //

DELIMITER ;

-- Check stock before placing order
SELECT item_id, item_name, stock
FROM menu_items
WHERE item_id = 1;

-- Place an order for 3 plates
CALL place_order(1, 3);

-- Check stock after placing order
SELECT item_id, item_name, stock
FROM menu_items
WHERE item_id = 1;
