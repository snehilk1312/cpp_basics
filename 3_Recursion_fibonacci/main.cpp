#include "iostream"
using namespace std;
int fibonacci(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);}
int main()
{
    int N;
    cout<<"enter the number of terms in series: "<<endl;
    cin>>N;
    for(int k=0;k<N;k++){
        cout<<fibonacci(k+1)<<" ";
    }
    return 0;
}
