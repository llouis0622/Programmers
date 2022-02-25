SELECT HOUR(DATETIME) AS hour,
COUNT(*) AS count
FROM ANIMAL_OUTS
GROUP BY hour
HAVING hour BETWEEN 9 AND 19
ORDER BY hour ASC;