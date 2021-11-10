#include<bits/stdc++.h>
using namespace std;

struct Edge
{
    int source, dest, weight;
};

/* bellman ford could detect negative cycle.remember that negative 
edge doesn't mean negative cycle, this is directed grapth*/

void bellmanford(vector<Edge> const&edges,int source,int n)
{
    vector<int>parent(n,-1);
    vector<int>distance(n,INT_MAX);
    distance[source]=0;

    /* the iteration will be nodeCount-1 times, cause, to reach from 
    *  0 to 5, we need 4 steps, meaning nodeCount-1 steps will take us
    *  to the last node
    */
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<edges.size(); j++)
        {
            int u=edges[j].source, v=edges[j].dest, w=edges[j].weight;

            if(distance[u]!=INT_MAX && distance[u]+w<distance[v])
            {
                distance[v]=distance[u]+w;
                parent[v]=u;

            }
        }
    }

    for(int i=0; i<edges.size(); i++)
    {
        int u=edges[i].source, v=edges[i].dest, w=edges[i].weight;

        if(distance[u]!=INT_MAX && distance[u]+w<distance[v])
        {
            printf("negative cycle found");
            return;

        }
    }

    for(int i=0;i<n;i++)
    {
        cout << "Distance of vertex " << i << " from the source is "
			 << setw(2) << distance[i] << ". It's path is [ "<<endl;
		printPath(parent, i); cout << "]" << '\n';

    }

}



int main()
{
    int i,j,k,l,m,n;
    n=5;
    vector<Edge> edges =
    {
        // (x, y, w) -> edge from x to y having weight w
        { 0, 1, -1 }, { 0, 2, 4 }, { 1, 2, 3 }, { 1, 3, 2 },
        { 1, 4, 2 }, { 3, 2, 5 }, { 3, 1, 1 }, { 4, 3, -3 }
    };

    int source=0;
    bellmanford(edges,source,n);
}
