package LeetCode;

import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Objects;
import java.util.stream.Collectors;

public class test {
    public static void main(String[] args) {
        ArrayList<String> list=new ArrayList<>(Arrays.asList("44","-55","-22"));
        String s=list.stream().filter(k->k.startsWith("-")).map(k-> k.replace("-","")).collect(Collectors.joining(","));
        System.out.println(s);
    }
}

class abul implements babul{
    int a;
    public abul(int a){
        this.a=a;
    }
    void bb(){
        System.out.println(a);
    }
}

interface babul{

}
