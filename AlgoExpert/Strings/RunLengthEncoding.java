package AlgoExp.Strings;

public class RunLengthEncoding {
    public String runLengthEncoding(String string) {
        int count=1;
        StringBuffer out=new StringBuffer();
        for(int i=1;i<=string.length();i++){
            if(i<string.length()
                    && string.charAt(i)==string.charAt(i-1)
                    && count<9)
                count++;
            else{
                out.append(count).append(string.charAt(i-1));
                count=1;
            }
        }
        return out.toString();
    }
}
