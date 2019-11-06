#include<iostream>
using namespace std;
class Distance{
public:
    int feet,inches;
    //public:
    Distance(int e,int f){
    feet=e;
    inches=f;
    }
    void addDist(int i){
    inches+=i;
    }
    void addDist(int f,int i){
    feet+=f;
    inches+=i;
    }
    Distance addDist(Distance a, Distance b){
    Distance d(0,0);
    d.feet=a.feet+b.feet;
    d.inches=a.inches+b.inches;
    return d;

    }
};

int main(){
    Distance y(0,0);
Distance v(2,3);
Distance u(4,6);
y=y.addDist(u,v);
cout<<y.feet<<endl<<y.inches;
return 0;

}
