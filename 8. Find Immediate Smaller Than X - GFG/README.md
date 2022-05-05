# 8. Find Immediate Smaller Than X
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array arr[] of size N containing positive integers and an integer X, find the element&nbsp;in the array which is smaller than X and closest to it.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 5
arr[] = {4 67 13&nbsp;12 15}
X = 16
<strong>Output: </strong>15<strong>
Explanation: </strong>For a given value 16, there
are four values which are smaller than
it. But 15 is the number which is smaller
and closest to it with minimum difference
of 1.</span>
</pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 5
arr[] = {1 2 3 4 5}
X = 1
<strong>Output: </strong>-1<strong>
Explanation: </strong>No value is smaller than 1.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your&nbsp;Task:</strong><br>
You don't need to read input or print anything.&nbsp;You need to complete the given function <strong>immediateSmaller() </strong>which takes&nbsp;arr, N and X as input parameters&nbsp;and returns the closest element that is smaller than X. If no such element exists, return -1.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= <strong>N</strong> &lt;= 10<sup>3</sup><br>
1 &lt;= <strong>arr[i], X</strong> &lt;= 10<sup>4</sup></span></p>
 <p></p>
            </div>