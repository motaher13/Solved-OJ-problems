package LeetCode.Math;

import java.util.*;

public class FractiontoRecurringDecimal {

    public String fractionToDecimal(int numerator, int denominator) {
        String sign= ((numerator!=0) && (numerator<0 ^ denominator<0))? "-":"";

        long absNumerator=Math.abs((long) numerator);
        long absDenominator=Math.abs((long) denominator);

        String integerPart=String.valueOf(absNumerator/absDenominator);
        long reminder=absNumerator%absDenominator;
        if(reminder==0){
            return sign+integerPart;
        }

        StringBuilder decimalPart=new StringBuilder();
        HashMap<Long,Integer>map= new HashMap<>();

        while (reminder!=0){
            if(map.containsKey(reminder)){
                decimalPart.insert(map.get(reminder),"(");
                decimalPart.append(")");
                break;
            }

            map.put(reminder,decimalPart.length()); //position where the result of the reminder will be stored
            decimalPart.append((reminder*10)/absDenominator); // if decimal part is zero, still it will be included, practice 4/333
            reminder=(reminder*10)%absDenominator;
        }
        return sign+integerPart+"."+decimalPart.toString();

    }

    public static void main(String[] args) {
        System.out.println((new FractiontoRecurringDecimal()).fractionToDecimal(-2147483648,1));
    }
}
