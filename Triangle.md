![image](https://user-images.githubusercontent.com/68550874/128489497-dc03a3c9-9b11-4f3e-827c-dc5375dcb952.png)

```cpp
#include<iostream>
#include<cmath>
using namespace std;

struct point{
    double x;
    double y;
    void set(double a, double b)
    {a=x;b=y;}
};

double cac(){
    double x,y,r;
    if (x*x)+(y*y)<(r*r){
        return 1;}
    else if(x*x)+(y*y)>=(r*r){
            return 0;}
};

struct circle{
    point center;
    double radius;
    bool point_in_circle(point p){
        return center.distance(p)<=radius;
}
};
int main() {
    point p[3]; //the third one
    double a,b,d[3];
    for(int i=0;i<3;i++){
        cin>>a>>b;
        p[i].set(a,b);
        }
    //distance btwn two points
    //three sides
    d[0]=p[0].distance_sq(p[2]);
    d[1]=p[1].distance_sq(p[0]);
    d[2]=p[2].distance_sq(p[1]);
    for(int i=0;i<3;i++){
        if(d[i]>d[0])swap(d[i],d[0]);
    }
//    for(int i=0;i<3;i++)cout<<d[i];
    if(d[0]==d[1]+d[2])cout<<"Right Angle\n"
    if(d[0]>d[1]+d[2])cout<<"Obtuse Angle\n"
    if(d[0]<d[1]+d[2])cout<<"Acute Angle\n"
}
```
