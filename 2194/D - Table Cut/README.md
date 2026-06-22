<h2><a href="https://codeforces.com/contest/2194/problem/D" target="_blank" rel="noopener noreferrer">2194D — Table Cut</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2194D](https://codeforces.com/contest/2194/problem/D) |

## Topics
`constructive algorithms` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">D. Table Cut</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given a table of size $$$n \times m$$$, where each cell contains either $$$0$$$ or $$$1$$$. The task is to divide it into two parts with a cut that goes from the top left corner to the bottom right corner. The cut lines can only go right or down.</p><p>Let $$$a$$$ be the number of ones in one part of the table after the cut, and $$$b$$$ be the number of ones in the other part of the table. The goal is to maximize the value of $$$a \cdot b$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 3 \cdot 10^{5}$$$, $$$2 \leq n \cdot m \leq 3 \cdot 10^{5}$$$) — the number of rows and columns in the table, respectively.</p><p>Each of the following $$$n$$$ lines contains $$$m$$$ integers, where the $$$j$$$-th number in the $$$i$$$-th line corresponds to the value $$$a_{i, j}$$$ ($$$0 \leq a_{i, j} \leq 1$$$).</p><p>It is guaranteed that the sum of $$$n \cdot m$$$ across all test cases does not exceed $$$3 \cdot 10^{5}$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single number in the first line of the output data — the maximum value of the product.</p><p>In the second line, output a string consisting of $$$n$$$ characters  '<span class="tex-font-style-tt">D</span>' and $$$m$$$ characters  '<span class="tex-font-style-tt">R</span>', representing the direction of the next cut, where '<span class="tex-font-style-tt">D</span>' means a cut downwards, and '<span class="tex-font-style-tt">R</span>' — a cut to the right.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0017599375961055386" id="id009566562160854242" class="input-output-copier">Copy</div></div><pre id="id0017599375961055386">3
5 5
1 0 1 1 0
0 1 0 1 1
1 0 1 0 0
0 1 0 1 0
0 0 0 0 1
5 4
0 0 1 0
0 1 1 1
1 0 0 1
0 1 0 1
0 0 1 0
3 2
1 0
0 1
1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00910688355902517" id="id008309759942460916" class="input-output-copier">Copy</div></div><pre id="id00910688355902517">30
RDRDRDRDDR
20
DRRDRDDDR
4
DRDRD</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The images show the correct cuts for each of the first and second test cases, at which the maximum value of the product is achieved.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/bf5a95bd1bfc341b05232d999b0048817fc8b08f.png" style="zoom: 70.0%;max-width: 100.0%;max-height: 100.0%;"> <img class="tex-graphics" src="https://espresso.codeforces.com/9e50e43cf6573882647584be3bda8171ba34d3f0.png" style="zoom: 70.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>