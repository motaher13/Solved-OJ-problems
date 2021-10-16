package AlgoExp.Recursion;

import java.util.ArrayList;
import java.util.List;

public class ProductSum {
    // Tip: You can use `element instanceof ArrayList` to check whether an item
    // is an array or an integer.
    public static int productSum(List<Object> array) {
        return productSum(array, 1);
    }

    public static int productSum(List<Object> array, int layer) {
        int sum=0;
        for(Object item:array){
            if(item instanceof ArrayList)
                sum+=productSum((ArrayList<Object>)item, layer+1);
            else
                sum+=(int)item;
        }
        return layer*sum;
    }
}
