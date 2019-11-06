#include "iostream"
using namespace std;
class student{
public:
    string name;
    int dob,roll;
    void getdata(string n="unknown",int d=0,int r=0){
      name=n;
      dob=d;
      roll=r;
    }

   virtual void displayresult(){
    cout<<name<<endl<<dob<<endl<<roll<<endl;
    }

};

class pg:public student{
    public:
void displayresult(){
cout<<"in pg display";
}

};

class ug :public student{
    public:
void displayresult(){
cout<<"in ug display";
}};

int main(){
    ug u;
u.getdata("snehil",14,43);
student *ptr;
ptr=&u;
ptr->displayresult();
return 0;

}
