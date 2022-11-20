#include <iostream>
using namespace std;
class multiply {
   public:
      int x, y, z;
     void getdata(int a, int b) {
      x=a;
      y=b;
   }
      void display() {
      cout<<"
         mul of X:"<<x;
         cout<<"
          mul of Y:"<<y;
   }
   void operator*(mul &);
};
      void mul::operator*(mul &ob) {
    x=x*ob.x;
   y=y*ob.y;
   display();
}
int main() {
   mul ob1, ob2;
   ob1.getdata(10);
   ob2.getdata(20);
   ob1*ob2;
}
