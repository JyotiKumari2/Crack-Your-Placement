# 2. Pairing elements
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an <strong>array </strong>of elements of size <strong>N</strong> containing positive integers. The task is to make pair of elements given in array such that 1st element will be paired with last element, 2nd element with 2nd last, 3rd element with 3rd last and so on.<strong> If the array is of odd size then make middle element as a pair with itself.</strong> </span></p>

<p><span style="font-size:18px"><strong>Input Format:</strong> The input line contains T, denoting the number of testcases.For each testcase there will be two lines. The first line contains size of array N, second line contains elements of the array separated by space.</span></p>

<p><span style="font-size:18px"><strong>Output Format:</strong> For each testcase,in a new line, you need to print the pairs formed as such (arr[0],arr[N-1]) (arr[1],arr[N-2]), and so on in new line. </span></p>

<p><span style="font-size:18px"><strong>User task:</strong> Your task is to complete the function <strong>array_of_Pairs(arr, N) </strong>containing array and size of array as arguments.You don't have to worry about the input. Finally <strong>return </strong>the a <strong>vector </strong>of pairs formed. The printing is done by the driver code.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= <strong>T</strong> &lt;= 100<br>
1 &lt;= <strong>N</strong> &lt;= 1000<br>
1 &lt;= <strong>arr[i]</strong> &lt;= 1000</span></p>

<p><span style="font-size:18px"><strong>Sample Input:</strong><br>
2<br>
5<br>
1 2 3 4 5<br>
4<br>
4 2 3 1</span></p>

<p><span style="font-size:18px"><strong>Sample Output:</strong><br>
(1,5) (2,4) (3,3)<br>
(4,1) (2,3)</span></p>
 <p></p>
            </div>