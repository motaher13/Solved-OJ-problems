#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    int i,j,k,l,m,n,sum;
    while(scanf("%d",&n)==1){
    string str;
    l=0;
    while(1){
        str=str+(char)'1';
        l++;
        sum=0;
        for(i=0;i<str.size();i++){
              sum=sum*10+(int)str[i]-48;
    sum=sum%n;
        }
        if(sum==0)break;
    }
    printf("%d",l);
    printf("\n");
    }
   return 0;
}
