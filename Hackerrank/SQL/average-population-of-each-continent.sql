select
    ctr.CONTINENT,
    cast(round(avg(ct.POPULATION), 0) as int)
from
    city ct
inner join country ctr
    on ct.COUNTRYCODE = ctr.CODE
group by
    ctr.CONTINENT
;