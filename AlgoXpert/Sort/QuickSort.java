package AlgoExp.Sort;

public class QuickSort {
    // Best: O(nlogn(n)) time | O(log(n)) space
    // Average: O(nlogn(n)) time | O(log(n)) space
    // worst: O(n^2) time | O(log(n)) space
    // when the array is sorted or reverse sorted, the pivot
    // never comes to middle of the array -> stays at a side
    // so the array
    // never breaks into half, so every iteration runs on
    // every element, thats why n^2
    public static int[] quickSort(int[] array) {
        implQuickSort(array, 0, array.length-1);
        return array;
    }

    public static void implQuickSort(int[] array, int low, int high) {
        if(low>=high) return;
        int pvtIdx=partition(array, low, high);
        implQuickSort(array, low, pvtIdx-1);
        implQuickSort(array, pvtIdx+1, high);
    }

    public static int partition(int[] array, int low, int high) {
        int pvt=array[high];
        int i=low;
        for(int j=low;j<high;j++){
            if(array[j]<pvt){
                swap(array, i, j);
                i++;
            }
        }
        swap(array, i, high);
        return i;

    }

    public static void swap(int[] array, int i, int j) {
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}
