#include <iostream>
#include <stdio.h>

using namespace std;
class rec{
   public:
       int height,width;
       int area();



};
int rec::area(){
    return height*width;
}
int main()
{
      rec obj;
      scanf("%d%d",&obj.height,&obj.width);
      cout<<obj.area()<<endl;

}
