#include<iostream>
using namespace std;
int area(int b,int h){
return 0.5*b*h;
}
void display(float a){
cout<<"Area is : "<<a<<" sq.units";
}
int main(){
int base,height;
cout<<"Enter base: ";
cin>>base;
cout<<"Enter height: ";
cin>>height;
float k=area(base,height);
display(k);
return 0;
}
