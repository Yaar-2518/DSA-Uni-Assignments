# <center> **Rotated Palindrome** </center>  

### 📅 **Date:** 22-12-2024  
---  

### **Problem Statement**  

A **rotated palindrome** is a string that can be rotated in such a way that it becomes a palindrome.  

Your task is to **read a string** and check whether it is a **rotated palindrome** or not.  

The output should be:  
- **1** if the string is a rotated palindrome (**true**)  
- **0** if the string is not a rotated palindrome (**false**)  

---

### 📜 **Constraints**  
1. The input string consists of **only uppercase English letters (A-Z)**.  
2. The length of the string is **between 1 and 100**.  
3. Rotation means shifting characters from one end of the string to the other without changing the order of characters.  

---

### 🔍 **Examples & Explanations**  

#### **Test Case 1**  
🔹 **Input:**  
```cpp
DCBBCDE
```  
🔹 **Output:**  
```cpp
1
```  
🔹 **Explanation:**  
The given string `"DCBBCDE"` can be rotated to form `"BCDEDCB"`, which is a **palindrome**.  

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
🔹 **Explanation:**  
The given string `"YXXYZZ"` can be rotated to form `"XYZZYX"`, which is a **palindrome**.  

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
🔹 **Explanation:**  
There is **no rotation** of `"EDBCD"` that forms a palindrome.  

---

### 🌟 **IYKYK**  
> *"The key to productivity is to rotate your avoidance techniques."*  
> — **Shannon Wheeler**  
