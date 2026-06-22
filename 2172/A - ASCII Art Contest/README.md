<h2><a href="https://codeforces.com/contest/2172/problem/A" target="_blank" rel="noopener noreferrer">2172A — ASCII Art Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2172A](https://codeforces.com/contest/2172/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. ASCII Art Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Three leading AI-powered creative assistants—Gemini, ChatGPT, and Claude—enter the first ever ASCII Art Contest, where they must impress a panel of human judges with their text-based masterpieces.</p><p>Each participant receives a score between 80 and 100 (inclusive). The organizers want to announce the final standing only if the judges' opinions are "close enough"; otherwise, they will ask the judges to reconsider.</p><p>Given the three integer scores of Gemini, ChatGPT, and Claude, determine the contest result:</p><ul> <li> If the maximum score and the minimum score differ by at least 10 points, print <span class="tex-font-style-tt">check again</span> (the judging seems inconsistent, so the panel must re-evaluate). </li><li> Otherwise, print <span class="tex-font-style-tt">final X</span>, where <span class="tex-font-style-tt">X</span> is the median of the three scores (the score that would be in the middle if all three were sorted in non-decreasing order). </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>A single line contains three integers $$$g, c, \ell$$$, representing the scores of Gemini, ChatGPT, and Claude respectively.</p><ul> <li> $$$80\le g, c, \ell \le 100$$$ </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>Print the required answer in a line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005880520640760794" id="id006805024290385762" class="input-output-copier">Copy</div></div><pre id="id005880520640760794">88 94 95
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021588008098657485" id="id005256320245042343" class="input-output-copier">Copy</div></div><pre id="id0021588008098657485">final 94
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00276598702873889" id="id0031460594401419095" class="input-output-copier">Copy</div></div><pre id="id00276598702873889">100 80 81
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007871789035166444" id="id008749598735095641" class="input-output-copier">Copy</div></div><pre id="id007871789035166444">check again
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00048197750987474475" id="id0023715553729734307" class="input-output-copier">Copy</div></div><pre id="id00048197750987474475">98 99 98
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001490010087321687" id="id005605999874920566" class="input-output-copier">Copy</div></div><pre id="id001490010087321687">final 98
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007457546640287495" id="id007211771583675789" class="input-output-copier">Copy</div></div><pre id="id007457546640287495">95 86 85
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0000441539687033643" id="id0002204039849641004" class="input-output-copier">Copy</div></div><pre id="id0000441539687033643">check again
</pre></div></div></div>