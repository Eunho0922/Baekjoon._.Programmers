-- 코드를 입력하세요
SELECT WAREHOUSE_ID, WAREHOUSE_NAME, ADDRESS, IFNULL(FREEZER_YN, 'N') as FREEZER_YN
From FOOD_WAREHOUSE
where WAREHOUSE_NAME Like '%경기%'
order by warehouse_id;