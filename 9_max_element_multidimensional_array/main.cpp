#include<iostream>
using namespace std;
int max_mul(int mul_arr[3][3]){
    int max_el=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max_el<mul_arr[i][j]){
                max_el=mul_arr[i][j];
            }
        }
    }
    return max_el;
}
int main(){
int mul_arr[3][3]={{1,2,3},{4,5,6},{7,8,1}};
cout<<mul_arr[1][1]<<endl;
int k=max_mul(mul_arr);
cout<<"Largest Element in Multidimensional Array is :"<<k;
return 0;
}
