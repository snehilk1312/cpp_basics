#include<iostream>
using namespace std;
void display(string,int,int);
int main(){
    string name;
    int price,quantity;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Enter quantity: ";
    cin>>quantity;
    display(name,price,quantity);
    return 0;
}

void display(string name,int price,int quantity){
cout<<"Item Name: "<<name<<"\n"<<"Price: "<<price<<"\n"<<"Total Quantity: "<<quantity;
}
