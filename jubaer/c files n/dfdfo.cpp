#include <iostream>
#include <stdio.h>     // std::cout
#include <algorithm>
#include <map>
#include <string.h>
using namespace std; // std::next_permutation, std::sort

int main () {
    int j,ck,k,l;
  char myints[100];
  char str[100];
  while(scanf("%s%d",myints,&k)){
  l=strlen(myints);
  std::sort (myints,myints+l);

  //std::cout << "The 3! possible permutations with 3 elements:\n";

std::map<string,int>name;
 do {
        ck=0;
   // std::cout << myints[0] << ' ' << myints[1] << ' '<< '\n';
   for(j=0;j<k;j++){
    str[j]=myints[j];
 if((int)str[j]<(int)str[j-1]){
        ck=1;
        break;
 }
   }
   str[j]='\0';
   if(name[str]==1);
  else{
    name[str]=1;
    if(ck==0)
    cout<<str<<endl;
  }
  } while ( std::next_permutation(myints,myints+l) );
  name.clear();
  }
 // std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << '\n';
  return 0;
}
