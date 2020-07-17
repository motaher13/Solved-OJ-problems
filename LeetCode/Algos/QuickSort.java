package LeetCode.Algos;

public class QuickSort {

    /*
    * take take the last element of the arr as pivot, iterate from start upto that element, use i, j
    * if j<pivot? swap(i,j),i++,j++; else j++
    * that will place all smaller element then pivot at left part of the arr and rest at the right part
    * place the pivot at the middle and do that for the left and right part
    *  https://www.youtube.com/watch?v=uXBnyYuwPe8
    * */

    private void sort(int arr[], int low, int high){
        if(low<high){
            int pvtPoint=partition(arr,low,high);
            sort(arr,low,pvtPoint-1);
            sort(arr,pvtPoint+1,high);
        }
    }

    private int partition(int arr[], int low, int high){
        int pvt=arr[high];
        int i=low;
        for(int j=low;j<high;j++){
            if(arr[j]<pvt){
                swap(arr,i,j);
                i++;
            }
        }
        swap(arr,i,high);
        return i;
    }

    private void swap(int[] arr, int i, int j){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }

    public static void main(String[] args) {
        int[] a={3,4,2,1,5,7,6};
        (new QuickSort()).sort(a,0,a.length-1);
        for(int i:a) System.out.print(i+" ");
        System.out.println();
    }
}
