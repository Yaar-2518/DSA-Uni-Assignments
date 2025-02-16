# <center> **Two Loops Logic: Solution** </center>  

### 📅 **Date:** 21-12-2024  
### ⏳ **Deadline:** 22-12-2024 11:55:00 AM  
---  

## 💡 **Solution**  

⚠️ **Before you look!** Try solving the problem yourself first. This challenge is a great exercise for practicing loops and pattern printing in C++.  

Below is the solution code:  

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n = 6; // Given value of n
    int temp = n;
    
    // Outer loop: Controls the number of rows
    for (int j = 0; j < n; j++)
    {    
        // Inner loop: Prints the pattern for each row
        for (int i = 1; i < (2 * temp); i++)
        {
            if (i <= temp)
            {
                cout << i << " "; // Ascending part
            }
            else
            {
                cout << i - (2 * (i - temp)) << " "; // Descending part
            }
        }
        
        temp--; // Reduce the range for the next row
        cout << endl;
    }
    
    return 0;
}
```  

---

## 🔍 **Explanation**  

1. **Setting Up Variables**  
   - `n = 6` (given in the problem).  
   - `temp = n` (used to control the range for each row).  

2. **Outer Loop (`for j`)**  
   - Runs `n` times to generate the required number of rows.  

3. **Inner Loop (`for i`)**  
   - Prints numbers in an **ascending order** until `temp`.  
   - Then prints numbers in a **descending order** using a mathematical adjustment.  

4. **Pattern Breakdown for `n = 6`**  
   - First row: `1 2 3 4 5 6 5 4 3 2 1`  
   - Second row: `1 2 3 4 5 4 3 2 1`  
   - Third row: `1 2 3 4 3 2 1`  
   - And so on…  

---

## ✅ **Test Cases**  

#### **Test Case 1**  
🔹 **Input:**  
```cpp
No input (assume n = 6)
```  
🔹 **Output:**  
```cpp
1 2 3 4 5 6 5 4 3 2 1
1 2 3 4 5 4 3 2 1
1 2 3 4 3 2 1
1 2 3 2 1
1 2 1
1
```  
