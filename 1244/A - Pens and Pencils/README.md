<h2><a href="https://codeforces.com/contest/1244/problem/A" target="_blank" rel="noopener noreferrer">1244A — Pens and Pencils</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1244A](https://codeforces.com/contest/1244/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Pens and Pencils</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Tomorrow is a difficult day for Polycarp: he has to attend $$$a$$$ lectures and $$$b$$$ practical classes at the university! Since Polycarp is a diligent student, he is going to attend all of them.</p><p>While preparing for the university, Polycarp wonders whether he can take enough writing implements to write all of the lectures and draw everything he has to during all of the practical classes. Polycarp writes lectures using a pen (he can't use a pencil to write lectures!); he can write down $$$c$$$ lectures using one pen, and after that it runs out of ink. During practical classes Polycarp draws blueprints with a pencil (he can't use a pen to draw blueprints!); one pencil is enough to draw all blueprints during $$$d$$$ practical classes, after which it is unusable.</p><p>Polycarp's pencilcase can hold no more than $$$k$$$ writing implements, so if Polycarp wants to take $$$x$$$ pens and $$$y$$$ pencils, they will fit in the pencilcase if and only if $$$x + y \le k$$$.</p><p>Now Polycarp wants to know how many pens and pencils should he take. Help him to determine it, or tell that his pencilcase doesn't have enough room for all the implements he needs tomorrow!</p><p>Note that you don't have to minimize the number of writing implements (though their total number must not exceed $$$k$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases in the input. Then the test cases follow.</p><p>Each test case is described by one line containing five integers $$$a$$$, $$$b$$$, $$$c$$$, $$$d$$$ and $$$k$$$, separated by spaces ($$$1 \le a, b, c, d, k \le 100$$$) — the number of lectures Polycarp has to attend, the number of practical classes Polycarp has to attend, the number of lectures which can be written down using one pen, the number of practical classes for which one pencil is enough, and the number of writing implements that can fit into Polycarp's pencilcase, respectively.</p><p><span class="tex-font-style-bf">In hacks</span> it is allowed to use only one test case in the input, so $$$t = 1$$$ should be satisfied.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer as follows:</p><p>If the pencilcase can't hold enough writing implements to use them during all lectures and practical classes, print one integer $$$-1$$$. Otherwise, print two non-negative integers $$$x$$$ and $$$y$$$ — the number of pens and pencils Polycarp should put in his pencilcase. If there are multiple answers, print any of them. Note that you don't have to minimize the number of writing implements (though their total number must not exceed $$$k$$$).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0011377660156067071" id="id005368560312070849" class="input-output-copier">Copy</div></div><pre id="id0011377660156067071">3
7 5 4 5 8
7 5 4 5 2
20 53 45 26 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0042255890242419103" id="id00030464985966435654" class="input-output-copier">Copy</div></div><pre id="id0042255890242419103">7 1
-1
1 3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>There are many different answers for the first test case; $$$x = 7$$$, $$$y = 1$$$ is only one of them. For example, $$$x = 3$$$, $$$y = 1$$$ is also correct.</p><p>$$$x = 1$$$, $$$y = 3$$$ is the only correct answer for the third test case.</p></div>