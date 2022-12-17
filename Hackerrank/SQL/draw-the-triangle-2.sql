DECLARE @counter INT
SET @counter=0

WHILE (@counter<20)
BEGIN
    PRINT CONCAT('*', REPLICATE(' *', @counter))
    SET @counter  = @counter+1
END
;