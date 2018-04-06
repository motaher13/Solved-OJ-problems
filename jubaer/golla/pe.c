#include <stdio.h>
int prime(int n){
int ck=1,i;
for(i=3;i<=sqrt(n);i++)
if(n%i==0){
ck=0;
break;
}
return ck;
}

