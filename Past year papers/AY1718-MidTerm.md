<center>TIC1001—Introduction to Computing and Programming</center>
<center>National University of Singapore</center>

<center><h1>Midterm Test - AY17/18</h1></center>

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
int square(double x) 
{ 
    return x * x;
}
printf("%d", square(1.5));
```

0.
Call <code>square(x)</code> -> <code>square(1.5)</code>

return 1.5 * 1.5 = 2.25

However return data type is int, return 2.

Print"2"

Ans: 2

B.


```c++
int x = 2;
int square(int x) 
{
    return x * x; 
}
printf("%d", square(square(3)));
```

Initialize x = 2

0.Call <code>square(x)</code> -> <code>square(3)</code>

return 3 * 3 = 9, return 9

1.Call <code>square(x)</code> -> <code>square(9)</code>

return 9 * 9 = 81, return 81

Ans: 81

C.


```c++
int x = 5; 
int y = 3;
double foo(int x, int y) 
{ 
    return x/y;
}
printf("%f", foo(y, x));
```

Initialize x = 5, y = 3

Call <code>foo(y,x)</code> -> <code>foo(3,5)</code>
return 3 / 5 = 0

Print"0.000000"

D.


```c++
int foo(int x, double y) 
{ 
    printf("%.2f ", y/x);
    return y/x; 
}
foo(foo(4, 10), 15);
```

0.Call <code>foo(4,10)</code>

10 / 4 = 2.50

Print"2.50", return 2

1.Call <code>foo(2,15)</code>

15 / 2 = 7.50

Print"7.50", return 7

Ans: 2.50 7.50

E.


```c++
int i;
for (i = 0; i < 10; ++i) 
{
    if (i % 2 == 0) 
    {
        ++i; 
    } 
    if (i % 3 == 0) 
    { 
        --i; 
    } 
    if (i % 5 == 0) 
    { 
        break; 
    }
}
printf("%d", i);
```

When i = 0,<br>
0 % 2 = 0, will pass <code>if (i % 2 == 0)</code><br>
Increment i + 1 = 1<br>
Continue to next If Statement<br>
1 % 3 = 1, will not pass <code>if (i % 3 == 0)</code><br>
Continue to next If Statement<br>
1 % 5 = 1, will not pass <code>if (i % 5 == 0)</code><br>
Continue to loop, increment i + 1, i = 2<br>

When i = 2,<br>
2 % 2 = 0, will pass <code>if (i % 2 == 0)</code><br>
Increment i + 1 = 3<br>
Continue to next If Statement<br>
3 % 3 = 0, will pass <code>if (i % 3 == 0)</code><br>
Decrement i - 1 = 2<br>
Continue to next If Statement<br>
2 % 5 = 2, will not pass <code>if (i % 5 == 0)</code><br>
Continue to loop, increment i + 1, i = 3<br>

When i = 3,<br>
3 % 2 = 1, will not pass <code>if (i % 2 == 0)</code><br>
Continue to next If Statement<br>
3 % 3 = 0, will pass <code>if (i % 3 == 0)</code><br>
Decrement i - 1 = 2<br>
Continue to next If Statement<br>
2 % 5 = 2, will not pass <code>if (i % 5 == 0)</code><br>
Continue to loop, increment i + 1, i = 3<br>

When i = 3,<br>
3 % 2 = 1, will not pass <code>if (i % 2 == 0)</code><br>
Continue to next If Statement<br>
3 % 3 = 0, will pass if (i % 3 == 0)<br>
Decrement i - 1 = 2<br>
Continue to next If Statement<br>
2 % 5 = 2, will not pass <code>if (i % 5 == 0)</code><br>
Continue to loop, increment i + 1, i = 3<br>

Ans: i will stuck at 3, infinite loop

F.


```c++
int a = 3;
int f(int a) 
{
    a = 7;
    return a; 
}
int g(int a) 
{ 
    return f(a) + a;
}
printf("%d", g(a+2) + f(a-1));
```

Initialize a = 3

Call <code>g(3+2)</code> -> <code>g(5)</code><br>
Call <code>f(a)</code> -> 7<br>
Return 7 + 5 = 12

Call <code>f(a-1)</code> -> <code>f(2)</code><br>
Return 7

12 + 7 = 19,print"19"

G.


```c++
inti=20,j=0; 
while (i >= j) 
{
    --i;
    if (i < 3*j) 
    { 
        continue; 
    } 
    j += 2;
    printf("%d ", j); 
}   
printf("%d", i);
```

Initialize i = 20, j = 0

20 >= 0, enter while loop.<br>
Decrement i - 1, i = 19<br>
19 > 3 * 0, will not pass <code>if (i < 3 * j)</code> <br>
Increment j + 2, j = 2<br>
Print"2 "

19 >= 2, enter while loop.<br>
Decrement i - 1, i = 18<br>
18 > 3 * 2, will not pass <code>if (i < 3 * j)</code> <br>
Increment j + 2, j = 4<br>
Print"4 "

18 >= 4, enter while loop.<br>
Decrement i - 1, i = 17<br>
17 > 3 * 4, will not pass <code>if (i < 3 * j)</code> <br>
Increment j + 2, j = 6<br>
Print"6"

17 >= 6, enter while loop.<br>
Decrement i - 1, i = 16<br>
16 < 3 * 6, will pass <code>if (i < 3 * j)</code> <br>
Continue to loop

16 >= 6, enter while loop.<br>
Decrement i - 1, i = 15<br>
15 < 3 * 6, will pass <code>if (i < 3 * j)</code> <br>
Continue to loop

15 >= 6, enter while loop.<br>
Decrement i - 1, i = 14<br>
14 < 3 * 6, will pass <code>if (i < 3 * j)</code> <br>
Continue to loop

.....i will continue to decrement by 1 in every loop.

5 >= 6, will not enter while loop.<br>
Print "5"

Ans: 2 4 6 5


```c++
int x = 0;
int f(int *x) 
{
    if (*x > 0) 
    { 
        *x = -*x;
    } 
    else 
    {
        *x += 2;
    }
    return *x; 
}
     
x = f(&x) + f(&x);
printf("%d", x);
```

Initialize x = 0

0.Call <code>f(&x)</code><br>
    * x = 0, will not pass <code>If (* x > 0)</code>. Enter Else statement<br>
    * x + 2 = 0 + 2 = 2, return 2
    
1.Call <code>f(&x)</code><br>
    * x = 2, will pass <code>If (* x > 0)</code>.<br>
    * x = - 2, return -2
    
x = 2 + (-2) = 0<br>
Print"0"

Ans: 0

— END OF PAPER —
