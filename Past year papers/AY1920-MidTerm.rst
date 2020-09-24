.. raw:: html

   <center>

TIC1001—Introduction to Computing and Programming

.. raw:: html

   </center>

.. raw:: html

   <center>

National University of Singapore

.. raw:: html

   </center>

.. raw:: html

   <center>

.. raw:: html

   <h1>

Midterm Test - AY19/20

.. raw:: html

   </h1>

.. raw:: html

   </center>

### Question 1: C/C++ Expressions

There are several parts to this question which are to be answered
independently and separately. Each part consists of a fragment of C/C++
code. Write the exact output produced by the code in the answer box. If
an error occurs, or it enters an infinite loop, state and explain why.
You may show workings outside the answer box in the space beside the
code. Partial marks may be awarded for workings if the final answer is
wrong. Assume that all appropriate preprocessor directives e.g.,
#include < iostream > , etc. have already been defined.

.. code:: c++

    #include <iostream>
    using namespace std;

A. 

.. code:: c++

    double f(int x, double y) 
    { 
        x = (int)(x / y);
        return x * y; 
    }
    
        int x = 10;
        double y = 2.7;
        cout << f(f(x, y), y) << endl;


.. parsed-literal::

    5.4


Initialize x = 10, y = 2.7

Call f(x,y) -> f(10,2.7) x = (int)(10/2.7) = (int)3.7 = 3 return 3 \*
2.7 = 8.1

Call f(x,y) -> f(8.1,2.7) x = (int)(8/2.7) = (int)2.96 = 2 return 2 \*
2.7 = 5.4

Ans: 5.4

B. 

.. code:: c++

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


.. parsed-literal::

    of both 

Initialize a = 42

42 % 7 = 0, so will not pass *if(a%7)*

Since there are no braces, a/=7 -> 42/7 = 6

6 < 7, so will pass *if(a<7)*

Print “of”

a = 6, so will pass *if(a)* \*\ **Boolean true as long as != 0**

Print “both”

Ans: of both

C. 

.. code:: c++

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


.. parsed-literal::

    0,2,4,6,8,0,2


Initialize i = 0, j = 0

When i = 0, Print “0,” 0 % 3 = 0, will not pass if(i % 3) 0 is not < j =
0, will not pass else if(i < j) increment j + 1, j = 1 continue to loop,
increment i + 2, i = 2

When i = 2, Print “2,” 2 % 3 != 0, will pass if(i % 3) continue to loop,
increment i + 2, i = 4

When i = 4, Print “4,” 4 % 3 != 0,will pass if(i % 3) continue to loop,
increment i+2, i = 6

When i = 6, Print “6,” 6 % 3 = 0, will not pass if(i % 3) 6 is not < j =
1, will not pass else if(i < j) increment j + 1,j = 2 continue to loop,
increment i + 2, i = 8

When i = 8, Print “8,” 8 % 3 != 0, will pass if(i % 3) continue to loop,
increment i + 2, i =10

When i = 10, exit loop.

As i is still 0 in main, and j is 2 Print “0,2”

Ans: 0,2,4,6,8,0,2

