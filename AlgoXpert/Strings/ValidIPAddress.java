package AlgoExp.Strings;

import java.util.ArrayList;

public class ValidIPAddress {
    public ArrayList<String> validIPAddresses(String str) {
        ArrayList<String> out=new ArrayList<>();
        String[] parts={"","","",""};

        for(int i=1;i<Math.min(str.length(),4);i++){
            parts[0]=str.substring(0,i);
            if(!validPart(parts[0])) continue;

            for(int j=i+1; j<i+Math.min(str.length()-i,4); j++){
                parts[1]=str.substring(i,j);
                if(!validPart(parts[1])) continue;

                for(int k=j+1; k<j+Math.min(str.length()-j,4); k++){
                    parts[2]=str.substring(j,k);
                    parts[3]=str.substring(k);
                    if(validPart(parts[2]) && validPart(parts[3])){
                        String s= join(parts);
                        out.add(s);
                    }
                }
            }
        }

        return out;
    }

    public boolean validPart(String s){
        int i=Integer.parseInt(s);
        if(i<=255)
            return String.valueOf(i).length()==s.length();
        return false;
    }

    public String join(String[] strings){
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<4;i++){
            sb.append(strings[i]);
            if(i<3) sb.append(".");
        }
        return sb.toString();
    }
}
