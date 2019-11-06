#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n==0||n==1)
        return 1;
    else if(n>1){
        return n*factorial(n-1);
    }
  return 0;
}
int main()
{
    int n,fac_n;
    cout<<"enter number n:"<<endl;
    cin>>n;
    fac_n=factorial(n);
    cout<<fac_n;
    return 0;
}
