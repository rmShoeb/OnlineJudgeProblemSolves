SELECT
    CITY.NAME
FROM
    CITY
INNER JOIN
    COUNTRY ON
        CITY.COUNTRYCODE = COUNTRY.CODE
WHERE
    COUNTRY.CONTINENT = 'Africa'
;ECHO is on.