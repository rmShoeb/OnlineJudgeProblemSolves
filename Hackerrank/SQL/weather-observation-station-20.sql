select
    cast (LAT_N as decimal(10,4))
from
    STATION
order by
    LAT_N
OFFSET 249 ROWS
FETCH NEXT 1 ROWS ONLY;
;