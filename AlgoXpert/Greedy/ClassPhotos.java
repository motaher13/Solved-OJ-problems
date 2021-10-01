package AlgoExp.Greedy;

import java.util.ArrayList;
import java.util.Collections;

public class ClassPhotos {

    public boolean classPhotos(
            ArrayList<Integer> redShirtHeights, ArrayList<Integer> blueShirtHeights) {

        Collections.sort(redShirtHeights);
        Collections.sort(blueShirtHeights);

        if(redShirtHeights.get(0)==blueShirtHeights.get(0))
            return false;

        boolean tall=redShirtHeights.get(0)>blueShirtHeights.get(0);
        for(int i=0;i<blueShirtHeights.size();i++){
            if((redShirtHeights.get(i)>blueShirtHeights.get(i))!=tall){
                return false;
            }
        }

        return true;
    }
}
