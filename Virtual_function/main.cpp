#include "iostream"
using namespace std;
class polygon{
public:
    int a,b;
    void getdata(int a1=0,int b1=0){
    a=a1;
    b=b1;

    }
    virtual void area()=0;
//    virtual void perimeter()=0;


};

class triangle:public polygon{
public:
    void area(){
    cout<<0.5*a*b;
    }

};
class rectangle:public polygon{
public:
    void area(){
    cout<<a*b;
    }

};
int main(){

rectangle t;
polygon *ptr;
ptr=&t;
t.getdata(3,4);
ptr->area();
return 0;

}
