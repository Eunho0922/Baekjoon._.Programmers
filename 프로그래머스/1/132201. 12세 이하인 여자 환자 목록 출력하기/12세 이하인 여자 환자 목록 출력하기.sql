-- 코드를 입력하세요
SELECT PT_NAME, PT_NO, GEND_CD, AGE, IFNULL(TLNO, 'NONE') as TLNO
from patient
where age <= 12 and gend_cd='W'
order by age desc, pt_name asc;