<h2><a href="https://codeforces.com/contest/984/problem/A" target="_blank" rel="noopener noreferrer">984A — Game</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 984A](https://codeforces.com/contest/984/problem/A) |

## Topics
`sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Game</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Two players play a game.</p><p>Initially there are $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ written on the board. Each turn a player selects one number and erases it from the board. This continues until there is only one number left on the board, i. e. $$$n - 1$$$ turns are made. The first player makes the first move, then players alternate turns.</p><p>The first player wants to minimize the last number that would be left on the board, while the second player wants to maximize it.</p><p>You want to know what number will be left on the board after $$$n - 1$$$ turns if both players make optimal moves.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 1000$$$) — the number of numbers on the board.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^6$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one number that will be left on the board.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003736156103584697" id="id0036632955927359045" class="input-output-copier">Copy</div></div><pre id="id003736156103584697">3<br>2 1 3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010811979999624755" id="id002994860935838891" class="input-output-copier">Copy</div></div><pre id="id0010811979999624755">2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0034946205907722705" id="id006535818178559815" class="input-output-copier">Copy</div></div><pre id="id0034946205907722705">3<br>2 2 2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0020742603030581885" id="id006537932002065153" class="input-output-copier">Copy</div></div><pre id="id0020742603030581885">2</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, the first player erases $$$3$$$ and the second erases $$$1$$$. $$$2$$$ is left on the board.</p><p>In the second sample, $$$2$$$ is left on the board regardless of the actions of the players.</p></div>