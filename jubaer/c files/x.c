#include <stdio.h>
struct structure {

       int x;
};
struct structure prin(struct structure pr){
       struct structure result,cock;

       result.x=pr.x;
       if(pr.x==0){
        return result;

       }
     //  else {
       // return cock*prin(cock-1);

       //}


}
int main(){
    struct structure s;

    s.x=5;
    printf("%d",prin(s));

}
