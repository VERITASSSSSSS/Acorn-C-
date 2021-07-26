# Function

<table>
<tr>
<div >
<td> Question </td> <td> Original Code </td> <td> Better </td>
</div>
</tr>

<tr>
<td> f(x)=(x-1)^2 </td>
<td>

```cpp
#include<iostream>
using namespace std;

float f(float x){
    float n=(x-1)*(x-1);
    return n;
}

int main(){
float a;
while(cin>>a)
{
    cout<<f(a)<<'\n'; //calling f() over here
}
}
  ```


</td>
  
<td>
  
```cpp

#include<iostream>
using namespace std;

float f(float x){
    return (x-1)*(x-1);}

int main(){
    float a;
    while(cin>>a){
    cout<<f(a)<<'\n';}

  
  ```
  
</td>
  
</tr>
<tr>
<td> g(x,y)=x^y </td>
<td>

```cpp
  
  #include<iostream>
  #include <math.h>
  using namespace std;

  float g(float x, float y){
      return pow(x,y);}

  int main(){
  int a,b;
  while(cin>>a>>b)
      {
      cout<<g(a,b)<<endl;
      }
}
}
```

</td>
  
<td>
  
```cpp
#include<iostream>
using namespace std;

float g(float b,int e){
    float base =1;
    for(int i=0;i=e;i++)b*b;}base*=b
        return base;

float b;
int e;
cin>>b>>e;
cout<<g(b,e)<<'\n'

  
```
  
</td>
  
</td>
</tr>
<tr>
<td> fac(x)=x! </td>
<td>

```cpp
  
  #include<iostream>
  using namespace std;

  int f(int x){

      if(x<=1)
          return 1;
      else
          return (x*f(x-1));
  }

  int main(){
      int x;
  while(cin>>x){
      cout<<f(x)<<endl;}
  }
  } 
  ```

</td>  
  
<td>
  
```cpp
 (1) int fact(int n){
    int tmp=1;
    for(int i=1;i<=n;i++)tmp*=i
    return tmp;}

int main(){
int n;
cin>>n;
cout<<fac(n)<<endl;}
  
   (2)
    int f(int x){
    if(!x)
      return 1;
    return x*f(x-1);} 
  
  (3)
    int fac(int n){
    return(!n)?1:n*fac(n-1);}
```
  **See below 遞迴 for more**
  
</td>
  
</td>
</tr>
<tr>
<td> Reverse String </td>
<td>

```cpp
string reverse (string s){
    string temp;
    for(int i=s.length()-1;i>=0;i--)
     // start from 0 so -1
    temp+=s[i];
    return temp;}

int main(){
    string k;
    getline(cin,k);
    cout<< reverse(k) <<endl;
    }
```

</td>  
  
 <td>
  
```cpp
SAME AS ORIGINAL
  ```
  
</td>
  
</tr>
</table>
  
 
# Concept
  
<table>
<tr>
<td> Concept </td> <td> Description </td>
</tr>
<tr>
<td> 遞迴 </td>
<td>

  Think it like a Russian Doll
  
```cpp
  (1)
    int f(int x){
    if(!x)
      return 1;
    return x*f(x-1);} 
  
  (2)
    int fac(int n){
    return(!n)?1:n*fac(n-1);}
```

</td>
</tr>
<tr>
<td> Void </td>
<td>

void 資料型態回傳
void+return ->void 遇到return 就結束
遞迴關系式
  
**參數:**使用外部資料，需要加上參數
  
  ```cpp  
  ```

</td>
 td> 排列 </td>
<td>

```cpp
n 個東西 不同顏色 排法
   ```
![equation](http://www.sciweavers.org/tex2img.php?eq=P_%7Bk%7D%5E%7Bn%7D%3D%7B%5Cfrac%20%7Bn%21%7D%7B%28n-k%29%21%7D%7D&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0)


</td>
</tr>
</table>
