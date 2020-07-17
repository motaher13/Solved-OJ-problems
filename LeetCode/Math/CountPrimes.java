package LeetCode.Math;

public class CountPrimes {

    public int countPrimes(int n) {
        boolean[] prime=new boolean[n+1];
        for (int i=0;i<n;i++) prime[i]=true;

        for(int i=2;i*i<n;i++){
            if(!prime[i]) continue;
            for(int j=i*i;j<n;j+=i) prime[j]=false;
        }

        int count=0;
        for(int i=2;i<n;i++) if(prime[i]) count++;

        return count;
    }

    public int best(int n) {
        if(n<3) return 0;
        boolean[] notPrime=new boolean[n];
        int count=n/2; //keeping evens out of count;

        for(int i=3;i*i<n;i+=2){ //i+=2 to skip even no;
            if(notPrime[i]) continue;
            for(int j=i*i;j<n;j+=2*i) {  //j+=2*i when odd+even(2*i)=odd, to skip even
                if(!notPrime[j]) {
                    notPrime[j] = true;
                    count--;
                }
            }
        }

        return count;
    }

    public static void main(String[] args){
        int k=(new CountPrimes()).best(100);
        System.out.println(k);
    }
}
