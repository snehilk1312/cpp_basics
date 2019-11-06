#include<iostream>
using namespace std;
void swap_fun(int *,int *);
int main(){
int x,y;
cout<<"enter x :";
cin>>x;
cout<<"enter y:";
cin>>y;
cout<<"Value of x is:"<<x<<"\n"<<"Value of y is:"<<y<<endl;
swap_fun(&x,&y);
cout<<"Value of x is:"<<x<<"\n"<<"Value of y is:"<<y<<endl;
return 0;
}

void swap_fun(int *a,int *b)
{
    int swap_var;
    swap_var=*a;
    *a=*b;
    *b=swap_var;
}
