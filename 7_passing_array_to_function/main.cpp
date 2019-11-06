#include "iostream"
using namespace std;
int N;
void printArray(int arr[]);
int main(){
int arr[100];
std::cout<<"Enter length of array : ";
std::cin>>N;
for(int i=0;i<N;i++){
    cin>>arr[i];
}
printArray(arr);
return 0;
}
void printArray(int arr[]){
for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
}
