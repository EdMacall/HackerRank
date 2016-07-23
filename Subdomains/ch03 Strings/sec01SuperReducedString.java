/*
Super Reduced String
by harshil7924

Shil has a string, S, consisting of N lowercase English letters. In one operation, he can delete any pair of adjacent letters with same value. For example, string "aabcc" would become either "aab" or "bcc" after 1 operation.

Shil wants to reduce S as much as possible. To do this, he will repeat the above operation as many times as it can be performed. Help Shil out by finding and printing S's non-reducible form!

Note: If the final string is empty, print Empty String.

Input Format

A single string, S.

Constraints
1 <= N <= 100

Output Format

If the final string is empty, print Empty String; otherwise, print the final non-reducible string.

Sample Input 0

aaabccddd
Sample Output 0

abd
Sample Input 1

baab
Sample Output 1

Empty String
Sample Input 2

aa
Sample Output 2

Empty String
Explanation

Sample Case 0: 
Shil can perform the following sequence of operations to get the final string:
1. aaabccddd -> abccddd
2. abccddd -> abddd
3. abddd -> abd

Thus, we print abd.

Sample Case 1: 
Shil can perform the following sequence of operations to get the final string:
1. baab -> bb
2. bb -> Empty String

 */

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        String input = in.next();
        String result = input;
        boolean reduceable = true;
        int slength = result.length(); 
        
        while(reduceable){
            if(slength < 2){
                reduceable = false;
                break;
            }
            
            for(int i = 0; i < (slength - 1); i++){
                reduceable = false;
                if(result.charAt(i) == result.charAt(i + 1)){
                    reduceable = true;
                    if(i == 0){
                        if(slength == 2){
                            result = "";
                        }
                        else{
                            result = result.substring(i + 2);
                        }
                    }
                    else if(i == (slength - 1)){
                        result = result.substring(0, i);
                    }
                    else{
                        result = result.substring(0, i) + result.substring(i + 2);
                    }
                    slength -= 2;
                    break;
                }
            }
        }
        
        if(result.equals(""))
            {
            result = "Empty String";
        }

        System.out.println(result);
    }
}