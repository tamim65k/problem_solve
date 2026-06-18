<h2><a href="https://codeforces.com/contest/1088/problem/A" target="_blank" rel="noopener noreferrer">1088A — Ehab and another construction problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1088A](https://codeforces.com/contest/1088/problem/A) |

## Topics
`brute force` `constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">A. Ehab and another construction problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an integer $$$x$$$, find 2 integers $$$a$$$ and $$$b$$$ such that: </p><ul> <li> $$$1 \le a,b \le x$$$ </li><li> $$$b$$$ divides $$$a$$$ ($$$a$$$ is divisible by $$$b$$$). </li><li> $$$a \cdot b \gt x$$$. </li><li> $$$\frac{a}{b} \lt x$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains the integer $$$x$$$ $$$(1 \le x \le 100)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>You should output two integers $$$a$$$ and $$$b$$$, satisfying the given conditions, separated by a space. If no pair of integers satisfy the conditions above, print "-1" (without quotes).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006808987470996254" id="id008293760930118325" class="input-output-copier">Copy</div></div><pre id="id006808987470996254">10<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008363970741712667" id="id008256031063172827" class="input-output-copier">Copy</div></div><pre id="id008363970741712667">6 3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0037312738563795755" id="id0038022207232212957" class="input-output-copier">Copy</div></div><pre id="id0037312738563795755">1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008069384017775264" id="id002546648140502643" class="input-output-copier">Copy</div></div><pre id="id008069384017775264">-1</pre></div></div></div>