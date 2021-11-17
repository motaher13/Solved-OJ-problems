package AlgoExp.DP;

/*OM13*/

// explain-> https://www.geeksforgeeks.org/edit-distance-dp-5/
// https://www.youtube.com/watch?v=Thv3TfsZVpw
/*
tin vabe current char ke target e banano jay, replace, addition and removal
** x-axis->target string, y-axis->primary String

1.upper left nea mane hocche dui string eroi 1 ghor ag porjonto match 
koraite cost koto, ekhon current elemnt gula mille top left bose jabe, 
na mille 1 baraye bosabo-> mane hoilo -replace-.
	
2.same left mane hoilo primary-current element ke target-previous
element porjonto milaite koto lagse, bosbe tar sathe 1 jog kore-> mane
hoilo target-current element ta primary-current
elemnt er sheshe -addition- hoilo.

3.upper same mane hoilo primary-previous element ke target-current
element porjonto milaite koto lagse, bosbe tar sathe 1 jog kore-> mane
hoilo primary string er current element ta -remove- hoilo.
*/

public class LevenshteinDistance {
    public static int levenshteinDistance(String str1, String str2) {
        int dp[][] = new int[str1.length()+1][str2.length()+1];

        for(int i=0;i<=str1.length();i++){
            for(int j=0;j<=str2.length();j++){
                if(i==0) dp[i][j]=j;
                else if(j==0) dp[i][j]=i;
                else{
                    if(str1.charAt(i-1)==str2.charAt(j-1))
                        dp[i][j]=dp[i-1][j-1];
                    else
                        dp[i][j]=Math.min(Math.min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j])+1;
                }
            }
        }

        return dp[str1.length()][str2.length()];
    }
}
