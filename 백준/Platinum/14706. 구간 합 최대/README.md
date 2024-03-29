# [Platinum V] 구간 합 최대 - 14706 

[문제 링크](https://www.acmicpc.net/problem/14706) 

### 성능 요약

메모리: 5132 KB, 시간: 128 ms

### 분류

다이나믹 프로그래밍, 그리디 알고리즘

### 문제 설명

<p>승현이는 음이 아닌 정수 N개로 구성된 배열을 가지고 놀고 있다. 이 배열에는 M개의 특별한 조건이 있는데, 그것은 길이가 L<sub>i</sub>인 어떤 연속한 구간을 잡아도 합이 S<sub>i</sub>를 넘지 않는다는 것이다. 승현이는 특별한 조건을 모두 만족하는 배열을 모두 만들어 놓고, 1 이상 N 이하의 모든 정수 K에 대해 각 배열에서 길이가 K인 모든 연속한 구간마다 원소의 합을 구하고 그 중 가장 큰 것을 찾아보았다. 하지만 승현이는 계산에 자신이 없어서 자신이 잘 구했는지 확신하지 못하고 있다. 승현이가 올바르게 구했는지 알아보자.</p>

### 입력 

 <p>첫 번째 줄에 배열을 구성하는 정수의 개수 N(1 ≤ N ≤ 200, 000)과 특별한 조건의 개수 M(1 ≤ M ≤ 200)이 주어진다.</p>

<p>두 번째 줄부터 M 개의 줄에 걸쳐 특별한 조건을 의미하는 두 정수 L<sub>i</sub> 와 S<sub>i</sub> 가 주어진다. (1 ≤ i ≤ M, 1 ≤ L<sub>i</sub> ≤ N, 1 ≤ S<sub>i</sub> ≤ 10<sup>9</sup>)</p>

### 출력 

 <p>N줄에 걸쳐 K번째 줄에 특별한 조건을 모두 만족하는 배열의 길이가 K인 연속한 구간들 중 합이 가장 큰 구간의 구간 합을 출력한다.</p>

