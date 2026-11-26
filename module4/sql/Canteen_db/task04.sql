USE canteen_db;

DROP PROCEDURE IF EXISTS inventory_value;

DELIMITER //

CREATE PROCEDURE inventory_value(OUT p_total DECIMAL(10,2))
BEGIN

    -- Declare variables
    DECLARE v_price DECIMAL(10,2);
    DECLARE v_stock INT;
    DECLARE v_done INT DEFAULT 0;

    -- Declare cursor
    DECLARE item_cursor CURSOR FOR
        SELECT price, stock FROM menu_items;

    -- Declare handler
    DECLARE CONTINUE HANDLER FOR NOT FOUND
        SET v_done = 1;

    -- Initialize total
    SET p_total = 0;

    -- Open cursor
    OPEN item_cursor;

    read_loop: LOOP

        -- Fetch records
        FETCH item_cursor INTO v_price, v_stock;

        IF v_done = 1 THEN
            LEAVE read_loop;
        END IF;

        -- Calculate inventory value
        SET p_total = p_total + (v_price * v_stock);

    END LOOP;

    -- Close cursor
    CLOSE item_cursor;

END //

DELIMITER ;

-- Call procedure
CALL inventory_value(@total);

-- Display procedure result
SELECT @total AS inventory_total;

-- Verify using SUM()
SELECT SUM(price * stock) AS calculated_total
FROM menu_items;
