#include "iostream"
using namespace std;
class Animal{
public:
    void eat(){
    cout<<"Eating...";}

};

class Dog :public Animal{
public:
    void bark(){
    cout<<"Woof...Woof...";
    }
};

class BabyDog:public Dog{
public:
    void cry(){

    cout<<"weeping...";
    }

};

int main(){
BabyDog bd1;
bd1.cry();
bd1.bark();
bd1.eat();
return 0;
}
