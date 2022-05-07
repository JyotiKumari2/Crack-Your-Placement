# 9. Find Immediate Greater Than X
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>arr[]</strong> of size <strong>N</strong> containing positive integers and an integer <strong>X</strong>. You need to find the value in the array which is<strong> greater than X and closest to it</strong>. (<strong>&nbsp;</strong>if no such value exists the answer should be -1)</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
arr[] = {4 67 13&nbsp;12 15}
X = 16
<strong>Output: </strong>67<strong>
Explanation: </strong>For a given value 16, there
is only one value 67 that greater than
it and so it is the answer.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
arr[] = {1 2 3 4 5}
X = 1
<strong>Output: </strong>2<strong>
Explanation: </strong>For a given value 1, there
are 4 values greater than it 2 3 4 5.
But 2 is closest to 1 so it is the answer</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Since this is a functional problem, you need to complete the given function <strong>immediateGreater()&nbsp;</strong>which takes 3 arguments(array arr, N and X) and returns the answer.&nbsp;The printing is done by the driver code.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= <strong>N</strong> &lt;= 10<sup>3</sup><br>
1 &lt;= <strong>arr[i], X</strong> &lt;= 10<sup>4</sup></span></p>
 <p></p>
            </div>