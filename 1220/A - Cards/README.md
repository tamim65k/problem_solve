<h2><a href="https://codeforces.com/contest/1220/problem/A" target="_blank" rel="noopener noreferrer">1220A — Cards</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1220A](https://codeforces.com/contest/1220/problem/A) |

## Topics
`implementation` `sortings` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Cards</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>When Serezha was three years old, he was given a set of cards with letters for his birthday. They were arranged into words in the way which formed the boy's mother favorite number in binary notation. Serezha started playing with them immediately and shuffled them because he wasn't yet able to read. His father decided to rearrange them. Help him restore the original number, on condition that it was the maximum possible one. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \leqslant n \leqslant 10^5$$$) — the length of the string. The second line contains a string consisting of English lowercase letters: '<span class="tex-font-style-tt">z</span>', '<span class="tex-font-style-tt">e</span>', '<span class="tex-font-style-tt">r</span>', '<span class="tex-font-style-tt">o</span>' and '<span class="tex-font-style-tt">n</span>'.</p><p>It is guaranteed that it is possible to rearrange the letters in such a way that they form a sequence of words, each being either "<span class="tex-font-style-tt">zero</span>" which corresponds to the digit $$$0$$$ or "<span class="tex-font-style-tt">one</span>" which corresponds to the digit $$$1$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the maximum possible number in binary notation. Print binary digits separated by a space. The leading zeroes are allowed.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00281315491902007" id="id002864920465688394" class="input-output-copier">Copy</div></div><pre id="id00281315491902007">4
ezor
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008821606470193588" id="id007393076841940699" class="input-output-copier">Copy</div></div><pre id="id008821606470193588">0 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006486763629989537" id="id0009258662966190467" class="input-output-copier">Copy</div></div><pre id="id006486763629989537">10
nznooeeoer
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003686409095475607" id="id001492700434516009" class="input-output-copier">Copy</div></div><pre id="id003686409095475607">1 1 0 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the correct initial ordering is "<span class="tex-font-style-tt">zero</span>".</p><p>In the second example, the correct initial ordering is "<span class="tex-font-style-tt">oneonezero</span>".</p></div>