<h2><a href="https://codeforces.com/contest/2009/problem/C" target="_blank" rel="noopener noreferrer">2009C — The Legend of Freya the Frog</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2009C](https://codeforces.com/contest/2009/problem/C) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">C. The Legend of Freya the Frog</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Freya the Frog is traveling on the 2D coordinate plane. She is currently at point $$$(0,0)$$$ and wants to go to point $$$(x,y)$$$. In one move, she chooses an integer $$$d$$$ such that $$$0 \leq d \leq k$$$ and jumps $$$d$$$ spots forward in the direction she is facing. </p><p>Initially, she is facing the positive $$$x$$$ direction. After every move, she will alternate between facing the positive $$$x$$$ direction and the positive $$$y$$$ direction (i.e., she will face the positive $$$y$$$ direction on her second move, the positive $$$x$$$ direction on her third move, and so on). </p><p>What is the minimum amount of moves she must perform to land on point $$$(x,y)$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>Each test case contains three integers $$$x$$$, $$$y$$$, and $$$k$$$ ($$$0 \leq x, y \leq 10^9, 1 \leq k \leq 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the number of jumps Freya needs to make on a new line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002601057130761534" id="id0015989295357005828" class="input-output-copier">Copy</div></div><pre id="id002601057130761534"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">9 11 3</div><div class="test-example-line test-example-line-even test-example-line-2">0 10 8</div><div class="test-example-line test-example-line-odd test-example-line-3">1000000 100000 10</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002015596128782905" id="id0013625030578690922" class="input-output-copier">Copy</div></div><pre id="id002015596128782905">8
4
199999
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, one optimal set of moves is if Freya jumps in the following way: ($$$0,0$$$) $$$\rightarrow$$$ ($$$2,0$$$) $$$\rightarrow$$$ ($$$2,2$$$) $$$\rightarrow$$$ ($$$3,2$$$) $$$\rightarrow$$$ ($$$3,5$$$) $$$\rightarrow$$$ ($$$6,5$$$) $$$\rightarrow$$$ ($$$6,8$$$) $$$\rightarrow$$$ ($$$9,8$$$) $$$\rightarrow$$$ ($$$9,11$$$). This takes 8 jumps.</p></div>