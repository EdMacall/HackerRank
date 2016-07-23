/*
Diagonal Difference
by vatsalchanana

Given a square matrix of size N x N, calculate the absolute difference between the sums of its diagonals.

Input Format

The first line contains a single integer, N. The next N lines denote the matrix's rows, with each line containing N space-separated integers describing the columns.

Output Format

Print the absolute difference between the two sums of the matrix's diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The primary diagonal is: 
11
      5
            -12

Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:
            4
      5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19 
Difference: |4 - 19| = 15
 */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d", &n);
    int a[n][n];
    
    long left = 0, right = 0, sum = 0;
    
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d", &a[a_i][a_j]);
       }
    }
    
    for(int i = 0; i < n; i++)
        {
        left += a[i][i];
        right += a[(n - 1) - i][i];
    }
    

    if(left > right)
        {
        sum = left - right;
    }
    else
        {
        sum = right - left;
        }
    
    printf("%ld", sum);
    return 0;
}
