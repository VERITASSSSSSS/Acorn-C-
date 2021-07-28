# References

<table>
<tr>

<td> Idea </td> <td> Description </td> <td> Code </td>

</tr>

<tr>
<td> Factorial c(n,m) </td>
<td>
  
```cpp
#include<iostream>
using namespace std;

//int fac(int n){
//    return(!n)?1:n*fac(n-1);}


int factorial(int n){
    int temp=1;
    for(int i=1;i<=n;i++)temp*=i; //why
    return temp;
}

int c(int n,int m)
{
    return factorial(n)/(factorial(m)*factorial(n-m));
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<c(n,k)<<endl;}
  ```

</td>
</tr>
  
<tr>
<td> Reversing integer </td>
<td>

```cpp
#include<iostream>
using namespace std;

int f(int n){
    int temp = 0;
    while(n){ //if n<=0 (false) break
        temp = temp*10+n%10; //take last digit x, appends it
        n/=10; //remove last digit
    }
    return temp;
}

int main(){
    int temp;
    cin>>temp;
    cout<<"Reversed: "<<f(temp)<<endl;
    }
```
  
<td>
  
```cpp
#include<iostream>
using namespace std;

int f(int n){
    int result = 0;
    while(n){ //if n<=0 (false) break
        int temp = result*10+n%10; //take last digit x, appends it
        if(temp/10!= result)return 0;

        result = temp;
        n/=10; //remove last digit
    }
    return result;
}

int main(){
    int result = 0;
    while(1){
    cin>>result;
    cout<<"Reversed: "<<f(result)<<endl;
    }
}
```
  
</td>
  
</tr>
  
 <tr>
<td> [Cmath]("https://www.cplusplus.com/reference/cmath/pow/") </td>
<td>

Call library 
  
</td>
  
<td>
  
```cpp

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b;
    cin>>a,b;
    cout<<pow(a,b)<<'\n';
}

  
  ```
  
</td>
  
</tr>
  
<tr>
<td> Address & Pointer </td>
<td>

(1) arr[] -> read memory and array
(2) &arr -> & only read one
(3) Function don't know the length
(4) Function will change the variable if changed

</td>  
  
<td>
  
```cpp
#include<iostream>
using namespace std;

void read_arr(int arr[],int n){ //arr[]/ *arr: em is memory
//    for(int i=0;i<n;i++)cout<<arr[i]<<' ';}
    for(int i=0;i<n;i++)cout<<arr[i]-1<<' ';} //6-> 0 1 2 3 4 5

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
read_arr(arr,n); //6-> 1,2,3,4,5,6
//read_arr(arr+3,n-3); //6-> 4,5,6
```

</td>
</tr>
  
<tr>
<td> Pointer Usage </td>
<td>

Multiple varaibles to talk about the same variable
Function mutable

</td>  
  
 <td>
  
```cpp
int x =5;
int *y = &x;
 
  ```
  
</td>
  
</tr>
</table>
  

