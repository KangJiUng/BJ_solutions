## 📝1931번: 회의실 배정
##### 알고리즘 구상
- 회의실을 사용할 수 있는 회의의 최대 개수 -> 그리디 사용
- 24시간제 사용 -> 회의의 끝나는 시간을 기준으로 오름차순 정렬
- 회의의 현재 시작 시간을 기준으로 이전 회의시간의 끝나는 시간과 같거나 크면 회의 추가
- 초기 구상은 시작 시간을 기준으로 오름차순 정렬 -> 실패

##### 참고 자료
https://sectumsempra.tistory.com/88

https://velog.io/@ryong9rrr/C-STL-sort-vector-pair

https://dingcoding.tistory.com/62

##### 문제 풀이
- 각 회의의 시작 시간과 끝나는 시간을 vector pair를 사용해 저장
- sort 함수 사용: compare 함수를 이용해 회의의 끝나는 시간을 기준으로 오름차순 정렬
- endtime 변수 사용: 이전 회의의 끝나는 시간
- 반복문을 통해 겹치지 않는 회의를 선택하고, endtime을 갱신하여 최대 회의 개수를 찾음
---
## 📝17413번: 단어 뒤집기 2
##### 알고리즘 구상
- '<'를 입력받으면 '>'가 나올 때까지 벡터에 저장 후 그대로 출력
- 알파벳 소문자, 숫자를 입력받을 땐 공백이 나올 때까지 벡터에 저장
- 공백이 나오면 벡터에 있던 문자열을 거꾸로 출력

##### 참고 자료
https://aeunhi99.tistory.com/114

https://coding-factory.tistory.com/596

https://choryeonworkshop.tistory.com/119

##### 문제 풀이
- 미성공
