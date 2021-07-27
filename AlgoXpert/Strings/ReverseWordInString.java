package AlgoExp.Strings;

import java.util.Stack;

public class ReverseWordInString {
    public String reverseWordsInString(String str) {
        StringBuilder sb=new StringBuilder();
        Stack<Character> st=new Stack<>();
        for(int i=str.length()-1;i>=0;i--){
            char c=str.charAt(i);
            if(c==' '){
                while(st.size()>0) sb.append(st.pop());
                sb.append(c);
            }else{
                st.push(c);
            }
        }
        while(st.size()>0) sb.append(st.pop());
        return sb.toString();
    }
}
