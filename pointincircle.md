#point  in  circle 為止之程式碼

![image](https://user-images.githubusercontent.com/68550874/128482009-14dc5b77-8594-43eb-ac39-5738306d3caf.png)
![image](https://user-images.githubusercontent.com/68550874/128482040-b40e0876-970f-4e99-9e50-8ffa61a8a7e2.png)

```cpp
#include<iostream>
#include<cmath>
using namespace std;
struct point{
    double x=0,y=0;
    void set(double a,double b){
        x=a;
        y=b;
    }
    double distance(){
        return sqrt(x*x+y*y);
    }
    double distance(point pt2){
        return sqrt((x-pt2.x)*(x-pt2.x)+(y-pt2.y)*(y-pt2.y));
    }
    double distance_sq(point pt2){
        return (x-pt2.x)*(x-pt2.x)+(y-pt2.y)*(y-pt2.y);
    }
    void print(){
        cout<<'('<<x<<", "<<y<<')';
    }
    string str(){
        string s;
        s+='(';
        s+=to_string(x);
        while(s[s.length()-1]=='0')s.pop_back();
        if(s[s.length()-1]=='.')s.pop_back();
        s+=", ";
        s+=to_string(y);
        while(s[s.length()-1]=='0')s.pop_back();
        if(s[s.length()-1]=='.')s.pop_back();
        s+=')';
        return s;
    }
};
struct rectangle{
    point p1,p2;
};
struct circle{
    point center;
    double radius;
    bool point_in_circle(point p){
        return center.distance(p)<=radius;
    }
};
int main(){
    circle c;
    point p;
    cin>>c.center.x>> c.center.y>> c.radius;
    cin>>p.x>>p.y;
    if(c.point_in_circle(p))cout<<"point p is in circle c"<<endl;
    return 0;

}
```
