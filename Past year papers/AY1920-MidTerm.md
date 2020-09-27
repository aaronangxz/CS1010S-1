<center>TIC1001—Introduction to Computing and Programming</center>
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

0.
Call f(x,y) -> f(10,2.7)

x = (int)(10/2.7) = (int)3.7 = 3

return 3 * 2.7 = 8.1

1.
Call f(x,y) -> f(8.1,2.7)

x = (int)(8/2.7) = (int)2.96 = 2

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

42 % 7 = 0, so will not pass *if(a%7)*

Since there are no braces, a/=7 -> 42/7 = 6

6 < 7, so will pass *if(a<7)*

Print "of"

a = 6, so will pass *if(a)* ***Boolean true as long as != 0**

Print "both"

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

# Question 3: Computing Topics 

## A. Computer Organisation and Compilation

###### i. In a von Neumann architecture, program code must be moved from memory into the CPU using the BUS.

True. 

Bus is the bridge between processor & memory. (Lecture03-pg44)

##### ii. In a load-store architecture, operands are loaded directly from the memory into the ALU and the result is directly stored back into memory.

False. 

Operands are loaded from memory to registers, the results are stored back into the memory.(Lecture03-pg52)

##### iii. All high-level programming languages has to be compiled into the native ISA before it can be executed.

False. 

Programs will be compiled into assembly languages > translated into machine language.(Lecture03-pg39)

##### iv. The linking process allows code from other sources to be incorporated into a program.

True. (Lecture3-pg41)

## B. Data Representation

##### i. The word size of a computer refers to the size of its registers and pointers. What is the approximate maximum addressable memory size on a computer with 16-bit word size? Note: kilo = 1,000; mega = 1,000 kilo; giga = 1,000 mega

16 bit word size, $2^{16}$ = 65536 bytes = approx.65KB

##### ii. A microcontroller uses 12-bits to store its integer type using 2’s complement. What is the range that the integer can represent?

12 bits, $2^{12}$ = 4096. Half of it to represent negative, another half for positive.


-2048 ~ -1 & 0 ~ 2047

## C. Number Bases

##### i. Express the decimal number $47_{0}$ in base-3 (ternary).

47/3 = 15 R 2

15/3 = 5 R 0

5/3 = 1 R 2

1/3 = 0 R 1


$1202_{3}$

##### ii.Express the base-5 number $1010_{5}$ in decimal (base-10)

$0 * 5^{0} + 1 * 5^{1} + 0 * 5^{2} + 1 * 5^{3}$

= 5 + 125 = $130_{10}$

##### iii. Express the base-3 number $2112010_{3}$ in base-9

$2112010_{3}$ 

$10_{3} = 0 * 3^{0} + 1 * 3^{1} = 3_{9}$

$20_{3} = 0 * 3^{0} + 2 * 3^{1} = 6_{9}$

$11_{3} = 1 * 3^{0} + 1 * 3^{1} = 4_{9}$

$2_{3} = 2 * 3^{0} = 2_{9}$

So, $2112010_{3} = 2463_{9}$ 

##### iv. Express the hexadecimal (base-16) number $DAD_{16}$ in base-4.

$DAD_{16}$

$D_{16} = 31_{4}$

$A_{16} = 22_{4}$

$D_{16} = 31_{4}$

So, $DAD_{16} = 312231_{4}$ 

— END OF PAPER —
