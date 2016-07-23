{\rtf1\ansi\deff0\nouicompat{\fonttbl{\f0\fnil\fcharset0 Courier New;}}
{\*\generator Riched20 10.0.10586}\viewkind4\uc1 
\pard\sl276\slmult1\f0\fs16\lang9 /*\par
Circular Array Rotation\par
by darkshadows\par
Problem\par
Submissions\par
Leaderboard\par
Discussions\par
Editorial\par
John Watson performs an operation called a right circular rotation on an array of integers, [a0, a1, ... an-1]. After performing one right circular rotation operation, the array is transformed from [a0, a1, ... an-1] to [an-1, a0, ... an-2].\par
\par
Watson performs this operation k times. To test Sherlock's ability to identify the current element at a particular position in the rotated array, Watson asks q queries, where each query consists of a single integer, m, for which you must print the element at index m in the rotated array (i.e., the value of am).\par
\par
Input Format\par
\par
The first line contains 3 space-separated integers, n, k, and q, respectively. \par
The second line contains n space-separated integers, where each integer i describes array element ai  (where 0 <= i < n). \par
Each of the  subsequent lines contains a single integer denoting m.\par
\par
Constraints\par
1 <= n <= 10^5\par
1 <= ai <= 10^5\par
1 <= k <= 10^5\par
1 <= q <= 500\par
0 <= m <= N - 1\par
\par
Output Format\par
\par
For each query, print the value of the element at index  of the rotated array on a new line.\par
\par
Sample Input\par
\par
3 2 3\par
1 2 3\par
0\par
1\par
2\par
Sample Output\par
\par
2\par
3\par
1\par
Explanation\par
\par
After the first rotation, the array becomes [3, 1, 2]. \par
After the second (and final) rotation, the array becomes [2, 3, 1].\par
\par
Let's refer to the array's final state as array . For each query, we just have to print the value of  on a new line:\par
\par
1. m = 0, so we print 2 on a new line.\par
2. m = 1, so we print 3 on a new line.\par
3. m = 2, so we print 1 on a new line.\par
 */\par
\par
#include <stdio.h>\par
#include <string.h>\par
#include <math.h>\par
#include <stdlib.h>\par
\par
int main() \{\par
\par
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    \par
    int n = 0, k = 0, qn = 0, temp = 0, lead = 0, index = 0;\par
    scanf("%d %d %d", &n, &k, &qn);\par
    \par
    int arr[n], temparr[n], qarr[qn];\par
    for(int i = 0; i < n; i++)\par
        \{\par
        scanf("%d", &arr[i]);\par
    \}\par
    \par
    for(int i = 0 ; i < qn; i++)\{\par
        scanf("%d", &qarr[i]);\par
    \}\par
    \par
    lead = k * -1;\par
    \par
    for(int i = 0; i < qn; i++)\{\par
        index = qarr[i] + lead;\par
    \par
        while(index < 0)\{\par
            index += n;\par
        \}\par
    \par
        printf("%d\\n", arr[index]);\par
    \}\par
    return 0;\par
\}\par
}
 