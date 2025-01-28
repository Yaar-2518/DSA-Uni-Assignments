# <center> Call by Value - Call by Reference - Call by Pointer </center>

### 📅 **Date:** 21-12-2024  
---

### **Problem Statement**  

Consider the following code:   
```cpp
Void S(int *x, int &y, int* &z, int w) // 🔒 This Line
{
    int* t; // 🔒 This Line

    t = y;
    
    x = y + z ;

    y =  z + t ;

    z =  x + y ;

    w = t + w;

    cout << w << x << y << z << endl;
}

main() // 🔒 This Line
{
    int a = 1 , b = 2 , *c = new int(3), *d = new int(4) ; // 🔒 This Line

    S( a , b , c , d ) ;

    cout << a << b << c << d;
}
```

### 📜 **Constraints**  
1. The **bold statements** in the code (marked with 🔒 comments) **must not be changed.**
2. You are only allowed to **add or adjust only symbols** like `*` or `&` to make the necessary changes.  
3. You **cannot add any new statements** or lines of code.

---
### 🔍 Expected Output
The program should produce the following output:
```
9 5 5 10
5 5 10 4
```

### 🌟 IYKYK
> *" Be Own <br> to be Won "*
