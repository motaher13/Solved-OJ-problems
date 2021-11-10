package AlgoExp.Sort;

public class ThreeNumberSort {
    public int[] threeNumberSort(int[] array, int[] order) {
        // i-> iterator
        // j-> first order element
        // k-> last order element

        for(int i=0, j=0, k=array.length-1;i<=k;){
            if(array[i]==order[0]){
                swap(i, j, array);
                i++;
                j++;
            }
            else if(array[i]==order[order.length-1]){
                swap(i, k, array);
                k--;
            }else{
                i++;
            }
        }
        return array;
    }

    public void swap(int i, int j, int[] array){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}
