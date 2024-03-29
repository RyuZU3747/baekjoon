# [Platinum III] 이상한 기계 - 17634 

[문제 링크](https://www.acmicpc.net/problem/17634) 

### 성능 요약

메모리: 26728 KB, 시간: 568 ms

### 분류

수학, 정수론

### 문제 설명

<p>고고학자들은 고대 문명이 남긴 이상한 기계를 발견하였다. 이 기계는 두 정수 x와 y를 출력하는 두 부분이 있다.</p>

<p>이 기계를 조사해보고, 고고학자들은 이 기계가 과거의 어느 시점부터 시작하여 시점 t에 대한 정보를 출력 하는 특별한 시계라는 결론을 내렸다. 시점 T에서 첫 번째 출력 부분에서는 정수 x = ((t + ⌊t/B⌋ ) mod A)를 출력하고, 두번째 출력 부분에서는 정수 y = (t mod B)를 출력한다. (⌊x⌋는 x 이하이면서 가장 큰 정수를 나타낸다.)</p>

<p>분석을 해 보니 이 기계가 항상 동작하는 것은 아니며, n개의 연속된 구간 [l<sub>i</sub>, r<sub>i</sub>]에서만 동작하는 것을 알게 되었다. 향후 연구를 위해서, 고고학자들은 당신에게 이 기계가 출력하는 순서쌍 (x, y) 중 서로 다른 것이 모두 몇 개인지를 알아내는 프로그램을 작성하도록 부탁했다.</p>

<p>두 순서쌍 (x<sub>1</sub>, y<sub>1</sub>)와 (x<sub>2</sub>, y<sub>2</sub>)는 만약 x<sub>1</sub> ≠ x<sub>2</sub>이거나 y<sub>1</sub> ≠ y<sub>2</sub>이라면 서로 다르다.</p>

### 입력 

 <p>첫 줄에는 세 정수 n, A, B가 주어진다. (1 ≤ n ≤ 10<sup>6</sup>; 1 ≤ A, B ≤ 10<sup>18</sup>).</p>

<p>다음 n줄의 각각에는 두 정수 l<sub>i</sub>와 r<sub>i</sub>가 주어지는데, 이 기계가 동작하는 구간 [l<sub>i</sub>, r<sub>i</sub>]의 시작 시점과 종료 시점을 나타낸다. (0 ≤ l<sub>i</sub> ≤ r<sub>i</sub> ≤ 10<sup>18</sup> , r<sub>i</sub> < l<sub>i+1</sub>).</p>

### 출력 

 <p>이 기계가 동작하는 동안 출력하는 서로 다른 순서쌍 (x, y)의 수를 출력한다.</p>

