//struct- hw 1

#include <iostream>
#include <cmath>

using namespace std;

struct point{
    double x=0;
    double y=0;
    void set(double a,double b){
    x=a;
    y=b;} //why?

    double distance(point p2){
    point p1;
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    };
    };

int main(){
    point p1;
    point p2;
    double a,b;
    cout<<" P1 is set as(0,0). \n\n ";
    cout<<"Enter x and y for p2: ";cin>>a>>b;
    p2.set(a,b);
    cout<<"\n"<<"P2 is on ("<<a<<", "<<b<<")\n\n"<<"You are "<<p1.distance(p2)<<" blocks away from the origin. \n"; //point ¨ì0,0ªº¶ZÂ÷
    void print();
    }
