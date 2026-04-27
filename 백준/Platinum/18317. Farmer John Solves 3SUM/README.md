# [Platinum III] Farmer John Solves 3SUM - 18317 

[문제 링크](https://www.acmicpc.net/problem/18317) 

### 성능 요약

메모리: 409376 KB, 시간: 868 ms

### 분류

다이나믹 프로그래밍, 누적 합

### 제출 일자

2026년 04월 28일 02:30:48

### 문제 설명

<p>Farmer John believes he has made a major breakthrough in algorithm design: he claims to have found a nearly linear time algorithm for the 3SUM problem, an algorithmic problem famous for the fact that no known solution exists running in substantially better than quadratic time. One formulation of the 3SUM problem is the following: given an array $s_1,\dots,s_m$ of integers, count the number of unordered triples of distinct indices $i,j,k$ such that $s_i + s_j + s_k = 0$.</p>

<p>To test Farmer John's claim, Bessie has provided an array $A$ of $N$ integers ($1 \leq N \leq 5000$). Bessie also asks $Q$ queries ($1 \leq Q \leq 10^5$), each of which consists of two indices $1 \leq a_i \leq b_i \leq N$. For each query, Farmer John must solve the 3SUM problem on the subarray $A[a_i \dots b_i]$.</p>

<p>Unfortunately, Farmer John has just discovered a flaw in his algorithm. He is confident that he can fix the algorithm, but in the meantime, he asks that you help him pass Bessie's test!</p>

### 입력 

 <p>The first line contains two space-separated integers $N$ and $Q$. The second line contains the space-separated elements $A_1,\dots,A_N$ of array $A$. Each of the subsequent $Q$ lines contains two space-separated integers $a_i$ and $b_i$, representing a query.</p>

<p>It is guaranteed that $-10^6 \leq A_i \leq 10^6$ for every array element $A_i$.</p>

### 출력 

 The output should consist of $Q$ lines, with each line $i$ containing a single
integer---the answer to the $i$-th query. <strong>Note that you should use 64-bit
integers to avoid overflow. </strong>

