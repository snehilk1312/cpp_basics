#include<iostream>
using namespace std;
//A variable declared static within a module (but outside the body of a function) is
//accessible by all functions within that module. However, it is not accessible by functions from other modules.
static int k=0;
void func() {
   //A variable declared static within the body of a function maintains its value between invocations of the function.
   static int i=0; //static variable
   int j=0; //local variable
   i++;
   j++;
   k++;
   std::cout<<"i=" << i<<" and j=" <<j<<"and k="<<k<<endl;
}
void func1() {
   k++;
}
int main()
{
 func();
 func1();
 func();
 func1();
 func();
 func1();
 return 0;
}
/*
OUTPUT:
i=1 and j=1and k=1
i=2 and j=1and k=3
i=3 and j=1and k=5
*/
