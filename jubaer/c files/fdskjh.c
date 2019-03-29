#include <stdio.h>
int ara[1000],segment[1000];
int min(int p,int q){
if(p<q)return p;
else return q;
}
int range(int segment[],int qlow,int qhigh,int low,int high,int pos){
int mid,r,t;
  if(qlow<=low&&qhigh>=high){
    return segment[pos];
  }
  else if(qlow>high||qhigh<low){
    return 1232343;
  }
mid=(low+high)/2;
r=range(segment,qlow,qhigh,low,mid,(2*pos)+1);
t=range(segment,qlow,qhigh,mid+1,high,(2*pos)+2);
    return min(r,t);



}
void construct(int low,int high,int pos){
int mid;
     if(high==low){
        segment[pos]=ara[low];
      //  printf("segment:%d %d  %d\n",segment[pos],ara[low],pos);
        return;
     }
     mid=(low+high)/2;
     construct(low,mid,((2*pos)+1));
     construct( mid+1,high,((2*pos)+2));
     segment[pos]=min(segment[(2*pos)+1],segment[(2*pos)+2]);
  //   printf("%d %d\n",segment[pos],pos);
}
int main()
{

    int n,i,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
        construct(0,n-1,0);
        for(i=0;i<7;i++){
           printf("%d ",segment[i]);

    }
    scanf("%d%d",&p,&q);
    n=range(segment,p,q,0,3,0);
    printf("\n%d",n);

}
