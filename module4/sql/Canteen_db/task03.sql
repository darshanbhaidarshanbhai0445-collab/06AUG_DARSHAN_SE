USE canteen_db;

DROP PROCEDURE IF EXISTS restock_all;

DELIMITER //

CREATE PROCEDURE restock_all(IN p_amount INT)
BEGIN

    DECLARE counter INT DEFAULT 1;

    WHILE counter <= 6 DO

        UPDATE menu_items
        SET stock = stock + p_amount
        WHERE item_id = counter;

        SET counter = counter + 1;

    END WHILE;

END //

DELIMITER ;

-- Call the procedure
CALL restock_all(25);

-- Display updated menu
SELECT * FROM menu_items;