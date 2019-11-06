#include<iostream>
using namespace std;
class person{
public:
    string name;
    int age;
    int pay;
    void display(){

    cout<<"name is: "<<name<<endl<<"age is:"<<age<<endl<<"pay is:"<<pay;}
    void getdata(){
    cout<<"enter the name,age and pay:";
    cin>>name>>age>>pay;
    }


};
int main(){
person p1;
p1.getdata();
p1.display();
return 0;
}
