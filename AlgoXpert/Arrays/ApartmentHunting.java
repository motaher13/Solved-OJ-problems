package AlgoExp.Arrays;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class ApartmentHunting {

    public static int apartmentHunting(
            List<Map<String, Boolean>> blocks,
            String[] reqs) {

        int[][] counts =new int[blocks.size()][reqs.length];

        for(int k=0;k<blocks.size();k++){
            for(int i=0;i<reqs.length;i++){
                if(blocks.get(k).get(reqs[i])){
                    counts[k][i]=0;
                }
                else if(k>0 && counts[k-1][i]!= Integer.MAX_VALUE){
                    counts[k][i]= counts[k-1][i]+1;
                }
                else{
                    counts[k][i]= Integer.MAX_VALUE;
                }
            }
        }

        for(int k=blocks.size()-1;k>=0;k--){
            for(int i=0;i<reqs.length;i++){
                if(blocks.get(k).get(reqs[i])){
                    counts[k][i]=0;
                }
                else if(k<blocks.size()-1){
                    counts[k][i]= Math.min(counts[k][i],counts[k+1][i]+1);
                }
            }
        }

        int mn=Integer.MAX_VALUE;
        int pos=0;
        for(int k=0;k<blocks.size();k++){
            int mxD=Integer.MIN_VALUE;
            for(int i=0;i<reqs.length;i++) mxD=Math.max(mxD,counts[k][i]);
            System.out.printf(mxD+" ");
            if(mxD<mn){
                mn=mxD;
                pos=k;
            }
        }

        return pos;
    }



    public static void main(String[] args){
        List<Map<String, Boolean>> blocks =new ArrayList<>();
        Map<String, Boolean> map = Stream.of(new Object[][] {
                { "gym", false },
                { "school", true },
                { "store", false },
        }).collect(Collectors.toMap(data -> (String) data[0], data -> (boolean) data[1]));
        blocks.add(map);

        Map<String, Boolean> map1 = Stream.of(new Object[][] {
                { "gym", true },
                { "school", false },
                { "store", false },
        }).collect(Collectors.toMap(data -> (String) data[0], data -> (boolean) data[1]));
        blocks.add(map1);

        Map<String, Boolean> map2 = Stream.of(new Object[][] {
                { "gym", true },
                { "school", true },
                { "store", false },
        }).collect(Collectors.toMap(data -> (String) data[0], data -> (boolean) data[1]));
        blocks.add(map2);

        Map<String, Boolean> map3 = Stream.of(new Object[][] {
                { "gym", false },
                { "school", true },
                { "store", false },
        }).collect(Collectors.toMap(data -> (String) data[0], data -> (boolean) data[1]));
        blocks.add(map3);

        Map<String, Boolean> map4 = Stream.of(new Object[][] {
                { "gym", false },
                { "school", true },
                { "store", true },
        }).collect(Collectors.toMap(data -> (String) data[0], data -> (boolean) data[1]));
        blocks.add(map4);

        String[] reqs = {"gym", "school", "store"};

        System.out.println(apartmentHunting(blocks,reqs));
    }
}
