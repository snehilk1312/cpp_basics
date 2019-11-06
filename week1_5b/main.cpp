#include<iostream>
using namespace std;
int main(){
string str;
int counter=0,flag=0;
cout<<"Enter the string : ";
getline(cin,str);
cout<<"Entered string is : "<<str<<endl;
for(int i=0;str[i]!='\0';i++){
       cout<<i<<" character is: " <<str[i]<<endl;
       counter+=1;}
cout<<"letter count is:"<<counter<<endl;
for(int i=0;str[i]!='\0';i++){
        if(str[i]==str[counter-i-1])
            flag=1;
        else{
            flag=0;
            break;
        }
}
if(flag==1){
    cout<<"Yes ,It is Palindrome.";}
else{
    cout<<"No,it's not a Palindrome.";
}

return 0;
}
