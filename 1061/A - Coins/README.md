<h2><a href="https://codeforces.com/contest/1061/problem/A" target="_blank" rel="noopener noreferrer">1061A — Coins</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1061A](https://codeforces.com/contest/1061/problem/A) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Coins</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have unlimited number of coins with values $$$1, 2, \ldots, n$$$. You want to select some set of coins having the total value of $$$S$$$. </p><p>It is allowed to have multiple coins with the same value in the set. What is the minimum number of coins required to get sum $$$S$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of the input contains two integers $$$n$$$ and $$$S$$$ ($$$1 \le n \le 100\,000$$$, $$$1 \le S \le 10^9$$$)</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print exactly one integer — the minimum number of coins required to obtain sum $$$S$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020109062767209596" id="id0011643740959016902" class="input-output-copier">Copy</div></div><pre id="id0020109062767209596">5 11<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004662218331244453" id="id008317467590781399" class="input-output-copier">Copy</div></div><pre id="id004662218331244453">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005200486221891194" id="id006833430522762106" class="input-output-copier">Copy</div></div><pre id="id005200486221891194">6 16<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008238301532850428" id="id0017264569818001385" class="input-output-copier">Copy</div></div><pre id="id008238301532850428">3</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, some of the possible ways to get sum $$$11$$$ with $$$3$$$ coins are: </p><ul> <li> $$$(3, 4, 4)$$$</li><li> $$$(2, 4, 5)$$$</li><li> $$$(1, 5, 5)$$$</li><li> $$$(3, 3, 5)$$$ </li></ul><p>It is impossible to get sum $$$11$$$ with less than $$$3$$$ coins.</p><p>In the second example, some of the possible ways to get sum $$$16$$$ with $$$3$$$ coins are: </p><ul> <li> $$$(5, 5, 6)$$$</li><li> $$$(4, 6, 6)$$$ </li></ul><p>It is impossible to get sum $$$16$$$ with less than $$$3$$$ coins.</p></div>