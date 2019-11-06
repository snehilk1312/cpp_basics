#include<iostream>
using namespace std;
class vehicle{
public:
    string shift;
    int wheel;
    vehicle(){
    shift="yes";
    }
    virtual void getDetails(){
    wheel=0;
    }

};

class TwoWheeler:public vehicle{
public:
    int w;
void getDetails(){
w=2;
cout<<"number of wheel is:"<<w;
}
};
class FourWheeler:public vehicle{
public:
    int we;
void getDetails(){
we=4;
cout<<"number of wheel is:"<<we;
}
};


int main(){
TwoWheeler bike;
vehicle *ptr;
ptr=&bike;
ptr->getDetails();
cout<<bike.shift;
return 0;

}
