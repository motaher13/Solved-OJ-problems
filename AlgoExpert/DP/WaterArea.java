package AlgoExp.DP;

public class WaterArea {
    /*OM13*/

    // look contents folder in git for pic
    //both solution: leetcode.com/problems/trapping-rain-water/solution/
    // DP, time n, space 1
    public static int waterArea(int[] heights) {
        int leftMx=0, rightMx=0;
        int left=0, right=heights.length-1;
        int sum=0;

        while(left<right){
            if(heights[left]<heights[right]){
                leftMx=Math.max(leftMx,heights[left]);
                sum+=leftMx-heights[left];
                left++;
            }
            else{
                rightMx=Math.max(rightMx,heights[right]);
                sum+=rightMx-heights[right];
                right--;
            }
        }
        return sum;
    }

    // DP, time n, space n
  /*public static int waterArea(int[] heights) {
		int l=heights.length;
		if(l==0) return 0;
    int[] mxFromLeft=new int[l];
    int[] mxFromRight=new int[l];

		mxFromLeft[0]=heights[0];
		for(int i=1;i<l;i++)
			mxFromLeft[i]=Math.max(mxFromLeft[i-1],heights[i]);

		mxFromRight[l-1]=heights[l-1];
		for(int i=l-2;i>=0;i--)
			mxFromRight[i]=Math.max(mxFromRight[i+1],heights[i]);

		int ans=0;
		for(int i=1;i<l-1;i++)
			ans+=Math.min(mxFromLeft[i],mxFromRight[i])-heights[i];

		return ans;
  }*/
}
