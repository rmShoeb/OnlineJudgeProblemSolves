with cte_income as (
    select
        salary*months income
    from
        Employee
)
select
    income,
    count(income)
from
    cte_income
where
    income=(
        select max(income)
        from cte_income
    )
group by
    income
;