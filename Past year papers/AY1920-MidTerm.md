<center>TIC1001—Introduction to Computing and Programming</center><br>
<center>National University of Singapore</center>

<center><h1>Midterm Test - AY19/20</h1></center>

 ### Question 1: C/C++ Expressions

There are several parts to this question which are to be answered independently and separately. Each part consists of a fragment of C/C++ code. Write the exact output produced by the code in the answer box. If an error occurs, or it enters an infinite loop, state and explain why.
You may show workings outside the answer box in the space beside the code. Partial marks may be awarded for workings if the final answer is wrong.
Assume that all appropriate preprocessor directives e.g., #include < iostream > , etc. have already been defined.


```c++
#include <iostream>
using namespace std;
```

A.


```c++
double f(int x, double y) 
{ 
    x = (int)(x / y);
    return x * y; 
}

    int x = 10;
    double y = 2.7;
    cout << f(f(x, y), y) << endl;
```

    5.4


Initialize x = 10, y = 2.7

Call <code>f(x,y)</code> -> f(10,2.7)<br>
x = (int)(10/2.7) = (int)3.7 = 3<br>
return 3 * 2.7 = 8.1

Call <code>f(x,y)</code> -> f(8.1,2.7)<br>
x = (int)(8/2.7) = (int)2.96 = 2<br>
return 2 * 2.7 = 5.4

Ans: 5.4

B.


```c++
int a = 42;

if (a % 7) // Note the lack of braces
    cout << "Best ";
    a /= 7; 
if (a < 7)
    cout << "of "; 
if (a)
    cout << "both ";
else
    cout << "worlds";
```

    of both 

Initialize a = 42

42 % 7 = 0, so will not pass <code>if(a % 7)</code><br>

Since there are no braces, a/=7 -> 42/7 = 6<br>

6 < 7, so will pass <code>if(a7 < 7)</code><br>

Print "of"<br>

a = 6, so will pass <code>if(a)</code> ***Boolean true as long as != 0**<br>

Print "both"<br>

Ans: of both

C.


```c++
int i = 0,j = 0;

for (int i = 0; i < 10; i += 2) 
{
    printf("%d,", i); 
    if (i % 3) 
    {
        continue;
    } 
    else if (i < j) 
    {
        break; 
    } 
    else 
    {
        j += 1; 
    }
}
    printf("%d,%d\n", i, j);
```

    0,2,4,6,8,0,2


Initialize i = 0, j = 0

When i = 0,<br>
<span style="color:green;">Print "0,"</span><br>
0 % 3 = 0, will not pass <code>if(i % 3)</code><br>
0 is not < j = 0, will not pass <code>else if(i < j)</code><br>
increment j + 1, j = 1<br>
continue to loop, increment i + 2, i = 2<br>

When i = 2,<br>
<span style="color:green;">Print "2,"</span><br>
2 % 3 != 0, will pass <code>if(i % 3)</code><br>
continue to loop, increment i + 2, i = 4<br>

When i = 4,<br>
<span style="color:green;">Print "4,"</span><br>
4 % 3 != 0,will pass <code>if(i % 3)</code><br>
continue to loop, increment i+2, i = 6<br>

When i = 6,<br>
<span style="color:green;">Print "6,"</span><br>
6 % 3 = 0, will not pass <code>if(i % 3)</code><br>
6 is not < j = 1, will not pass <code>else if(i < j)</code><br>
increment j + 1,j = <span style="color:red;">2</span><br>
continue to loop, increment i + 2, i = 8<br>

When i = 8,<br>
<span style="color:green;">Print "8,"</span><br>
8 % 3 != 0, will pass <code>if(i % 3)</code><br>
continue to loop, increment i + 2, i =10<br>

When i = 10, exit loop.<br>

As i is still 0 in <code>main</code>, and j is 2<br>
<span style="color:green;">Print "0,2"</span><br>

Ans: 0,2,4,6,8,0,2


```c++

```
