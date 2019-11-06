#include<iostream>
using namespace std;
class item{
    public:

item(){

cout<<"constructor was called.";
}
~item(){

cout<<"Destructor was called.";
}
};

int main(){
item i1;
item i2;
return 0;


}
