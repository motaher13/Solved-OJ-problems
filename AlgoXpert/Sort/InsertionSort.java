package AlgoExp.Sort;

public class InsertionSort {
    public static int[] insertionSort(int[] array) {
        for(int i=1;i<array.length;i++){
            for(int j=i;j>0 && array[j]<array[j-1];j--){
                int temp=array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
        }
        return array;
    }
}
