package AlgoExp.Strings;

import java.util.ArrayList;
import java.util.List;

public class UnderscoringSubstring {
    public static String underscorifySubstring(String str, String substring) {
        List<int[]> ind = findOverlappingStrPos(str, substring);
        ind = mergeOverlappingIntervals(ind);
        return getUnderScoredString(str,ind);

    }

    public static String getUnderScoredString(String str, List<int[]> ind){
        StringBuilder sb=new StringBuilder();
        int i=0,j=0;
        while (j<str.length()){
            if(i<ind.size() && j==ind.get(i)[0]){
                sb.append('_').append(str.substring(ind.get(i)[0],ind.get(i)[1])).append('_');
                j=ind.get(i)[1];
                i++;
            }
            else {
                sb.append(str.charAt(j));
                j++;
            }
        }
        return sb.toString();
    }

    public static List<int[]> findOverlappingStrPos(String str, String substring) {

        List<int[]> ind = new ArrayList<>();
        int start = 0;
        while (true) {
            int nextInd = str.indexOf(substring, start);
            if (nextInd == -1) break;
            ind.add(new int[]{nextInd, nextInd + substring.length()});
            start = nextInd + 1;
        }
        return ind;
    }


    public static List<int[]> mergeOverlappingIntervals(List<int[]> intervals) {
        List<int[]> out = new ArrayList<>();
        if(intervals.size()>0)
            out.add(intervals.get(0));
        for (int i = 1, j = 0; i < intervals.size(); i++) {
            if (intervals.get(i)[0] <= out.get(j)[1])
                out.get(j)[1] = Math.max(out.get(j)[1], intervals.get(i)[1]);
            else {
                out.add(intervals.get(i));
                j = out.size() - 1;
            }
        }
        return out;
    }
}
