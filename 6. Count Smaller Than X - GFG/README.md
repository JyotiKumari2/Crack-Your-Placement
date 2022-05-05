# 6. Count Smaller Than X
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an unsorted array <strong>arr[]</strong> of size <strong>N </strong>containing <strong>non-negative integers</strong>. You will also be given an integer <strong>X</strong>, the task is to count the number of elements which are <strong>strictly smaller </strong>than&nbsp;X. The given integer may or not be present in the array given.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
arr[] = {4 5 3 1 2}
X = 3
<strong>Output: </strong>2<strong>
Explanation: </strong>Here X = 3, and elements that
are smaller than X are 1 and 2.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 6
arr[] = {2 2 2 2 2 2}
X = 3
<strong>Output: </strong>6<strong>
Explanation: </strong>Here X = 3, and elements that
are smaller than X are 2 2 2 2 2 2.</span></pre>

<p><span style="font-size:18px"><strong>Your Task</strong>:<br>
Since this is a functional problem you don't have to worry about the input, you just have to complete the given function <strong>smallerThanX() </strong>which takes 3 arguments(array arr, N, and X) and returns the count of elements smaller than X. The printing is done by the driver code.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= <strong>N </strong>&lt;= 10<sup>6</sup><br>
1 &lt;= <strong>arr[i], X</strong> &lt;= 10<sup>5&nbsp;&nbsp;</sup></span></p>
 <p></p>
            </div>