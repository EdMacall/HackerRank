/*
Pangrams
by Bidhan

Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.

Input Format

Input consists of a string s.

Constraints 
Length of  can be at most 10^3 (1 <= |s| <= 10^3) and it may contain spaces, lower case and upper case letters. Lower-case and upper-case instances of a letter are considered the same.

Output Format

Output a line containing pangram if  is a pangram, otherwise output not pangram.

Sample Input

Input #1

We promptly judged antique ivory buckles for the next prize    
Input #2

We promptly judged antique ivory buckles for the prize    
Sample Output

Output #1

pangram
Output #2

not pangram
Explanation

In the first test case, the answer is pangram because the sentence contains all the letters of the English alphabet.
 */


/*
       1
       2
       4
       8
      16
      32
      64
     128
     256
     512
    1024
    2048
    4096

    8192
   16384
   32768
   65536
  131072
  262144
  524288
 1048576
 2097152
 4194304
 8388608
16777216
33554432

67108863
 */

        /* 
        a = 65
        z = 90
        A = 97
        Z = 122
         */


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static int getAlphabetNumber(char c){
        int result = (int)c;
        if(result > 64 && result < 91){
            result -= 64;
        }
        else if(result > 96 && result < 123){
            result -= 96;
        }
        else{
            result = 0;
        }
        return result;
    }
    
    public static int getAlphabetFlag(char c){
        int result = (int)c;
        if(result > 64 && result < 91){
            result -= 64;
        }
        else if(result > 96 && result < 123){
            result -= 96;
        }
        else{
            result = 0;
        }
        if(result != 0){
            if(result > 2){
                result = 2 << (result - 2);
            }
        }
        return result;
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        int slength = input.length();
        int alphabetFlag = 0;
        int allLetters = 67108863;
        int letter = 0;
        String sresult = "not pangram";


        for(int i = 0; i < slength; i++){
            letter = getAlphabetFlag(input.charAt(i));
            alphabetFlag = alphabetFlag | (letter);

            if(alphabetFlag == allLetters){
                sresult = "pangram";
                break;
            }
        }

        System.out.println(sresult);
    }
}