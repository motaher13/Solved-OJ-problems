#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
//bool compare( data a, data b);

struct data{

   char name[100];
      int height,weight;
      long long income;
};
bool compare(data a,data b){

     if(a.income==b.income){

        if(a.height==b.height){

            if(a.weight==b.weight){
                return strlen(a.name)<strlen(b.name);
            }
                else return a.weight<b.weight;


        }
        else return a.height>b.height;

     }
    else return a.income>b.income;

}
using namespace std;
int main()
{
    int n,i;
    struct data datam[23];
    //sort(data,data+7,compare);
    for(i=0;i<3;i++){
    scanf("%lld%d%d%s",&datam[i].income,&datam[i].height,&datam[i].weight,datam[i].name);
    }
  sort(datam,datam+3,compare);
for(i=0;i<3;i++){
    printf("%lld%d%d%s\n",datam[i].income,datam[i].height,datam[i].weight,datam[i].name);
    }

}
