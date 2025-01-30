# <center> **My Solution: Call by Value, Call by Reference, Call by Pointer** </center>

### 📅 **Date:** 21-12-2024  
### ⏳ **Deadline:** 21-12-2024 23:55:00 PM
---

## 💡 Solution

⚠️ **Before you peek!** Make sure you’ve given the problem an honest attempt.  
Understanding pointers, references, and values is crucial in C++ programming, and this solution will help you master these concepts.  


Here is the Solution Code

```cpp
#include <iostream>
using namespace std;

void S( int *x, int &y, int * &z , int w)
{ 
    int *t;

    t = &y ;        // Assign the address of y to t

    *x = y + *z ;   // Dereference x and assign (y + value pointed to by z)

    y =  *z + *t ;  // Modify y using dereferenced values of z and t

    *z =  *x + y ;  // Modify value pointed to by z

    w = *t + w;     // Modify w using dereferenced t

    cout << w << " " << *x << " " << y << " " << *z << endl;
}

main()
{  
    int a = 1 , b = 2 , *c = new int(3), *d = new int(4) ;
    S( &a , b , c , *d ) ;

    cout << a << " " << b << " " << *c << " " << *d << endl;
}
```

## Explanation
1. **What Each Variable Represents**:
   - `a` and `b`: Passed by value and reference respectively, affecting their behavior in the function.
   - `c` and `d`: Pointers, allowing direct manipulation of dynamically allocated memory.

2. **How the Function Works**:
   - **Line 1**: `t = &y;`  
     - `t` stores the address of `y`, enabling operations on `y` through the pointer.  
   - **Line 2**: `*x = y + *z;`  
     - Dereferences `x` to modify its value using `y` and the value pointed to by `z`.  
   - **Line 3**: `y = *z + *t;`  
     - Updates `y` by adding values pointed to by `z` and `t`.  
   - **Line 4**: `*z = *x + y;`  
     - Modifies the value pointed to by `z` using `*x` and `y`.




---


### 🔍 **Key Concepts**
In this solution, we demonstrate:  
1. **Call by Value**: Passing values directly (e.g., `int w`).  
2. **Call by Reference**: Passing variables by reference (e.g., `int &y`).  
3. **Call by Pointer**: Passing pointers to manipulate memory directly (e.g., `int *x`, `int *&z`).  

---

### ✅ **Output**

The program will produce the following output:  
```cpp
9 5 5 10
5 5 10 4
```

---
