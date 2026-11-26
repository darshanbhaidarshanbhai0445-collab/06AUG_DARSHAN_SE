
USE canteen_db;

-- Set stock values
UPDATE menu_items
SET stock = CASE
    WHEN item_id = 1 THEN 0
    WHEN item_id = 2 THEN 10
    WHEN item_id = 3 THEN 50
END
WHERE item_id IN (1, 2, 3);

-- Create procedure
DROP PROCEDURE IF EXISTS show_item_status;

DELIMITER //

CREATE PROCEDURE show_item_status(IN p_item_id INT)
BEGIN
    DECLARE v_stock INT;
    DECLARE v_item_name VARCHAR(50);

    SELECT stock, item_name
    INTO v_stock, v_item_name
    FROM menu_items
    WHERE item_id = p_item_id;

    IF v_stock = 0 THEN

        SELECT p_item_id AS item_id,
               v_item_name AS item_name,
               v_stock AS stock,
               'Out of stock' AS status;

    ELSEIF v_stock < 20 THEN

        SELECT p_item_id AS item_id,
               v_item_name AS item_name,
               v_stock AS stock,
               'Low stock' AS status;

    ELSE

        SELECT p_item_id AS item_id,
               v_item_name AS item_name,
               v_stock AS stock,
               'In stock' AS status;

    END IF;

END //

DELIMITER ;

-- Call procedure
CALL show_item_status(1);
CALL show_item_status(2);
CALL show_item_status(3);