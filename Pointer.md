# References

<table>
<tr>
<div >
<td> Idea </td> <td> Description </td> <td> Code </td>
</div>
</tr>

<tr>
<td> Reference </td>
<td>

Allows us to refer to memory <br>
Use it like a regular variable
  
</td>
  
<td>
  
```cpp

a =5; b =()
  
int a = 5; //variable,alias, memory data
int &b = a //create a reference //refer to a variable

(1) Refer by a
cout<< a+5 << endl;

  
  ```
  
</td>
  
</tr>
<tr>
<td> Passing data to function </td>
<td>

Invoke this function<br>
Saving memory for large data<br>
Change data within function mutable

</td>
  
<td>
  
```cpp
void work(int &x){}
  
  int a =5; //x=5
  work(a); //5
```
```cpp
void swap(int &x , int&y){}
  
int temp = x;
x =y;
y = temp;
```
  
</td>
  
</td>
</tr>
<tr>
  
  
<td> Address & </td>
<td>

&x -> address of operator <br>
get location of data

</td>  
  
<td>
  
```cpp
 int x =5;
 int *y = &x; //x == *y //dereferencing 
 //y -> int pointer // *y -> int
```

</td>
  
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
  

