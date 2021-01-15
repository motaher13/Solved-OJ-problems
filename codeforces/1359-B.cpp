
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,x,y;
    char str[1010];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&n,&m,&x,&y);

        int sum=0;

        for(j=0;j<n;j++){
            scanf("%s",&str);

            for(k=0;k<m;k++){
                if(str[k]=='.' && k<m-1 && str[k+1]=='.' && x*2>y){
                    sum+=y;
                    k++;
                }
                else if(str[k]=='.')
                    sum+=x;
            }
        }

        printf("%d\n",sum);


    }

}
