package AlgoExp.Searching;

public class QuickSelect {
    public static int quickselect(int[] array, int k) {
        int targetIdx=k-1;
        return doQuick(array, targetIdx, 0, array.length-1);
    }

    public static int doQuick(int[] array, int targetIdx, int low, int high) {
        if(low<high){
            int pvtIdx=partition(array, low, high);
            if(pvtIdx==targetIdx) return array[pvtIdx];
            else if(pvtIdx<targetIdx) return doQuick(array, targetIdx, pvtIdx+1, high);
            return doQuick(array, targetIdx, low, pvtIdx-1);
        }
        if(low==high) return array[low];
        return array[0];
    }


    public static int partition(int[] array, int low, int high) {
        // simulate with a dummy array, will be clear
        int pvt=array[high];
        int i=low;
        for(int j=low;j<high;j++){
            if(array[j]<pvt){
                swap(array, i,j);
                i++;
            }
        }
        swap(array, i, high);
        return i;
    }

    public static void swap(int[] array, int i, int j){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}
