## 📝11725번: 트리의 부모 찾기
##### 알고리즘 구상
- 둘째 줄부터 N-1개의 줄에 트리 상에서 연결된 두 정점이 주어진다: 두 정점이 같은 부모를 가지는 것이 아니라, edge로 연결되어있다는 뜻
- 이진트리 조건이 없음 -> 한 노드에 여러 노드가 연결될 수 있음 -> 특정 노드에 연결되는 노드들을 모두 담아서 반복하며 부모 노드를 결정(재귀호출 사용)

##### 참고 자료
https://velog.io/@kon6443/Data-Structure-%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-C-%ED%8A%B8%EB%A6%AC

https://min-zero.tistory.com/entry/C-%EA%B8%B0%EB%B3%B8-%EA%B3%B5%EB%B6%80%EC%A0%95%EB%A6%AC-11-3-%EC%9E%AC%EA%B7%80%ED%95%A8%EC%88%98Recursive-function
##### 문제 풀이
- 특정 노드에 연결되는 노드들을 모두 담아 무방향 트리를 만듦
- 특정 노드에 연결된 노드들을 확인하며 방문하지 않았으면 부모노드로 우선 설정 -> 재귀호출로 반복하여 모든 노드를 방문
---
## 📝1158번: 요세푸스 문제
##### 알고리즘 구상
- N명이 원을 이루면서 앉아있고, 그 중 K번째 사람을 제거한다: queue 또는 연결리스트 사용
- 연결리스트 사용: 위치만 안다면 번거롭게 k-1번째까지의 사람을 뒤로 빼는 과정을 하지 않아도 된다는 점에서 효율적임

##### 참고 자료
https://huangdi.tistory.com/96

https://limecoding.tistory.com/90

https://karen0117.tistory.com/84

https://velog.io/@jimojjing/CSTL-List

https://velog.io/@dnflrhkddyd/C%EB%AC%B8%EB%B2%95-%EB%B0%98%EB%B3%B5%EC%9E%90-Iteratorvector-list
##### 문제 풀이
- 리스트에 1부터 N까지의 숫자를 넣고 K-1번째까지 돌다가 리스트의 끝이면 처음으로 초기화
- 리스트의 크기가 0이 될 때까지 K번째의 사람을 출력(제거)하고 삭제하는 과정을 반복
