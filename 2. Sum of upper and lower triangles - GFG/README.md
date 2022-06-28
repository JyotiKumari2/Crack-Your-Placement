# 2. Sum of upper and lower triangles
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a square matrix<strong>&nbsp;</strong>of size<strong> N*N</strong>, print the <strong>sum of upper and lower triangular elements</strong>. Upper Triangle consists of elements on the diagonal and above it. The lower triangle consists of elements on the diagonal and below it.&nbsp;</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 3 
mat[][] = {{6, 5, 4},
&nbsp;          {1, 2, 5}
&nbsp;          {7, 9, 7}}
<strong>Output</strong>: 29 32
<strong>Explanation</strong>:
The given matrix is
6 5 4
1 2 5
7 9 7
The elements of upper triangle are
6 5 4
&nbsp;&nbsp;2 5
&nbsp;&nbsp;&nbsp; 7
Sum of these elements is 6+5+4+2+5+7=29
The elements of lower triangle are
6
1 2
7 9 7
Sum of these elements is 6+1+2+7+9+7= 32.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 2
mat[][] = {{1, 2},
&nbsp;          {3, 4}}
<strong>Output</strong>: 7 8
Explanation:
Upper triangular matrix:
1 2
&nbsp; 4
Sum of these elements are 7.
Lower triangular matrix:
1
3 4
Sum of these elements are 8.</span>

</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>sumTriangles()&nbsp;</strong>that takes&nbsp;matrix and its size N as input parameters and returns the list of integers&nbsp;containing&nbsp;the sum of upper and lower triangle. </span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N * N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong>&nbsp;<br>
1 &lt;= N&nbsp;&lt;= 100<br>
1 &lt;= matrix[i][j] &lt;= 100</span></p>
 <p></p>
            </div>