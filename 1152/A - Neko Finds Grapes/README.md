<h2><a href="https://codeforces.com/contest/1152/problem/A" target="_blank" rel="noopener noreferrer">1152A — Neko Finds Grapes</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1152A](https://codeforces.com/contest/1152/problem/A) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Neko Finds Grapes</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>On a random day, Neko found $$$n$$$ treasure chests and $$$m$$$ keys. The $$$i$$$-th chest has an integer $$$a_i$$$ written on it and the $$$j$$$-th key has an integer $$$b_j$$$ on it. Neko knows those chests contain the powerful mysterious green Grapes, thus Neko wants to open as many treasure chests as possible.</p><p>The $$$j$$$-th key can be used to unlock the $$$i$$$-th chest if and only if the sum of the key number and the chest number is an odd number. Formally, $$$a_i + b_j \equiv 1 \pmod{2}$$$. One key can be used to open at most one chest, and one chest can be opened at most once.</p><p>Find the maximum number of chests Neko can open.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 10^5$$$) — the number of chests and the number of keys.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) — the numbers written on the treasure chests.</p><p>The third line contains $$$m$$$ integers $$$b_1, b_2, \ldots, b_m$$$ ($$$1 \leq b_i \leq 10^9$$$) — the numbers written on the keys.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the maximum number of chests you can open.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015882771558823283" id="id006554816801728649" class="input-output-copier">Copy</div></div><pre id="id0015882771558823283">5 4
9 14 6 2 11
8 4 7 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003166213473148519" id="id003020604220450116" class="input-output-copier">Copy</div></div><pre id="id003166213473148519">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005318475458031104" id="id0024839413386968534" class="input-output-copier">Copy</div></div><pre id="id005318475458031104">5 1
2 4 6 8 10
5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008784111540003946" id="id004744245875967329" class="input-output-copier">Copy</div></div><pre id="id008784111540003946">1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001273722089987246" id="id0046010240149801906" class="input-output-copier">Copy</div></div><pre id="id001273722089987246">1 4
10
20 30 40 50
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00734192181682694" id="id001803267113876913" class="input-output-copier">Copy</div></div><pre id="id00734192181682694">0</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, one possible way to unlock $$$3$$$ chests is as follows:</p><ul> <li> Use first key to unlock the fifth chest, </li><li> Use third key to unlock the second chest, </li><li> Use fourth key to unlock the first chest. </li></ul><p>In the second example, you can use the only key to unlock any single chest (note that one key can't be used twice).</p><p>In the third example, no key can unlock the given chest.</p></div>