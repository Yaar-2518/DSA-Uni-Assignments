# <center> **Number in Words: Solution** </center>  

### 📅 **Date:** 21-12-2024  
### ⏳ **Deadline:** 21-12-2024 23:55:00 PM  
---  

## 💡 **Solution**  

⚠️ **Before you look!** Try solving the problem yourself first. Converting numbers to words is a great way to practice string manipulation and conditionals in C++.  

Below is the solution code:  

```cpp
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    // Arrays storing words for numbers
    string numbers[10] = {"", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    string tens_excpn[] = {"TEN", "ELEVEN", "TWELVE", "THIRTEEN", "FOURTEEN", "FIFTEEN", "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINETEEN"};
    string tens_[] = {"TWENTY", "THIRTY", "FORTY", "FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINETY"};

    int th, hun, tens, ones;
    
    // Extract digits
    th = num / 1000; num %= 1000;
    hun = num / 100; num %= 100;
    tens = num / 10;
    ones = num % 10;

    // Edge case: If the number is zero
    if (num == 0) {
        cout << "ZERO";
    }

    // Convert and print the number in words
    if (th != 0) {
        cout << numbers[th] << " THOUSAND ";
    }

    if (hun != 0) {
        cout << numbers[hun] << " HUNDRED ";
    }

    if (tens == 1) { 
        // Handle numbers 10-19 separately
        cout << tens_excpn[ones];
    }  
    else {
        if (tens > 1) {
            cout << tens_[tens - 2] << " "; 
        }
        if (ones > 0) {
            cout << numbers[ones]; 
        }
    }
}
```  

---

## 🔍 **Explanation**  

1. **Breaking the Number into Digits:**  
   - `th` (Thousands place)  
   - `hun` (Hundreds place)  
   - `tens` (Tens place)  
   - `ones` (Ones place)  

2. **Processing and Printing the Words:**  
   - **Thousands & Hundreds:** Directly mapped using the `numbers` array.  
   - **Tens Place:**  
     - If the number is between **10-19**, it is handled separately using `tens_excpn`.  
     - If it’s **20 or more**, it maps to `tens_` with an additional lookup for the ones place.  

3. **Edge Case:**  
   - If `num == 0`, the program prints `"ZERO"`.  

---

## ✅ **Example Output**  

#### **Test Case 1**  
🔹 **Input:**  
```cpp
9472
```  
🔹 **Output:**  
```cpp
NINE THOUSAND FOUR HUNDRED SEVENTY TWO
```  

#### **Test Case 2**  
🔹 **Input:**  
```cpp
3006
```  
🔹 **Output:**  
```cpp
THREE THOUSAND SIX
```  
