#include<iostream>
using namespace std;
int main(){
int arr[10];
for(int i=0;i<10;i++){
    cout<<"Enter "<<i+1<<" element : ";
    cin>>arr[i];
}
int x=0;
for(x:arr)
    cout<<x<<" ";
int N,counter=0,j;
cout<<"Enter the number to be Searched :"<<endl;
cin>>N;
for(j:arr){
    if(j==N)
        counter+=1;
}
cout<<counter;
return 0;
}
