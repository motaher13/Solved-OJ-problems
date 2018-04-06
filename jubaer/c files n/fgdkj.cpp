#include <stdio.h>
#include <map>
using namespace std;
int ara[1000],segment[1000];

int min(int p,int q){
if(p<q)return p;
else return q;
}
void construct(int ara[],int segment[],int low,int high,int pos){
int mid;
if(high<low)return;
     if(high==low){
        segment[pos]=ara[low];
        return;
     }
     mid=(low+high)/2;
     construct(ara,segment,low,mid,((2*pos)+1));
     construct(ara,segment, mid+1,high,((2*pos)+2));
     segment[pos]=min(segment[(2*pos)+1],segment[(2*pos)+2]);
}
int main()
{

    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
        construct(ara,segment,0,n-1,0);
        for(i=0;i<(2*n)-1;i++){
            printf("%d ",segment[i]);

    }

}
