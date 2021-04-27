# 알고리즘(Algorithm)

* * *
> ## 1.퀵 정렬 (quick sort) 


>> #### 분할정복 패러다임을 기반으로 한 정렬 알고리즘이다. 각 부분수열의 맨 처음에 있는 수를 기준으로 삼는다. 기준보다 작은 수를 왼쪽으로, 큰 수를 오른 쪽으로 가게끔 수열을 분해한다.

>> #### 시간 복잡도 : 최악의 경우 시간복잡도는 O(N^2)이 되지만, 평균적으로 부분 문제가 절반에 가깝게 나누어질 경우 시간복잡도는 O(nlog(n))이 된다.

* * *

> ## 2.선택 정렬 (selection sort)


>> #### 배열에서 최소값을 찾는다. 그 다음에 찾은 최소값을 맨 앞의 요소와 바꿔준다. 맨 앞을 제외한 값들에서 최소값을 찾고 위와 같은 방법으로 교체해준다.

>> #### 시간 복잡도 : N개의 요소가 있다고 가정하에 첫번째 자리에 올 요소를 찾기 위해서 N개의 요소를 탐색한다. 그 다음 두번째 자리에 올 요소를 탐색하려면 N-1개의 요소를 탐색한다. 세번째는 N-2, 네번째는 N-3 ... 이 탐색 시간을 모두 더하면 시간 복잡도는 O(N^2)가 된다. 다른 정렬 알고리즘에 비해 구현이 간단하지만 성능이 좋지 않은 알고리즘이다.
