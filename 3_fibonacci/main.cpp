#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0)
            arr[i]=0;
        else if(i==1)
           arr[i]=1;
        else{
            arr[i]=arr[i-1]+arr[i-2];
        }
    }
for (int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}
return 0;
}
