<h2><a href="https://codeforces.com/contest/2085/problem/B" target="_blank" rel="noopener noreferrer">2085B — Serval and Final MEX</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2085B](https://codeforces.com/contest/2085/problem/B) |

## Topics
`constructive algorithms` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Serval and Final MEX</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>  </p><p>You are given an array $$$a$$$ consisting of $$$n\ge 4$$$ non-negative integers.</p><p>You need to perform the following operation on $$$a$$$ until its length becomes $$$1$$$:</p><ul> <li> Select two indices $$$l$$$ and $$$r$$$ ($$$1\le {\color{red}{ l  \lt  r }} \le |a|$$$), and replace the subarray $$$[a_l,a_{l+1},\ldots,a_r]$$$ with a single integer $$$\operatorname{mex}([a_l,a_{l+1},\ldots,a_r])$$$, where $$$\operatorname{mex}(b)$$$ denotes the minimum excluded (MEX)$$$^{\text{∗}}$$$ of the integers in $$$b$$$. In other words, let $$$x=\operatorname{mex}([a_l,a_{l+1},\ldots,a_r])$$$, the array $$$a$$$ will become $$$[a_1,a_2,\ldots,a_{l-1},x,a_{r+1},a_{r+2},\ldots,a_{|a|}]$$$. Note that the length of $$$a$$$ decreases by $$$(r-l)$$$ after this operation. </li></ul><p>Serval wants the final element in $$$a$$$ to be $$$0$$$. Help him! </p><p>More formally, you have to find a sequence of operations, such that after performing these operations in order, the length of $$$a$$$ becomes $$$1$$$, and the final element in $$$a$$$ is $$$0$$$.</p><p>It can be shown that at least one valid operation sequence exists under the constraints of the problem, and the length of any valid operation sequence does not exceed $$$n$$$.</p><p>Note that you do <span class="tex-font-style-bf">not</span> need to minimize the number of operations.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$The minimum excluded (MEX) of a collection of integers $$$b_1, b_2, \ldots, b_k$$$ is defined as the smallest non-negative integer $$$x$$$ which does not occur in the collection $$$b$$$. </p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows. </p><p>The first line of each test case contains a single integer $$$n$$$ ($$$4\le n\le 5000$$$) — the length of the array $$$a$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0\le a_i\le n$$$) — the elements of the array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$5000$$$. </p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer $$$k$$$ ($$$0\le k\le n$$$) in the first line of output — the length of the operation sequence.</p><p>Then, output $$$k$$$ lines, the $$$i$$$-th line containing two integers $$$l_i$$$ and $$$r_i$$$ ($$$1\le l_i \lt r_i\le |a|$$$) — the two indices you choose in the $$$i$$$-th operation, where $$$|a|$$$ denotes the length of the array before this operation.</p><p>If there are multiple answers, you may print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0019825087678606634" id="id0019808786314003246" class="input-output-copier">Copy</div></div><pre id="id0019825087678606634"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">0 1 0 0 1</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-odd test-example-line-3">0 0 0 0 0 0</div><div class="test-example-line test-example-line-even test-example-line-4">6</div><div class="test-example-line test-example-line-even test-example-line-4">5 4 3 2 1 0</div><div class="test-example-line test-example-line-odd test-example-line-5">4</div><div class="test-example-line test-example-line-odd test-example-line-5">0 0 1 1</div><div class="test-example-line test-example-line-even test-example-line-6">4</div><div class="test-example-line test-example-line-even test-example-line-6">1 0 0 0</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007338642645221898" id="id006646721516791295" class="input-output-copier">Copy</div></div><pre id="id007338642645221898">1
1 4
4
1 2
1 2
1 2
1 2
4
5 6
3 4
1 2
1 3
3
4 5
4 5
1 4
2
1 2
1 3
2
2 4
1 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, since $$$\operatorname{mex}([1,2,3,4])=0$$$, after the only operation, the array becomes $$$[0]$$$.</p><p>In the second test case, the array $$$a$$$ changes as follows: $$$$$$ [\underline{0,1},0,0,1]\to [\underline{2,0},0,1]\to [\underline{1,0},1]\to [\underline{2,1}]\to [0]. $$$$$$</p><p>In the third test case, the array $$$a$$$ changes as follows: $$$$$$ [0,0,0,0,\underline{0,0}]\to [0,0,\underline{0,0},1]\to [\underline{0,0},1,1]\to [\underline{1,1,1}]\to [0]. $$$$$$</p></div>