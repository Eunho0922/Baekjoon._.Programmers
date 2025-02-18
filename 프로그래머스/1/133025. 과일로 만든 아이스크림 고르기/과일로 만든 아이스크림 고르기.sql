-- 코드를 입력하세요
SELECT A.FLAVOR
From FIRST_HALF AS A INNER JOIN ICECREAM_INFO AS B ON  A.FLAVOR = B.FLAVOR
Where B.Ingredient_type = 'fruit_based' and A.Total_ORDER > 3000
order by A.Total_ORDER DESC;