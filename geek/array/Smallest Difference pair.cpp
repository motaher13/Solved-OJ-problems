// C++ Code to find Smallest
// Difference between two Arrays
#include <bits/stdc++.h>
using namespace std;

// function to calculate Small
// result between two arrays
int findSmallestDifference(int ara[], int bra[], int m, int n)
{
	sort(ara,ara+m);
	sort(bra,bra+n);
	int i=0,j=0;
	int ans=INT_MAX;
	while(i<m && j<n)
	{
        if(abs(ara[i]-bra[j])<ans) ans=abs(ara[i]-bra[j]);

        if(ara[i]<bra[j]) i++;
        else
            j++;

	}

	return ans;
}

// Driver Code
int main()
{
	// Input given array A
	int A[] = {1, 2, 11, 5};

	// Input given array B
	int B[] = {4, 12, 19, 23, 127, 235};


	// Calculate size of Both arrays
	int m = sizeof(A) / sizeof(A[0]);
	int n = sizeof(B) / sizeof(B[0]);

	// Call function to print
	// smallest result
	cout << findSmallestDifference(A, B, m, n);

	return 0;
}

