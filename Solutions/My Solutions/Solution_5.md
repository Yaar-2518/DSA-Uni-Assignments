# <center> **Rotated Palindrome: Solution** </center>  

### 📅 **Date:** 21-12-2024  
### ⏳ **Deadline:** 22-12-2024 11:55:00 AM  
---  

## 💡 **Solution**  

⚠️ **Before you look!** Try solving the problem yourself first. Checking if a string is a rotated palindrome is a great way to practice **string manipulation** and **loops** in C++.  

Below is the solution code:  

```cpp
#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = 0;
    int count = 0;

    // Determine the length of the string manually
    while (true)
    {
        if (s[len] == '\0') break;
        else {
            len++;
        }
    }

    char t;
    bool palindrome = false;

    while ((count <= len) && (!palindrome)) 
    {
        // Check if the current string is a palindrome
        for (int i = 0; i < len / 2; i++)
        {
            if (s[i] == s[len - i - 1]) {
                palindrome = true;
            }
            else {
                palindrome = false; 
                break;
            }
        }

        // If it's not a palindrome, rotate the string by 1 position
        if (!palindrome)
        {    
            for (int j = 1; j < len; j++)
            {
                t = s[j - 1];
                s[j - 1] = s[j];
                s[j] = t;
            }
            count++;
        }
    }

    // Output the result (1 if palindrome is found, otherwise 0) using Ternary Opertaor (? : ;)
    palindrome ? cout << 1 : cout << 0;

    return 0;
}
```  

---  

## 🔍 **Explanation**  

1. **Finding String Length Manually:**  
   - Instead of using `s.length()`, the length is determined manually by iterating through the string until `'\0'` is encountered.  

2. **Checking for Palindrome:**  
   - The string is compared from both ends. If all corresponding characters match, the string is a palindrome.  

3. **Rotating the String:**  
   - If the string is not a palindrome, it is **rotated left by one position**, and the check is performed again.  
   - This continues until either the string forms a palindrome or all possible rotations are exhausted.  

4. **Output:**  
   - If a palindrome is found, print `1`. Otherwise, print `0`.  

---  

## ✅ **Test Cases**  

#### **Test Case 1**  
🔹 **Input:**  
```cpp
DCBBCDE
```  
🔹 **Output:**  
```cpp
1
```  
🔹 **Explanation:** The string can be rotated to form **"BCDEDCB"**, which is a palindrome.  

---  

#### **Test Case 2**  
🔹 **Input:**  
```cpp
YXXYZZ
```  
🔹 **Output:**  
```cpp
1
```  
🔹 **Explanation:** The string can be rotated to form **"XYZZYX"**, which is a palindrome.  

---  

#### **Test Case 3**  
🔹 **Input:**  
```cpp
EDBCD
```  
🔹 **Output:**  
```cpp
0
```  
🔹 **Explanation:** No rotation of **"EDBCD"** forms a palindrome.  
