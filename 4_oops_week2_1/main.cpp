#include "iostream"
using namespace std;
class Date{
public:
    string month,day;
    int date,year;
    Date(int a,string b,int c,string d){
        date=a;
        month=b;
        year=c;
        day=d;
    }
    void display(){
    cout<<"The standard time is:"<<endl<<date<<"-"<<month<<"-"<<year<<","<<day;
    }

};

int main(){
Date d1(6,"november",2019,"tuesday");
d1.display();
return 0;

}
