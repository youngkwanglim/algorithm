-- 코드를 입력하세요
SELECT BOOK_ID, AUTHOR_NAME, date_format(PUBLISHED_DATE, '%Y-%m-%d') as PUBLISHED_DATE
FROM book B
join author A on B.AUTHOR_ID = A.AUTHOR_ID
where CATEGORY = '경제'
order by PUBLISHED_DATE;