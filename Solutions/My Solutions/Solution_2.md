# <center> **My Solution: - Value - Reference - Pointer** </center>

### 📅 **Date:** 21-12-2024  
### ⏳ **Deadline:** 21-12-2024 23:55:00 PM
---

## 💡 Solution

⚠️ **Before you peek!** Make sure you’ve given the problem an honest attempt.  <br> <br>
Understanding pointers references, and values is crucial in C++ programming, and this solution will help you master these concepts.  


Here is the Solution Code

```cpp
#include <iostream>
using namespace std;

void S( int x, int &y, int *z )  // 🔒 Cannot modify this line
{ 
    int t;     // 🔒 Cannot modify this line

    t = x + y ;      // Add x and y, store in t

    x = y + *z ;     // Dereference z and add to y, assign to x

    y =  x + t ;     // Update y to (x + t)

    *z = y + *z;     // Update value pointed by z to (y + *z)

    cout << x << " " << y << " " << *z << endl;  
}

main()  // 🔒 Cannot modify this line
{  
    int a = 3 , b = 5 , c = 7 ;  // 🔒 Cannot modify this line

    S( a , b , &c ) ;  // Pass a by value, b by reference, and c by pointer

    cout << a << " " << b << " " << c ;

    return 0; 
}
```

## Explaination
Here’s a breakdown of the adjustments made and their effects:

1. **Added `*` to Dereference `z`:**  
   - **Line:** `x = y + *z;`  
   - **Reason:** To access the value stored at the address pointed to by `z`.  

2. **Added `*` to Update the Value at `z`:**  
   - **Line:** `*z = y + *z;`  
   - **Reason:** To modify the value at the address pointed to by `z`, as required by the output.

3. **Passed `c` by Pointer in `main()`:**  
   - **Line:** `S(a, b, &c);`  
   - **Reason:** To pass the address of `c` so the function can manipulate its value directly.

---


### 🔍 **Key Concepts**

1. **Call by Value (`int x`):**  
   - Changes to `x` inside the function do not affect the original variable `a` in `main()`.  

2. **Call by Reference (`int &y`):**  
   - Changes to `y` inside the function directly modify the variable `b` in `main()`.  

3. **Call by Pointer (`int *z`):**  
   - The function manipulates the value at the address passed (via `&c`), directly modifying the variable `c` in `main()`.

---

### ✅ **Output**

The program will produce the following output:  
```cpp
12 20 27
3 20 27
```
