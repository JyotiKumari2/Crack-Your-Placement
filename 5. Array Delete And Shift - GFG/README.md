# 5. Array Delete And Shift
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an array <strong>arr</strong>(0-based indexing). The size of the array is given by <strong>n</strong>. You need to <strong>delete</strong> an <strong>element </strong>at given <strong>index </strong>and print the <strong>modified </strong>array. The arr[i] of array is initially set to i+1.<br>
Deletion means you need to shift all the elements after that index to the left by 1 position and set the last element as zero.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 5
index = 0
<strong>Output: </strong>2 3 4 5 0</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 6
index = 3
<strong>Output: </strong>1 2 3 5 6 0</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>deleteFromArray() </strong>that takes <em>arr</em><strong>, </strong>n<strong>, </strong><em>index<strong> </strong></em>as parameters and modifies the array arr as per requirements.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 &lt;= n&lt;= 10<sup>3</sup><br>
0 &lt;= index &lt;= n-1</span></p>
 <p></p>
            </div>