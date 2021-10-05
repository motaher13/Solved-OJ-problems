package AlgoExp.FamousAlgo;

public class KMP {

    // https://www.youtube.com/watch?v=GTJr8OvyEVQ

    public static boolean knuthMorrisPrattAlgorithm(String string, String substring) {
        int[] pattern=buildPattern(substring);
        return matchString(string, substring ,pattern);
    }


    public static boolean matchString(String string, String substring, int[] pattern) {
        int i=0, j=0;
        while(string.length()-i>=substring.length()-j){
            if(string.charAt(i)==substring.charAt(j)){
                if(j==substring.length()-1) return true;
                i++;j++;
            }else if(j>0){
                j=pattern[j-1];
            }else{
                i++;
            }
        }

        return false;
    }




    public static int[] buildPattern(String substring) {
        int l=substring.length();
        int[] pattern=new int[l];

        int i=1, j=0;
        while(i<l){
            if(substring.charAt(i)==substring.charAt(j)){
                pattern[i]=j+1;
                i++;j++;
            }
            else if(j>0){
                j=pattern[j-1];
            }else{
                i++;
            }
        }

        return pattern;
    }

    public static void main(String[] args){
        String string="aefoaefcdaefcdaed";
        String substring="aefcdaed";
        System.out.println(knuthMorrisPrattAlgorithm(string,substring));
    }
}
