#include "iostream"
using namespace std;
class lecturer{
public:
    string name;
    lecturer(string a="unknown"){
    name=a;
    }
    void get_name1(string b){
    name=b;
    }

};
class dept:public lecturer{
    public:
string d_name;
dept(string c="unknown"){
d_name=c;
}
void get_name2(string d){
d_name=d;
}

};
class marks{
public:
    int sub;
    marks(int e=0){
    sub=e;
    }
    void_getmarks(int f){
    sub=f;
    }


};
class student:public dept,public marks{

public:

    student(){
    cout<<"   constructor was called  "<<endl;
    }

    void display(){
    cout<<name<<endl<<d_name<<endl<<sub<<endl;
    }

};

int main(){

    student s;
    s.display();
    return 0;


}

