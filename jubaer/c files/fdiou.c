#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,sum;
    scanf("%d",&n);
    string str;
    l=0;
    while(1){
        str=str+(char)'1';
        l++;
        sum=0;
        for(i=0;i<str.size();i++){
              sum=sum*10+(int)str[k]-48;
    sum=sum%n;
        }
        if(sum==0)break;
    }
    printf("%d",l+1);


}
