#include "iostream"
using namespace std;
class account{
public:
    float salary=60000;

};
class programmer:public account{
public:
    float bonus=5000;
    float total=bonus+salary;

};

int main(){
    programmer p1;
    cout<<p1.bonus<<endl<<p1.salary<<endl<<p1.total;
    return 0;

}
