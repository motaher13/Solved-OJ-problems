package AlgoExp.Recursion;

import java.util.ArrayList;

public class GenerateDivTags {
    public ArrayList<String> generateDivTags(int numberOfTags) {
        ArrayList<String> out= new ArrayList<>();
        makeDivTags(out,0,0,numberOfTags, "");
        return out;
    }

    public void makeDivTags(ArrayList<String> out, int a, int b, int n, String str) {
        if(a==n && b==n){
            out.add(str);
            return;
        }

        if(a<n) makeDivTags(out,a+1,b,n, str+"<div>");
        if(b<n && b<a) makeDivTags(out,a,b+1,n, str+"</div>");
    }
}
