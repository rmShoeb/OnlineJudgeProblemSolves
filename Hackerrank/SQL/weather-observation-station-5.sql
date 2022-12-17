SELECT TOP 2
    CITY,
    LEN(CITY)
FROM
    STATION
WHERE
    LEN(CITY) = (
        SELECT
            MAX(LEN(city))
        FROM
            STATION
    )
    OR
    LEN(CITY) = (
        SELECT
            MIN(LEN(city))
        FROM
            STATION
    )
ORDER BY
    LEN(CITY) DESC,
    CITY ASC
;