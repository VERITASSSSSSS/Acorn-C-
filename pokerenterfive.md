![image](https://user-images.githubusercontent.com/68550874/128489016-6712540f-131a-487d-96da-f9428d3f13f9.png)

```cpp
整合實作-示範作法
#include<iostream>
using namespace std;
struct poker{
    char suit;
    int rank;
    void set(){
        char r_t;
        cin>>suit>>r_t;
        if(r_t=='A')rank=1;
        else if(r_t=='J')rank=11;
        else if(r_t=='Q')rank=12;
        else if(r_t=='K')rank=13;
        else if(r_t=='T')rank=10;
        else rank=r_t-48;
    }
};
struct deck{
    poker p[5];
    int smallest,straight=0,flush=0,t=0,s1=0,s2=0;
    void set(){
        straight=0;
        flush=0;
        t=0;
        s1=0;
        s2=0;
        for(int i=0;i<5;i++){
            p[i].set();
            if(p[i].rank<p[0].rank)smallest=p[i].rank;
            else smallest=p[0].rank;
            if(p[i].suit==p[0].suit)flush++;
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(p[j].rank==smallest+1){
                    smallest++;
                    straight++;
                }
                if(p[i].rank==p[j].rank){
                    t++;
                }
            }
            if(t>s1){
                if(s1>s2){
                    s2=s1;
                    s1=t;
                }
                else s1=t;
            }
            else if(t<s1) s2=t;
            t=0;
        }
        //cout<<s1<<' '<<s2<<'\n';
    }
    void Four_of_a_kind(){
        if(s1==4)cout<<"Four of a kind\n";
    }
    void Full_house(){
        if(s1==3&&s2==2)cout<<"Full house\n";
    }
    void Straight(){
        if(straight==4)cout<<"Straight\n";
    }
    void Straight_flush(){
        if(straight==4&&flush==5)cout<<"Straight flush\n";
    }
};
int main(){
    deck d;
    while(1){
        d.set();
        d.Four_of_a_kind();
        d.Full_house();
        d.Straight();
        d.Straight_flush();
    }
}
```
