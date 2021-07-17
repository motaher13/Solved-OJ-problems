package AlgoExp.Strings;

public class CaesarCipherEncryptor {
    public static String caesarCypherEncryptor(String str, int key) {
        int l=str.length();
        char[] out=new char[l];

        for(int i=0;i<l;i++){
            out[i]= rotateChar(str.charAt(i),key);
        }
        return new String(out);
    }

    public static char rotateChar(char c, int key){
        return (char) (((c-97+key)%26)+97);
    }
}
