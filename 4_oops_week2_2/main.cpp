#include "iostream"
using namespace std;
class Weather{

public:
    string a;
    int b;
    Weather(string day,int temperature){
    a=day;
    b=temperature;
    }
    ~Weather(){
    cout<<"Destructor was called.";
    }
    void display(){
    cout<<"Weather condition on "<<a<< " is "<< b<<endl;

    }

};

int main(){
Weather w1("Tuesday",43);
w1.display();
return 0;

}
