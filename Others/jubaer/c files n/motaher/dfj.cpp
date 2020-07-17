#include <iostream>
#include <vector>
using namespace std;
  vector<int>br(3);
     vector<int>cr(3);
      vector<int>ar(3);
int main()
{
    int i,a,b,c,n,m,j,ck=1,k;
    cin>>n>>m;

    j=n;
    for(i=0;i<n;i++){
    ar[i]=j;
    j--;
    }

    for(k=1;k<=m;k++){
    if(k%2!=0){
    if(ck==1){
    ar.pop_back();

    cout<<ar.back()<<endl;
    br.push_back(1);
     cout<<br.size()<<endl;
    ck=2;
    }
    else if(ck==2){
    br.pop_back();
    cr.push_back(1);
    ck=3;
    }
     else if(ck==3){
    cr.pop_back();
    ar.push_back(1);
    ck=1;
    }
    }
    else {
        if(ck==1){
            if(br[br.size()-1]>cr[cr.size()-1]){
                a=cr[cr.size()-1];
                cr.pop_back();
                br.push_back(a);
            }
            else{
                 a=br[br.size()-1];
                br.pop_back();
                cr.push_back(a);
            }
        }
        else if(ck==2){
              if(ar[ar.size()-1]>cr[cr.size()-1]){
                a=cr[cr.size()-1];
                cr.pop_back();
                ar.push_back(a);
            }
            else{
                 a=ar[ar.size()-1];
                ar.pop_back();
                cr.push_back(a);
            }
        }
        else if(ck==3){
             if(ar[ar.size()-1]>br[br.size()-1]){
                a=br[br.size()-1];
                br.pop_back();
                ar.push_back(a);
            }
            else{
                 a=ar[ar.size()-1];
                ar.pop_back();
                br.push_back(a);
            }

        }
    }

    }
 for(i=0;i<ar.size();i++){
    cout<<ar[i]<<" ";
 }
 cout<<endl;
 for(i=0;i<br.size();i++){
    cout<<br[i]<<" ";
 }
 cout<<endl;
 for(i=0;i<cr.size();i++){
    cout<<cr[i]<<" ";
 }
 cout<<endl;
}
