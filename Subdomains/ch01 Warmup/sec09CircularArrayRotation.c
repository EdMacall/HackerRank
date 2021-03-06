/*
Circular Array Rotation
by darkshadows
Problem
Submissions
Leaderboard
Discussions
Editorial
John Watson performs an operation called a right circular rotation on an array of integers, [a0, a1, ... an-1]. After performing one right circular rotation operation, the array is transformed from [a0, a1, ... an-1] to [an-1, a0, ... an-2].

Watson performs this operation k times. To test Sherlock's ability to identify the current element at a particular position in the rotated array, Watson asks q queries, where each query consists of a single integer, m, for which you must print the element at index m in the rotated array (i.e., the value of am).

Input Format

The first line contains 3 space-separated integers, n, k, and q, respectively. 
The second line contains n space-separated integers, where each integer i describes array element ai  (where 0 <= i < n). 
Each of the  subsequent lines contains a single integer denoting m.

Constraints
1 <= n <= 10^5
1 <= ai <= 10^5
1 <= k <= 10^5
1 <= q <= 500
0 <= m <= N - 1

Output Format

For each query, print the value of the element at index  of the rotated array on a new line.

Sample Input

3 2 3
1 2 3
0
1
2
Sample Output

2
3
1
Explanation

After the first rotation, the array becomes [3, 1, 2]. 
After the second (and final) rotation, the array becomes [2, 3, 1].

Let's refer to the array's final state as array . For each query, we just have to print the value of  on a new line:

1. m = 0, so we print 2 on a new line.
2. m = 1, so we print 3 on a new line.
3. m = 2, so we print 1 on a new line.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n = 0, k = 0, qn = 0, temp = 0, lead = 0, index = 0;
    scanf("%d %d %d", &n, &k, &qn);
    
    int arr[n], temparr[n], qarr[qn];
    for(int i = 0; i < n; i++)
        {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0 ; i < qn; i++){
        scanf("%d", &qarr[i]);
    }
    
    lead = k * -1;
    
    for(int i = 0; i < qn; i++){
        index = qarr[i] + lead;
    
        while(index < 0){
            index += n;
        }
    
        printf("%d\n", arr[index]);
    }
    return 0;
}