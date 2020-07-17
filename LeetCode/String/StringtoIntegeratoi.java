package LeetCode.String;

public class StringtoIntegeratoi {

    public int myAtoi(String str) {
        if (str==null || str.trim().length()==0)
            return 0;
        str=str.trim();
        int num=0;
        int i=0;
        int multiplyer=1;
        char[] ca=str.toCharArray();
        if(ca[0]=='-' || ca[0]=='+')
            i++;
        if(ca[0]=='-')
            multiplyer=-1;

        for(;i<ca.length;i++){
            if(Character.isDigit(ca[i])){
                int temp=num*10+(ca[i]-'0');
                if(temp/10!=num){
                    if(multiplyer==1) return 2147483647;
                    else return -2147483648;
                }
                num=temp;
            }
            else break;
        }
        return num*multiplyer;


    }


    public static void main(String[] args){
        String s="-91283472332";
        int i=(new StringtoIntegeratoi()).myAtoi(s);
        System.out.println(i);
    }
}
