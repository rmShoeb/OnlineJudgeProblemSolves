with cte_points as (
    select
        min(LAT_N) a,
        max(LAT_N) b,
        min(LONG_W) c,
        max(LONG_W) d
    from
        STATION
)
select
    cast(sqrt(power((a-b),2)+power((c-d), 2)) as decimal(10,4))
from
    cte_points
;