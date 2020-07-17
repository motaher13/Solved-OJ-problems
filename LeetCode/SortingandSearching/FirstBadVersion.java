package LeetCode.SortingandSearching;

public class FirstBadVersion {

    public int firstBadVersion(int nn) {
        if(nn==0) return 0;
        long first=1,second= nn;
        while (first!=second){
            long s=(first+second)/2;
            if(isBadVersion((int)s)) second=s;
            else first=s+1;
        }
        return (int)first;
    }

    public int checkFirstBadVersion(int first,int second){
        if(first==second) return first;
        int s=(first+second)/2;
        if(isBadVersion(s)) return checkFirstBadVersion(first,s);
        return checkFirstBadVersion(s+1,second);
    }

    public boolean isBadVersion(int n){
//        return n >= 1702766719;
        return n >= 2;
    }

    public static void main(String[] args){


        int k=(new FirstBadVersion()).firstBadVersion(2126753390);
//        long k=(new FirstBadVersion()).firstBadVersion(5);
        System.out.println(k);
    }
}
