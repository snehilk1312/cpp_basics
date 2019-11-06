#include<iostream>
using namespace std;
class book{
public:
    string title;
    book(string a="unknown"){
    title = a;
    }
    void display(){

    cout<<"Title of book is:"<<title;
    }

};

class ebook:public book{
public:
    float size_mb;
    ebook(int s=0){

    size_mb=s;
    }

    void print(){
    cout<<"size of book is"<< size_mb;
    }

};

int main(){

book b;
b.display();
ebook e;
e.print();


}
