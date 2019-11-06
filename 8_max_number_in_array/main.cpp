#include<iostream>
using namespace std;
int N;
int max_el(int arr[]);
void swap_el(int *,int *);
int main()
{   int arr[100];
    cout<<"Enter the number of element in array:"<<endl;
    cin>>N;
    for(int i=0;i<N;i++){
        cout<<"Enter the " <<i<<" element: ";
        cin>>arr[i];
    }
    int k=max_el(arr);
    cout<<"The Maximum element in array is :"<<k;
    return 0;
}
int max_el(int arr[])
{
    int max_val=arr[0];
    for(int i=1;i<N;i++){
        if(max_val<arr[i])
            swap_el(&max_val,&arr[i]);
    }
    return max_val;
}

void swap_el(int *a,int *b){
int c;
c=*a;
*a=*b;
*b=c;
}
