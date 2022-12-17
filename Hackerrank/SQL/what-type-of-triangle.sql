select
    case
        when (a+b)<=c then 'Not A Triangle'
        when a=b then
            case
                when a=c then 'Equilateral'
                else 'Isosceles'
            end
        else
            case
                when a=c then 'Isosceles'
                else 'Scalene'
            end
    end
from
    TRIANGLES
;