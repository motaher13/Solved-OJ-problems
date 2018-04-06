
/**
 * In this code we have a very large array called arr, and very large set of operations
 * Operation #1: Increment the elements within range [i, j] with value val
 * Operation #2: Get max element within range [i, j]
 * Build tree: build_tree(1, 0, N-1)
 * Update tree: update_tree(1, 0, N-1, i, j, value)
 * Query tree: query_tree(1, 0, N-1, i, j)
 * Actual space required by the tree = 2*2^ceil(log_2(n)) - 1
 */

#include<iostream>
#include<algorithm>
using namespace std;

#include<string.h>
#include <stdio.h>
#include<math.h>

int arr[23423];
int tree[21323];
int lazy[2323];

/**
 * Build and init tree
 */
void build_tree(int node, int a, int b) {
  	if(a > b) return; // Out of range

  	if(a == b) { // Leaf node
    		tree[node] = arr[a]; // Init value
		return;
	}

	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child

	tree[node] = max(tree[node*2], tree[node*2+1]); // Init root value
}
int main()
{
       int i,N;
       scanf("%d",&N);
	for(i=0;i<N;i++)scanf("%d",&arr[i]);

	build_tree(1, 0, N-1);
	for(i=0;i<N*2;i++){
        printf("%d ",tree[i]);

}
}
