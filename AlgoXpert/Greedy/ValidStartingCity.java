package AlgoExp.Greedy;

public class ValidStartingCity {

    public int validStartingCity(int[] distances, int[] fuel, int mpg) {
        // we will start at city zero and keep track for each city
        // how much gas power we enter with, the city we enter with
        // least amount of gas power has the most power to cover it,
        // because the necessary amount of gas is present.
        // so that would be our target city

        for(int i=0;i<fuel.length;i++) fuel[i]=fuel[i]*mpg; // converting fuel to power[how far can go]
        int min=Integer.MAX_VALUE;
        int idx=0;
        int currentGasPower=0;

        for(int i=0;i<distances.length;i++){
            if(currentGasPower<min){
                min=currentGasPower;
                idx=i;
            }
            currentGasPower= currentGasPower+fuel[i]-distances[i];
        }

        return idx;
    }
}
