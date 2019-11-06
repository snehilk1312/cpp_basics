#include "iostream"
using namespace std;
class A{
private :
    int a=4,b=5;
public:
    int mul(){

    return a*b;
    }

};

class B:private A{
public:
    void display(){
      int area=mul() ;
      cout<<"Area is:"<<area;
    }

};

int main()
{

    B b;
    b.display();
    return 0;
}
