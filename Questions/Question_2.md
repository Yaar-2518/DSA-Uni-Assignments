
# <center> Value - Pointer - Reference </center>

### 📅 **Date:** 21-12-2024  
---

### **Problem Statement**  

Consider the following code:   
```cpp
void S( int x, int &y, int *z )     // 🔒 This Line
{ 
    int t;      // 🔒 This Line

    t = x + y ;

    x = y + z ;

    y =  x + t ;

    z = y + z;

    cout << x << y << z << endl;
}

main()      // 🔒 This Line
{  
    int a = 3 , b = 5 , c = 7 ;     // 🔒 This Line

    S( a , b , c ) ;

    cout << a << b << c ;

    return 0;

}
```

### 📜 **Constraints**  
1. The **bold statements** in the code (marked with 🔒 comments) **must not be changed.**
2. You are only allowed to **add or adjust only symbols** like `*` or `&` to make the necessary changes.  
3. You **cannot add any new statements** or lines of code.

---
### 🔍 Expected Output
The program should produce the following output:
```cpp
12 20 27
3 20 27
```

### 🌟 IYKYK
> *" Let your codes have much **'Value'** <br> by including **'Pointers'** of **'Reference'**  <br> Let you be the **'Address'** of an **'Alias'** of **'Value'** "*
