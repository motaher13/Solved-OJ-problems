package LeetCode.String;

public class ValidAnagram {

    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length())
            return false;
        int[] a=new int[130];
        int[] b=new int[130];
        for(int i=0;i<s.length();i++){
            a[s.charAt(i)]++;
            b[t.charAt(i)]++;
        }
        for(int i=97;i<=122;i++)
            if(a[i]!=b[i])
                return false;

        return true;
    }


    public boolean best(String s, String t) {
        char[] table = new char[26];

        char[] sa = s.toCharArray();
        char[] ta = t.toCharArray();

        for(int i = 0; i < sa.length; i++) table[sa[i] - 'a']++;
        for(int i = 0; i < ta.length; i++) table[ta[i] - 'a']--;
        for(int i = 0; i < table.length; i++) if(table[i] != 0) return false;
        return true;

    }

    public static void main(String[] args){
        String s = "anagram", t = "nagarak";
        boolean i=(new ValidAnagram()).isAnagram(s,t);
        System.out.println(i);
    }
}
