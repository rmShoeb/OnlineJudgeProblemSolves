with cte_points as (
    select
        min(LAT_N) a,
        max(LAT_N) c,
        min(LONG_W) b,
        max(LONG_W) d
    from
        STATION
)
select
    cast(abs(a-c)+abs(b-d) as decimal(10,4))
from
    cte_points
;