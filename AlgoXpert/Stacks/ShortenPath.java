package AlgoExp.Stacks;

import java.util.ArrayList;
import java.util.List;

public class ShortenPath {
    public static String shortenPath(String path) {
        String out="";
        boolean rootStart=path.charAt(0)=='/';
        List<String> valid=new ArrayList<>();

        if(rootStart) valid.add("");

        String[] list=path.split("/");

        for(String token:list){
            if(token.length()==0 || token.equals(".")) continue;
            else if(token.equals("..")){
                if(valid.size()==0 || valid.get(valid.size()-1).equals(".."))
                    valid.add(token);
                else if(!valid.get(valid.size()-1).equals(""))
                    valid.remove(valid.size()-1);
            }else{
                valid.add(token);
            }
        }

        if(valid.size()==1 && rootStart) return "/";
        return String.join("/",valid);
    }
}
