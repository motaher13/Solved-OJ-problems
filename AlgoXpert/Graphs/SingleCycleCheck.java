package AlgoExp.Graphs;

public class SingleCycleCheck {
    public static boolean hasSingleCycle(int[] array) {
        int l=array.length;
        int[] visited = new int[l];
        for(int i=0,j=0;j<=l;j++){
            System.out.printf(i+" ");
            if(i!=0 && visited[i]==1) return false;
            visited[i]=1;
            i+=(array[i]%l);
            if(i<0) i+=l;
            if(i>=l) i-=l;
        }
        for(int i:visited)
            if(i!=1) return false;

        return true;

    }
}
