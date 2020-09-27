<center>TIC1001—Introduction to Computing and Programming</center>
<center>National University of Singapore</center>

<center><h1>Midterm Test - AY18/19</h1></center>

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
int f(int x, int y) 
{ 
    x *= 10;
    y += x;
    return y; 
}

int main() 
{
    int x = 4, y = 7;
    cout << f(f(y, x), y);
}
```

Initialize x = 4, y = 7

0.
Call f(x,y) -> f(7,4)

x = 7 * 10 = 70

y = 4 + 70 = 74

return 74

1.
Call f(x,y) -> f(74,7)

x = 74 * 10 = 740

y = 7 + 740 = 747

return 747

Ans: 747

B.


```c++
int a = 10; 

if (a > 5)
    cout << "Here ";
if (a % 5)
    cout << "we ";
else if (a)
    cout << "go ";
else
    cout << "again";
```

Initialize a = 10

10 > 5, so will pass *if(a > 5)*

Print "Here"

10 % 5 = 0, so will not pass *if(a % 5)*

Proceed to *else if (a)*

Print "go"

Ans: Here go

C.


```c++
for(int i = 10;i > 0;i -= 2)
{ 
    cout << i << endl;
    if (i % 4 == 0)
        break;
    if (i % 3 == 0) 
    { 
        i -= 3;
        continue; 
    }
    i += 1; 
}
```

Initialize i = 10

When i = 10,<br>
<span style="color:green;">Print "10\n"</span><br>
10 % 4 != 0, will not pass <code>if(i % 4 == 0)</code><br>
10 % 3 != 0, will not pass <code>if(i % 3 == 0)</code><br>
Increment i + 1 = 11<br>
continue to loop, decrement i - 2, i = 9<br>

When i = 9,<br>
<span style="color:green;">Print "9\n"</span><br>
9 % 4 != 0, will not pass <code>if(i % 4 == 0)</code><br>
9 % 3 = 0, pass <code>if(i % 3 == 0)</code><br>
Decrement i - 3, i = 6, continue to loop
continue to loop, decrement i - 2, i = 4<br>

When i = 4,<br>
<span style="color:green;">Print "4\n"</span><br>
4 % 4 = 0, will pass <code>if(i % 4 == 0)</code><br>
Exit loop

Ans: 

10<br>
9<br>
4

# Question 3: Computing Topics 

### A. Computer Organisation

###### i. The major components of a computing device is connected by BUS.

True. 

Bus is the bridge between processor & memory. (Lecture03-pg44)

##### ii. In modern laptops, the SSD (solid state drive) plays the role of the MEM- ORY.

False. 

Memory refers to RAM


##### iii. The registers are storage inside the processor.

True

Programs will be compiled into assembly languages > translated into machine language.(Lecture03-pg39)

##### iv. The executable compiled by Visual Studio Code, e.g. "task1.exe" is stored in the HARDDISK.

True.

### B. If you have a quadcore processor (i.e. 4-core), which of the following is TRUE?

##### i. A program written for single-core processor can now run up to 4-time faster.

False.

The program has to be written for multi core processor to utilize the computing power.

##### ii. If each of the core runs at 1 GHz (1 gigahertz), then the quadcore is running at 4 GHz.

False.

##### iii. There can be up to four program running at the same time on this processor.

True.

##### iv. It is possible to get 4 times productivity (i.e. more work gets done) in the same amount of time on this processor.

True.

### C.Which of the following regarding instruction execution is TRUE?

##### i. Execution cycle of an instruction may take up to three memory accesses.


```c++

```

##### ii. Memory instruction refers only to instruction that moves a value from memory to register.


```c++

```

##### iii. Instruction and data are stored in the same region in memory.


```c++

```

##### iv. Store-memory concept refers to the idea of storing computation results in the memory.


```c++

```

# Question 4: Data Representation

##### i. On a 32-bit platform, each double variable in C/C++ needs 64 bit storage in memory.


```c++

```


```c++

```


```c++

```


```c++

```


```c++

```

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
