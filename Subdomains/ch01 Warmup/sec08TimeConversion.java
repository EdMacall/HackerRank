/*
Time Conversion
by vatsalchanana

Given a time in AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Input Format

A single string containing a time in 12-hour clock format (i.e.: hh:mm:ssAM or hh:mm:ssPM), where 01 <= hh <= 12.

Output Format

Convert and print the given time in 24-hour format, where 00 <= hh <= 23.

Sample Input

07:05:45PM
Sample Output

19:05:45
 */

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String time = in.next();
        String hour = "010203040506070809101112131415161718192021222300";
        String result = "";
        int index;
        
        if(time.charAt(8) == 'A'){
            if(time.substring(0, 2).equals(hour.substring(22, 24))){
                result = "00" + time.substring(2, 8);
            }
            else{
                result = time.substring(0, 8);
            }
        }
        else{
            if(time.substring(0, 2).equals(hour.substring(22, 24))){
                result = time.substring(0, 8);
            }
            else{
                for(int i = 0; i < 24; i += 2){
                    if(time.substring(0, 2).equals(hour.substring(i, (i + 2)))){
                        result = hour.substring((i + 24), (i + 26)) + time.substring(2, 8);
                    }
                }
            }
        }

        System.out.println(result);
    }
}
