#include <stdio.h>
int main()
{
    int p,q,r,ara[150][150],store[150][150],i,j,k,l,m,n,most,s,maxvalue,current,left,right,up,down,L,R;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&ara[i][j]);
        }
        store[i][0]=0;
    }
  maxvalue=0;
  most=0;
    for(i=0;i<m;i++){
        L=i;
        R=i;
        for(j=R;j<m;j++){
                for(k=0;k<m;k++){
                    store[k][0]=store[k][0]+ara[k][j];
                }

        current=0;

        s=0;
        p=0;
        q=0;
        for(r=0;r<n;r++){
            if(store[r][0]>current+store[r][0]){
                current=store[r][0];
                p=r;
            }
            else if(store[r][0]<=current+store[r][0]){
                q=r;
                current=current+store[r][0];
            }
            if(maxvalue<current){
                maxvalue=current;
                s=q;
            }
        }
        if(most<maxvalue){
            most=maxvalue;
            left=L;
            right=j;
            up=p;
            down=s;
        }
        }
        for(r=0;r<n;r++){
            store[r][0]=0;
        }
    }
   printf("%d %d %d %d %d",most,left,right,up,down);
}
