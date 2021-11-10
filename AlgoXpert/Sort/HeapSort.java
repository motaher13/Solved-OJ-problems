package AlgoExp.Sort;

public class HeapSort {
    // complexity always time O(nlog(n)) | space O(1)
    // first, checkout minHeap problem from Heaps category
    public static int[] heapSort(int[] array) {
        buildMaxHeap(array);
        for(int endIdx=array.length-1;endIdx>0;endIdx--){
            swap(array, 0, endIdx);
            siftDown(array, 0, endIdx-1);
        }
        return array;
    }

    public static void buildMaxHeap(int[] array){
        int firstParent=(array.length-2)/2;
        for(int cur=firstParent;cur>=0;cur--)
            siftDown(array, cur, array.length-1);
    }

    public static void siftDown(int[] array, int curIdx, int endIdx){
        int childOneIdx=curIdx*2+1;
        while(childOneIdx<=endIdx){
            int swapIdx=0;
            int childTwoIdx=curIdx*2+2;
            if(childTwoIdx>endIdx || array[childTwoIdx]<array[childOneIdx])
                swapIdx=childOneIdx;
            else
                swapIdx=childTwoIdx;

            if(array[swapIdx]>array[curIdx]){
                swap(array, curIdx, swapIdx);
                curIdx=swapIdx;
                childOneIdx=curIdx*2+1;
            }else{
                return;
            }

        }
    }


    public static void swap(int[] array, int i, int j){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}
