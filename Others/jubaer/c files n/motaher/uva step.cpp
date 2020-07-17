#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,r,o,p,q,sum;
    cin>>k>>l;
    j=(k+l)/2;
    r=(j+1);
    sum=k;
    p=1;
    i=0;
   while(sum<=j){
    sum=sum+p;
    p++;
    i++;
   if(sum+p>=j)break;

   }
      sum=sum+p;
    p=1;
    o=0;
  while(sum<=l){
    sum=sum+p;
    p++;
    o++;
    if(sum==l)break;
  }
  cout<<i<<" "<<o<<" "<<i+o;

}
