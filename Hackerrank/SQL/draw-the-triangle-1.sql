DECLARE @counter INT
SET @counter=20

WHILE (@counter > 0)
BEGIN
    PRINT CONCAT('*', REPLICATE(' *', @counter-1))
    SET @counter  = @counter-1
END
;