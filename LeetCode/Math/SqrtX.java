package LeetCode.Math;

import jdk.nashorn.internal.runtime.regexp.joni.Regex;

public class SqrtX {
    public int mySqrt(int x) {
        if(x==0 || x==1) return x;
        long mid,low=0,high=x;

        while (low<=high){
            mid=low+(high-low)/2;
            if(mid*mid<=x && (mid+1)*(mid+1)>x) return (int)mid;
            else if(mid*mid<x) low=mid+1;
            else high=mid-1;
        }
        return 0;
    }


    public static void main(String[] args){
        System.out.println((new SqrtX()).mySqrt(2147395599));
    }
}


    /*String Test = "SomeEmail@Email.com, FirstName, Last Name, \"Some words, words after comma\", More Stuffs";


    // extract the fields
    String regex=",(?=(?:[^\"]*\"[^\"]*\")*(?![^\"]*\"))";
    String[] Fields = Test.split(regex);


// clean up the fields (remove " and leading spaces)
        for (int i = 0; i < Fields.length; i++)
        {
        System.out.println(Fields[i]);
        }
*/