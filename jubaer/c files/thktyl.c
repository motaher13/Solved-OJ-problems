#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;
int main()
{
int i,j,k,r,l,d,n,m,sum;

 map<int,int>name;
    scanf("%d",&n,&m);
    while(n--){
     scanf("%d",&k);
    }
    sum=0;
while(m--){
        scanf("%d".&l);
 if(name.find(l)!=name.end())sum=sum+1;
 //else sum=sum+1;
}
printf("%d",sum);
}
