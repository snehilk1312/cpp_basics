#include <iostream>
using namespace std;
class student{
public:
    int age,roll;
    string name;
    student(){
    name="unknown";
    age=0;
    roll=0;
    }



};
class parents{
public:
    string f_name,m_name;
    parents(){
    f_name="unknown";
    m_name="unknown";

    }


};
class faculty{
    public:
string fac_name;
int fac_age;
faculty(){
fac_name="unknown";
fac_age=0;

}

};

class college:public student,public parents,public faculty{
public:

void display(){
    cout<<"student name:"<<name<<endl<<"student age:"<<age<<endl<<"student roll:"<<roll<<endl<<"father name:"<<f_name<<endl<<"mother name:"<<m_name<<endl<<"faculty name:"<<fac_name<<endl<<"faculty age:"<<fac_age<<endl;
}

};

int main(){
college c;
c.name="snehil";
c.age=20;
c.roll=43;
c.f_name="Prabhat Kiran";
c.m_name="Sanju kumari";
c.fac_name="mr robot";
c.fac_age=30;
c.display();
return  0;
}
