/*
Plus Minus
by vatsalchanana

Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to 10^-4 are acceptable.

Input Format

The first line contains an integer, N, denoting the size of the array. 
The second line contains N space-separated integers describing an array of numbers (a0, a1, a2, ..., an-1).

Output Format

You must print the following 3 lines:

1. A decimal representing of the fraction of positive numbers in the array.
2. A decimal representing of the fraction of negative numbers in the array.
3. A decimal representing of the fraction of zeroes in the array.
Sample Input

6
-4 3 -9 0 4 1         
Sample Output

0.500000
0.333333
0.166667
Explanation

There are 3 positive numbers, 2 negative numbers, and 1 zero in the array. 
The respective fractions of positive numbers, negative numbers and zeroes are 3/6 = 0.500000, 2/6 = 0.333333 and , 1/6 = 0.166667 respectively.
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
    double positive = 0.0, negative = 0.0, zero = 0.0, positivef, negativef, zerof;
    scanf("%d", &n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d", &arr[arr_i]);
        
        if(arr[arr_i] > 0)
            {
            positive++;
        }
        else if(arr[arr_i] < 0)
            {
            negative++;
        }
        else
            {
            zero++;
        }
    }
    positivef = (double)(positive / n);
    negativef = (double)(negative / n);
    zerof     = (double)(zero / n);
    
    printf("%f\n", positivef);
    printf("%f\n", negativef);
    printf("%f\n", zerof);
    return 0;
}
