#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    vector<int>vc;
    vector<int>::iterator i;
    int j,n;
    for(j=0;j<5;j++){
        scanf("%d",&n);
        vc.push_back(n);
    }
    for(i=vc.begin();i<vc.end();i++){
        printf("%d ",*i);
    }
    sort(vc.begin(),vc.end());
    printf("\n");
      for(i=vc.begin();i<vc.end();i++){
        printf("%d ",*i);
    }
}
