# [Unrated] $\textbf{multiple}\text{ edges}$ - 24903 

[문제 링크](https://www.acmicpc.net/problem/24903) 

### 성능 요약

메모리: 144760 KB, 시간: 404 ms

### 분류

구현

### 제출 일자

2022년 4월 3일 02:56:21

### 문제 설명

<p>This is an interactive problem.</p>

<p>You are given <em>n</em> vertices and <em>q</em> queries, initially with no edges. The vertices are numbered from 1 to <em>n</em>. Each of the queries is one of the two types below:</p>

<ul>
	<li><code>1 <em>a</em> <em>b</em></code>: makes an undirected edge connecting vertex <em>a</em> and vertex <em>b</em>. It is guaranteed that the edge <em>a</em> - <em>b</em> does not already exist when this query is processed.</li>
	<li><code>2 <em>a</em> <em>b</em></code>: disconnects the edge connecting vertex <em>a</em> and vertex <em>b</em>. It is guaranteed that the edge <em>a</em> - <em>b</em> already exists when this query is processed.</li>
</ul>

<p>Your job is to print the number of <a href="https://en.wikipedia.org/wiki/Component_(graph_theory)">connected components</a> after each query is processed.</p>

### 입력 

 <p>The first line contains <em>n</em> and <em>q</em>, which satisfy 2 ≤ <em>n</em> ≤ 10<sup>6</sup> and 1 ≤ <em>q</em> ≤ 10<sup>6</sup>. Then the interaction starts.</p>

<div class="headline" style="margin-top: 20px;">
<h2>인터랙션 프로토콜</h2>
</div>

<p>Queries are given as stated above, one line per query. Thus you will be reading <em>q</em> lines total for the interaction. They are given in order, i.e. <em>i</em>-th query is never given before <em>j</em>-th query if <em>i</em> > <em>j</em>.</p>

<p>Moreover, to further force you to process each query in order, for 1 ≤ <em>i</em> ≤ <em>q</em>, <em>i</em>-th query is given only after you print the answer for at least (<em>i</em>-1) queries. If you want to be qualified as having printed what you had ordered to print, flush the stream as stated below:</p>

<ul>
	<li>C: <code>fflush(stdout);</code></li>
	<li>C++: <code>std::cout << std::flush;</code></li>
	<li>Java: <code>System.out.flush();</code></li>
	<li>Python: <code>sys.stdout.flush()</code></li>
</ul>

<p>For other languages refer to their respective references.</p>

<p>It is guaranteed that after each query the graph does not contain self-loops or <strong>multiple</strong> edges.</p>
<script>(()=>{document.querySelector('title').innerText = [document.querySelector('title').innerText.split(': ')[0], 'multiple edges'].join(': ');})();</script>

### 출력 

 Empty

