# <center> **Number in Words** </center>  

### 📅 **Date:** 21-12-2024  
---

### **Problem Statement**  

Write a program that takes an integer `n` as input and prints its corresponding English representation in words. The output should follow standard number naming conventions.  

---
### 📜 **Constraints**  
1. `n` is a positive integer with up to **4 digits** (1 ≤ `n` ≤ 9999).  
2. The output must be in **uppercase letters**.  
3. There should be a **single space** between words, and no trailing spaces.  

---
### 🔍 **Example Test Cases**  

#### ✅ **Test Case 1**  
🔹 **Input:**  
```cpp
9472
```  
🔹 **Output:**  
```cpp
NINE THOUSAND FOUR HUNDRED SEVENTY TWO
```  

#### ✅ **Test Case 2**  
🔹 **Input:**  
```cpp
8615
```  
🔹 **Output:**  
```cpp
EIGHT THOUSAND SIX HUNDRED FIFTEEN
```  

#### ✅ **Test Case 3**  
🔹 **Input:**  
```cpp
3006
```  
🔹 **Output:**  
```cpp
THREE THOUSAND SIX
```  

---
### 📌 **Notes**  
- Consider standard **English number naming rules** (e.g., “FIFTEEN” instead of “ONE FIVE”).  
- Handle numbers with **zeros appropriately** (e.g., "3006" should be "THREE THOUSAND SIX" and not "THREE THOUSAND ZERO SIX").  
