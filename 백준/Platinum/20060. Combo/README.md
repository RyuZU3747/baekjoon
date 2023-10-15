# [Platinum IV] Combo - 20060 

[문제 링크](https://www.acmicpc.net/problem/20060) 

### 성능 요약

메모리: 2024 KB, 시간: 40 ms

### 분류

애드 혹, 해 구성하기

### 제출 일자

2023년 7월 24일 02:42:13

### 문제 설명

<p>You are playing an action video game. The game controller has buttons, <code>A</code>, <code>B</code>, <code>X</code>, and <code>Y</code>. In this game, you can get coins with combo moves. You can make a combo move by pressing buttons in sequence.</p>

<p>This game has a secret sequence of buttons, which can be represented as a string <em>S</em> of those characters. You don't know the string <em>S</em>, but you know its length <em>N</em>.</p>

<p><strong>You also know that the first character of <em>S</em> never reappears in it.</strong> For example, <em>S</em> can be "<code>ABXYY</code>" or "<code>XYYAA</code>", but cannot be "<code>AAAAA</code>" or "<code>BXYBX</code>".</p>

<p>You can press a sequence of up to 4<em>N</em> buttons for a combo move. Let <em>p</em> be the string which represents the sequence of the buttons you pressed. The number of coins you get for this move is calculated as the length of the longest prefix of <em>S</em> which is also a substring of <em>p</em>. A substring of a string <em>t</em> is a contiguous (possibly empty) sequence of characters within <em>t</em>. A prefix of <em>t</em> is a substring of that is empty or contains the first character of <em>t</em>.</p>

<p>For example, if <em>S</em> is "<code>ABXYY</code>" and p is "<code>XXYYABYABXAY</code>", you will get 3 coins because "<code>ABX</code>" is the longest prefix of <em>S</em> that is also a substring of <em>p</em>.</p>

<p>Your task is to determine the secret string <em>S</em> using few combo moves.</p>

### 입력 

 Empty

### 출력 

 Empty

