<h2><a href="https://codeforces.com/contest/1206/problem/A" target="_blank" rel="noopener noreferrer">1206A — Choose Two Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1206A](https://codeforces.com/contest/1206/problem/A) |

## Topics
`math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Choose Two Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$A$$$, consisting of $$$n$$$ positive integers $$$a_1, a_2, \dots, a_n$$$, and an array $$$B$$$, consisting of $$$m$$$ positive integers $$$b_1, b_2, \dots, b_m$$$. </p><p>Choose some element $$$a$$$ of $$$A$$$ and some element $$$b$$$ of $$$B$$$ such that $$$a+b$$$ doesn't belong to $$$A$$$ and doesn't belong to $$$B$$$. </p><p>For example, if $$$A = [2, 1, 7]$$$ and $$$B = [1, 3, 4]$$$, we can choose $$$1$$$ from $$$A$$$ and $$$4$$$ from $$$B$$$, as number $$$5 = 1 + 4$$$ doesn't belong to $$$A$$$ and doesn't belong to $$$B$$$. However, we can't choose $$$2$$$ from $$$A$$$ and $$$1$$$ from $$$B$$$, as $$$3 = 2 + 1$$$ belongs to $$$B$$$.</p><p>It can be shown that such a pair exists. If there are multiple answers, print any.</p><p>Choose and print any such two numbers.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1\le n \le 100$$$) — the number of elements of $$$A$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 200$$$) — the elements of $$$A$$$.</p><p>The third line contains one integer $$$m$$$ ($$$1\le m \le 100$$$) — the number of elements of $$$B$$$.</p><p>The fourth line contains $$$m$$$ different integers $$$b_1, b_2, \dots, b_m$$$ ($$$1 \le b_i \le 200$$$) — the elements of $$$B$$$.</p><p>It can be shown that the answer always exists.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output two numbers $$$a$$$ and $$$b$$$ such that $$$a$$$ belongs to $$$A$$$, $$$b$$$ belongs to $$$B$$$, but $$$a+b$$$ doesn't belong to nor $$$A$$$ neither $$$B$$$.</p><p>If there are multiple answers, print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007973110028690618" id="id009517990273372642" class="input-output-copier">Copy</div></div><pre id="id007973110028690618">1
20
2
10 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009190967398476553" id="id008563262466129503" class="input-output-copier">Copy</div></div><pre id="id009190967398476553">20 20</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003801293995309377" id="id009807985364525528" class="input-output-copier">Copy</div></div><pre id="id003801293995309377">3
3 2 2
5
1 5 7 7 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0006514722430522002" id="id0019052185359455698" class="input-output-copier">Copy</div></div><pre id="id0006514722430522002">3 1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005451390098162517" id="id0036121904904418944" class="input-output-copier">Copy</div></div><pre id="id005451390098162517">4
1 3 5 7
4
7 5 3 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018413178708716527" id="id007585673270379364" class="input-output-copier">Copy</div></div><pre id="id0018413178708716527">1 1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we can choose $$$20$$$ from array $$$[20]$$$ and $$$20$$$ from array $$$[10, 20]$$$. Number $$$40 = 20 + 20$$$ doesn't belong to any of those arrays. However, it is possible to choose $$$10$$$ from the second array too.</p><p>In the second example, we can choose $$$3$$$ from array $$$[3, 2, 2]$$$ and $$$1$$$ from array $$$[1, 5, 7, 7, 9]$$$. Number $$$4 = 3 + 1$$$ doesn't belong to any of those arrays.</p><p>In the third example, we can choose $$$1$$$ from array $$$[1, 3, 5, 7]$$$ and $$$1$$$ from array $$$[7, 5, 3, 1]$$$. Number $$$2 = 1 + 1$$$ doesn't belong to any of those arrays.</p></div>