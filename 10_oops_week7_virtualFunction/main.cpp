#include "iostream"
using namespace std;
class polygon{
public:
    int a,b;
    polygon(){
    a=0;
    b=0;
    }
    void getdata1(int l,int h){
    a=l;
    b=h;

    }
    virtual void area(){
    cout<<"area is:"<<a*b<<endl;
    }

};

class rectangle:public polygon{
public:
    int c,d;
    rectangle(){
    c=0;
    d=0;
    }
    void area(){
    cout<<"AREA is:"<<c*d;
    }

};

class triangle:public polygon{
public:
    triangle(){
    e=0;
    f=0;
    }
    void area(){
    cout<<"ArEa Is:"<<0.5*a*b;
    }

};


int main(){
triangle t;
polygon *ptr;
ptr=&t;
t.getdata1(3,4);
ptr->area();
return 0;
}
