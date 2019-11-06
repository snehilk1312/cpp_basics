#include "iostream"
using namespace std;
class shape{
public:
int a,b,c;
shape(int u=0,int v=0,int w=0){
a=u;
b=v;
c=w;
}
void display(){
cout<<"dimensions are:"<<a<<endl<<b<<endl<<c;
}
};
class rectangle:public shape{
public:
    int l,b;
    rectangle(int x=0,int y=0){
    l=x;
    b=y;
    }
void display(){
cout<<"length is:"<<l<<endl<<"breadth is:"<<b<<endl;
}
void area(){
cout<<"area is:"<<l*b<<endl;
}
};
class cuboid:public rectangle{
public:
    int l1,b1,h1;
    cuboid(int k=0,int l=0,int m=0){
    l1=k;
    b1=l;
    h1=m;
    }
void display(){
cout<<"length is:"<<l1<<endl<<"breadth is:"<<b1<<endl<<"height is:"<<h1;
}
void volume(){
cout<<"volume is :"<<l1*b1*h1<<endl;
}
};


int main()
{
int e;
int f;
int g;
cout<<"enter dimensions for cuboid";
cin>>e>>f>>g;
cuboid c(e,f,g);
c.volume();
return 0;
}


