#include <stdio.h>
#include <map>
using namespace std;
map<int,int>name;
map<int,int>::iterator it;
int ara[1000],segment[1000];
int min(int p,int q){
if(p<q)return p;
else return q;
}
int range(int segment[],int qlow,int qhigh,int low,int high,int pos){
int mid,r,t;
  if(qlow<=low&&qhigh>=high){
        name[segment[pos]]++;
    return segment[pos];
  }
  else if(qlow>high||qhigh<low){
    return 1232343;
  }
mid=(low+high)/2;
r=range(segment,qlow,qhigh,low,mid,(2*pos)+1);

t=range(segment,qlow,qhigh,mid+1,high,(2*pos)+2);
    r=min(r,t);
    name[r]++;

    return r;



}
void construct(int ara[],int segment[],int low,int high,int pos){
int mid;
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

    int n,i,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
        construct(ara,segment,0,n-1,0);
        for(i=0;i<15;i++){
            printf("%d ",segment[i]);

    }
    scanf("%d%d",&p,&q);
    n=range(segment,p,q,0,4,0);
    printf("\n%d",n);
   for(it=name.begin();it!=name.end();it++){
    printf("%d %d\n",it->first,it->second);
   }

}
