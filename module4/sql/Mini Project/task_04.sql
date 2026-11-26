
-- =========================================
-- TASK 4: MANUAL PAYMENT TOTAL VERIFICATION
-- =========================================

/*
MANUAL ADDITION OF ORIGINAL 10 PAYMENTS

JANUARY 2026:
1500 + 800 + 2500 + 1500 + 800 = 7100

FEBRUARY 2026:
2500 + 1500 + 800 + 2500 + 1500 = 8800

ORIGINAL GRAND TOTAL = 15900

PAYMENT ID 10 DELETED:
1500

FINAL GRAND TOTAL = 14400
*/


-- Monthly summary for January 2026
CALL monthly_fee_summary(1, 2026);


-- Monthly summary for February 2026
CALL monthly_fee_summary(2, 2026);
