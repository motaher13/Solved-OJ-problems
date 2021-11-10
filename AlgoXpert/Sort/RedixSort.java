package AlgoExp.Sort;

import java.util.ArrayList;
import java.util.Collections;

public class RedixSort {

    // modified of Count sort,
    // count sort helps to sort in lenear time, but with huge memory overhead
    // redix sort deals with memory issue

    // O(d*(n+b)) time | O(n+b) space
    // where n is array length
    // d is max digits count in numbers
    // b is the numeric base
    //https://www.geeksforgeeks.org/radix-sort/
    public ArrayList<Integer> radixSort(ArrayList<Integer> array) {
        if(array.size()==0) return array;

        int maxNumber= Collections.max(array);
        int digitCount=(int)Math.log10(maxNumber)+1;
        for(int i=0;i<digitCount;i++)
            countingSort(array, i);

        return array;
    }

    // lsb-> least Significant bit , here used for digit
    // everything will happen here from right to left
    // because we have to sort the numbers by step
    // regarding their lsb to msb;
    // so first means most right
    public void countingSort(ArrayList<Integer> array, int curLsbIdx){
        int[] countArray=new int[10]; // there are only 10 unique numbers
        int[] sortedArray=new int[array.size()];

        int curLsbColumn=(int)Math.pow(10, curLsbIdx);

        for(int num:array){
            // (5678/100)%10-> 6 ; for lsbIdx 2
            // now the number will be stored according to
            // the count in index 6;
            int lsbDigit=(num/curLsbColumn)%10;
            countArray[lsbDigit]++;
        }

        // to calculate the first index+1 for a lsbDigit
        for(int i=1;i<10;i++)
            countArray[i]+=countArray[i-1];

        for(int i=array.size()-1;i>=0;i--){
            int num=array.get(i);
            int lsbDigit=(num/curLsbColumn)%10;
            countArray[lsbDigit]--; // to get idx from count
            int sortedIdx=countArray[lsbDigit];
            sortedArray[sortedIdx]=num;
        }

        for(int i=0;i<array.size();i++) array.set(i, sortedArray[i]);

    }
}
