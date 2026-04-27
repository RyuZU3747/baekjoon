# [Platinum V] 삼색정리 - 32102 

[문제 링크](https://www.acmicpc.net/problem/32102) 

### 성능 요약

메모리: 5940 KB, 시간: 100 ms

### 분류

그리디 알고리즘, 애드 혹, 해 구성하기

### 제출 일자

2026년 04월 28일 02:30:49

### 문제 설명

<p>다음 조건들에 부합하도록 $N$행 $M$열 격자판의 각 칸을 색칠해 보자.</p>

<ul>
	<li>빨간색 칸이 $R$개, 초록색 칸이 $G$개, 파란색 칸이 $B$개여야 한다.</li>
	<li>상하좌우로 이웃한 두 칸의 색은 서로 달라야 한다.</li>
</ul>

### 입력 

 <p>첫째 줄에 격자판의 행의 개수와 열의 개수를 각각 나타내는 정수 $N$, $M$이 공백으로 구분되어 주어진다. $(2 \leq N, M \leq 2\,000)$ </p>

<p>둘째 줄에 사용 가능한 세 가지 색상의 개수 $R$, $G$, $B$가 공백으로 구분되어 주어진다. $(1 \le R, G, B \le N\times M;$ $R + G + B = N \times M)$</p>

### 출력 

 <p>주어진 조건에 맞게 격자판을 색칠할 수 있다면 첫째 줄에 <span style="color:#e74c3c;"><code>YES</code></span>, 불가능하다면 <span style="color:#e74c3c;"><code>NO</code></span>를 출력한다.</p>

<p>색칠할 수 있다면 다음 $N$줄에 걸쳐 색칠된 격자판을 출력한다. 그중 $r$번째 줄 $c$번째 문자로는 격자판의 $r$행 $c$열에 있는 칸이 빨간색이면 <span style="color:#e74c3c;"><code>R</code></span>, 초록색이면 <span style="color:#e74c3c;"><code>G</code></span>, 파란색이면 <span style="color:#e74c3c;"><code>B</code></span>를 출력한다. $(1 \le r \le N;$ $1 \le c \le M)$</p>

<p>가능한 방법이 여러 가지라면 그중 아무거나 출력한다.</p>

