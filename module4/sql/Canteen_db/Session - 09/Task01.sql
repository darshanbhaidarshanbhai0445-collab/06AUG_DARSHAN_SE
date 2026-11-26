
USE canteen_db;

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

    -- Insert order first
    INSERT INTO orders (item_id, quantity, order_date)
    VALUES (p_item_id, p_qty, CURDATE());

    -- Reduce item stock
    UPDATE menu_items
    SET stock = stock - p_qty
    WHERE item_id = p_item_id;

    -- Save transaction
    COMMIT;

    SELECT 'Order placed successfully' AS message;

END //

DELIMITER ;


-- Test 1: Valid item
CALL place_order(1, 2);

-- Check stock
SELECT * FROM menu_items;

-- Test 2: Unknown item
CALL place_order(99, 2);

-- Check stock again
SELECT * FROM menu_items;
