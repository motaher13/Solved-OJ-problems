#include<stdio.h>
int main(){

    int i=0,j=0,k=0,l=0,t=0,m,n,q,r;
    char ch[90];
    scanf("%d",&n);
    r=0;
    while(n--){
            i=0,j=0,k=0,l=0,k=0;
            scanf("%d",&m);

        scanf("%s",ch);

    for(q=0;q<m;q++){
                if(ch[q]=='B')i++;
        else if(ch[q]=='W')j++;
        else if(ch[q]=='A')k++;
        else if(ch[q]=='T')l++;

    }
     if(k==m)printf("Case %d: ABANDONED",r+1);
    else if(i==m||m-k==i)printf("Case %d: BANGLAWASH",r+1);
    else if(j==m||m-k==j)printf("Case %d: WHITEWASH",r+1);
    else if(j==i)printf("Case %d: DRAW %d %d",r+1,j,l);

    else if(j>i)printf("Case %d: WWW %d - %d",r+1,j,i);
    else if(i>j)printf("Case %d: BANGLADESH %d - %d",r+1,i,j);
    r++;
    printf("\n");
}
return 0;
}
