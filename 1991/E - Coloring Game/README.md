<h2><a href="https://codeforces.com/contest/1991/problem/E" target="_blank" rel="noopener noreferrer">1991E — Coloring Game</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1991E](https://codeforces.com/contest/1991/problem/E) |

## Topics
`constructive algorithms` `dfs and similar` `games` `graphs` `greedy` `interactive`

---

## Problem Statement

<div class="header"><div class="title">E. Coloring Game</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">This is an interactive problem.</span></p><p>Consider an undirected connected graph consisting of $$$n$$$ vertices and $$$m$$$ edges. Each vertex can be colored with one of three colors: $$$1$$$, $$$2$$$, or $$$3$$$. Initially, all vertices are uncolored.</p><p>Alice and Bob are playing a game consisting of $$$n$$$ rounds. In each round, the following two-step process happens: </p><ol> <li> Alice chooses two <span class="tex-font-style-bf">different</span> colors. </li><li> Bob chooses an uncolored vertex and colors it with one of the two colors chosen by Alice. </li></ol><p>Alice wins if there exists an edge connecting two vertices of the same color. Otherwise, Bob wins.</p><p>You are given the graph. Your task is to decide which player you wish to play as and win the game.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. The description of test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$, $$$m$$$ ($$$1 \le n \le 10^4$$$, $$$n - 1 \le m \le \min(\frac{n \cdot (n - 1)}{2}, 10^4)$$$) — the number of vertices and the number of edges in the graph, respectively.</p><p>Each of the next $$$m$$$ lines of each test case contains two integers $$$u_i$$$, $$$v_i$$$ ($$$1 \le u_i, v_i \le n$$$) — the edges of the graph. It is guaranteed that the graph is connected and there are no multiple edges or self-loops.</p><p>It is guaranteed that the sum of $$$n$$$ and the sum of $$$m$$$ over all test cases does not exceed $$$10^4$$$.</p></div><div><div class="section-title">Interaction</div><p>For each test case, you need to output a single line containing either "<span class="tex-font-style-tt">Alice</span>" or "<span class="tex-font-style-tt">Bob</span>", representing the player you choose.</p><p>Then for each of the following $$$n$$$ rounds, the following two-step process happens: </p><ol> <li> Alice (either you or the interactor) will output two integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 3$$$, $$$a \neq b$$$) — the colors chosen by Alice. </li><li> Bob (either you or the interactor) will output two integers $$$i$$$ and $$$c$$$ ($$$1 \le i \le n$$$, $$$c = a$$$ or $$$c = b$$$) — the vertex and the color chosen by Bob. Vertex $$$i$$$ must be a previously uncolored vertex. </li></ol><p>If any of your outputs are invalid, the jury will output "<span class="tex-font-style-tt">-1</span>" and you will receive a <span class="tex-font-style-bf">Wrong Answer</span> verdict.</p><p>At the end of all $$$n$$$ turns, if you have lost the game, the jury will output "<span class="tex-font-style-tt">-1</span>" and you will receive a <span class="tex-font-style-bf">Wrong Answer</span> verdict.</p><p>If your program has received a $$$-1$$$ instead of a valid value, it must terminate immediately. Otherwise, you may receive an arbitrary verdict because your solution might be reading from a closed stream.</p><p>Note that if you are playing as Alice, and there already exists an edge connected two vertices of the same color, the interactor will not terminate early and you will keep playing all $$$n$$$ rounds.</p><p>After outputting, do not forget to output end of line and flush the output. Otherwise, you will get <span class="tex-font-style-tt">Idleness limit exceeded</span>. To do this, use:</p><ul> <li> <span class="tex-font-style-tt">fflush(stdout)</span> or <span class="tex-font-style-tt">cout.flush()</span> in C++; </li><li> <span class="tex-font-style-tt">System.out.flush()</span> in Java; </li><li> <span class="tex-font-style-tt">flush(output)</span> in Pascal; </li><li> <span class="tex-font-style-tt">stdout.flush()</span> in Python; </li><li> see documentation for other languages. </li></ul><p><span class="tex-font-style-bf">In this problem, hacks are disabled.</span></p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006791413203269698" id="id005222008463899329" class="input-output-copier">Copy</div></div><pre id="id006791413203269698">2
3 3
1 2
2 3
3 1


3 1

2 2

1 1
4 4
1 2
2 3
3 4
4 1

2 3

1 2

2 1

3 1

</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005312415154517429" id="id008114127554583687" class="input-output-copier">Copy</div></div><pre id="id005312415154517429">




Alice
3 1

1 2

2 1






Bob

1 2

2 1

4 1

3 3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Note that the sample test cases are example games and do not necessarily represent the optimal strategy for both players.</p><p>In the first test case, you choose to play as Alice.</p><ol> <li> Alice chooses two colors: $$$3$$$ and $$$1$$$. Bob chooses vertex $$$3$$$ and colors it with color $$$1$$$. </li><li> Alice chooses two colors: $$$1$$$ and $$$2$$$. Bob chooses vertex $$$2$$$ and colors it with color $$$2$$$. </li><li> Alice chooses two colors: $$$2$$$ and $$$1$$$. Bob chooses vertex $$$1$$$ and colors it with color $$$1$$$. </li></ol><p>Alice wins because the edge $$$(3, 1)$$$ connects two vertices of the same color.</p><p>In the second test case, you choose to play as Bob.</p><ol> <li> Alice chooses two colors: $$$2$$$ and $$$3$$$. Bob chooses vertex $$$1$$$ and colors it with color $$$2$$$. </li><li> Alice chooses two colors: $$$1$$$ and $$$2$$$. Bob chooses vertex $$$2$$$ and colors it with color $$$1$$$. </li><li> Alice chooses two colors: $$$2$$$ and $$$1$$$. Bob chooses vertex $$$4$$$ and colors it with color $$$1$$$. </li><li> Alice chooses two colors: $$$3$$$ and $$$1$$$. Bob chooses vertex $$$3$$$ and colors it with color $$$3$$$. </li></ol><p>Bob wins because there are no edges with vertices of the same color.</p></div>