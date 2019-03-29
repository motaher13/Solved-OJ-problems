#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
   vector<double>vc;
int main()
{
   int i,j,k,l;
   double x=1,sum=0;
  for(i=1;i<=10000000;i++){
        sum=sum+log10(x);
  vc.push_back(sum);
  x++;

  }
  scanf("%d",&l);
  while(l--){
    scanf("%d",&i);
    printf("%.lf\n",floor(vc[i-1]+1));
  }
  return 0;
}
