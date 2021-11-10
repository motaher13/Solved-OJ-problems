package AlgoExp.Sort;

public class SelectionSort {
    // select an index and make it the smallest
    public static int[] selectionSort(int[] array) {
        for(int i=0;i<array.length;i++){
            int mn=Integer.MAX_VALUE;
            int idx=i;
            for(int j=i;j<array.length;j++){
                if(array[j]<array[idx])
                    idx=j;
            }
            int temp=array[idx];
            array[idx]=array[i];
            array[i]=temp;
        }

        return array;
    }
}
