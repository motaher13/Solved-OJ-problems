#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>

#define inf 2<<30;

using namespace std;

struct node{
    int v, cost;
    bool operator<(const node& p)const{
        return p.cost<cost;
    };
};

int cst[1000],parent[1000];
vector<node> adjacency_list[1000];
int number_of_vertex;
void dijkstra(int s){
    priority_queue<node>q;
    int i;
    node current_node, destination_node,n;
    for(i=0;i<number_of_vertex;i++)
            cst[i]=inf, parent[i]=-1;
    cst[s]=0;
    parent[s]=s;
    n.v=s;
    n.cost=0;
    q.push(n);
    while(!q.empty()){
        current_node=q.top();
        q.pop();
        for(int i=0;i<adjacency_list[current_node.v].size();i++){
            destination_node=adjacency_list[current_node.v][i];
            if(cost[destination_node.v]>cost[current_node.v]+destination_node.cost){
                cost[destination_node.v]=cost[current_node.v]+destination_node.cost;
                n.v=destination_node.v;
                n.cost=cost[destination_node.v];
                parent[destination_node.v]=current_node.v;
                q.push(n);
            }
        }
    }
    return ;
}

int main(){
    node n;
    vector<node>v;
    int cst, u, v, number_of_edge;
    scanf("%d %d", &number_of_vertex, &number_of_edge);
    for(inti=0;i<number_of_vertex;i++){
        adjacency_list[i].clear();
    }
    for(int i=0;i<number_of_edge;i++){
        scanf("%d %d %d", &u, &v, &cst);
        n.v=u, n.cost=cst;
        adjacency_list[v].push_back(n);
        n.v=v, n.cost=cst;
        adjacency_list[u].push_back(n);
    }
    scanf("%d", &u);
    dijkstra(u);
    return 0;
}
