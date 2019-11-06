#include<iostream>
using namespace std;
class item{
public:
    string a;
    int b;
    item(string name,int price){
    a=name;
    b=price;
    }
    void display(){
    cout<<"Item is:"<<a<<endl<<"price is:"<<b;
    //cout<<"Item is:"<<name<<endl<<"price is:"<<price;
    }

};

int main(){
item i1("lola",10000);
i1.display();
return 0;

}
