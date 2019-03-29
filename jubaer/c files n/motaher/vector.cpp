#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i,k;
    vector<int>rec(4);
    for(i=0;i<rec.size();i++){
        rec[i]=i+1;
    }
    for(i=0;i<4;i++)
    rec.push_back(1);
    cout<<rec.front()<<" "<<rec.back()<<" "<<rec.at(3)<<endl;
     for(i=0;i<rec.size();i++){
    cout<<rec[i]<<" ";
    }
    cout<<endl<<rec.size()<<endl;
    rec.pop_back();
    cout<<rec.size()<<endl;
      for(i=0;i<rec.size();i++){
    cout<<rec[i]<<" ";
    }
   k=rec[rec.size()-6];
   cout<<endl<<k;

}
