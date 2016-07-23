/*
Staircase
by vatsalchanana

Consider a staircase of size n = 4:

   #
  ##
 ###
####
Observe that its base and height are both equal to n, and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size n.

Input Format

A single integer, n, denoting the size of the staircase.

Output Format

Print a staircase of size n using # symbols and spaces.

Note: The last line must have 0 spaces in it.

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######
Explanation

The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of n = 6.
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
    
    for(int i = 0; i < (n - 1); i++)
    {
        for(int j = 0; j < ((n - 1) - i); j++)
        {
            printf(" ");
        }
        for(int k = 0; k < (i + 1); k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    return 0;
}
