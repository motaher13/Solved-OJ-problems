#include<iostream>
using namespace std;
class rec{
    public:
    static  int height;
       static int weight;


      int area(){
      cout<<++height<<" "<<++weight;

      }
     // rec(int h,int w);

};
int rec::height;
int rec::weight;
 /*rec::rec(int h,int w){
   height=h;
   weight=w;

}*/
//int rec::area()
//{
   // return height*weight;
//}//
int main()
{
    //int k,l;
    rec obj;
    obj.area();
   // cin>>k>>l;
   // obj.set(k,l);
   // cin>>obj.height>>obj.weight;
  //  cout<<obj.area();


}
