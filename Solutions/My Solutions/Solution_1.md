# **My Solution: Call by Value, Call by Reference, Call by Pointer**

### 📅 **Date:** 21-12-2024  
### ⏳ **Deadline:** 21-12-2024 23:55:00 PM
---

## Solution

⚠️ Make sure you have given it a try before viewing the solution.


Here is the Solution Code

```cpp
#include <iostream>
using namespace std;

void S( int *x, int &y, int * &z , int w)
{ 
    int *t;

    t = &y ;

    *x = y + *z ;

    y =  *z + *t ;

    *z =  *x + y ;

    w = *t + w;

    cout << w << " " << *x << " " << y << " " << *z << endl;
}

main()
{  
    int a = 1 , b = 2 , *c = new int(3), *d = new int(4) ;
    S( &a , b , c , *d ) ;

    cout << a << " " << b << " " << *c << " " << *d << endl;
}
```
---

## Explaination
This problem tests the knowledge on pointers, reference variables, escpecially use of the `*` and `&` symbols.  
I will provide a Line - by - Line explaination to understand the solution better.
- In the main function, the variables initialised are:
  - `int a = 1` , in which the integer value 1 is assigned to the variable `a`. This is similar to the initialization of variable `b` having the value 2.
  - `int c = new int(3)` , the variable `c` stores a memory address which contains the integer value 3 in it. This is a fairly new concept and a new keyword as well *(no pun intended smiley)* . The `new` keyword is used in the concept of dynamic programming. In simpler terms, it allocates temporary space of a given datatype to a variable to be used during the runtime. When used, it returns an address.
