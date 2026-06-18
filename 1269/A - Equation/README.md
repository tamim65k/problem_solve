<h2><a href="https://codeforces.com/contest/1269/problem/A" target="_blank" rel="noopener noreferrer">1269A — Equation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1269A](https://codeforces.com/contest/1269/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Equation</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call a positive integer <span class="tex-font-style-bf">composite</span> if it has at least one divisor other than $$$1$$$ and itself. For example:</p><ul> <li> the following numbers are composite: $$$1024$$$, $$$4$$$, $$$6$$$, $$$9$$$; </li><li> the following numbers are not composite: $$$13$$$, $$$1$$$, $$$2$$$, $$$3$$$, $$$37$$$. </li></ul><p>You are given a positive integer $$$n$$$. Find two composite integers $$$a,b$$$ such that $$$a-b=n$$$.</p><p>It can be proven that solution always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input contains one integer $$$n$$$ ($$$1 \leq n \leq 10^7$$$): the given integer.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two composite integers $$$a,b$$$ ($$$2 \leq a, b \leq 10^9, a-b=n$$$).</p><p>It can be proven, that solution always exists.</p><p>If there are several possible solutions, you can print any. </p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00212849613646505" id="id009788530181840561" class="input-output-copier">Copy</div></div><pre id="id00212849613646505">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009167174314758486" id="id007618796037404085" class="input-output-copier">Copy</div></div><pre id="id0009167174314758486">9 8
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049422570453827475" id="id005999491433195915" class="input-output-copier">Copy</div></div><pre id="id0049422570453827475">512
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004315584243626519" id="id003603110950112258" class="input-output-copier">Copy</div></div><pre id="id004315584243626519">4608 4096
</pre></div></div></div>