#include<iostream>
using namespace std;
class vehicle{
public:
    string type;
    vehicle(string t="unknown"){
    type ="unknown";
    }
    void display(){
    cout<<"Type of vehicle is:"<<type<<endl;
    }

};

class car:public vehicle{
public:
float mileage;
car(float c){
mileage=c;
}
void show(){

cout<<"mileage of the car is:"<<mileage<<endl;
}
};

int main(){
vehicle v;
v.display();
car c(1200);
c.type="car";
c.display();
c.show();
return 0;

}
