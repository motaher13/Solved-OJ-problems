#include <stdio.h>
int main()
{
    int ara[100000],i,j,k,l[10000],u[10000],t,ck,m;
    for(i=0;;i++){
    scanf("%d",&ara[i]);
    if(getchar()=='\n')break;
    }
    for(k=0;k<=i;k++){
        l[k]=0;

    }
    m=0;
    for(k=0;k<=i;k++){

        for(j=0;j<=i;j++){
            if(ara[k]==ara[j]){
                    l[k]++;

            }
        }
        ck=1;
        if(k>0){
            for(t=0;t<m;t++){
                if(ara[k]==u[t]){

                    ck=0;
                }
            }
        }

        if(ck==1)printf("%d %d\n",ara[k],l[k]);
        u[m]=ara[k];
        m++;
    }
    return 0;
}
