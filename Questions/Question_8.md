# <center> Largest Continuous Sequence </center>

### 📅 **Date:** 22-12-2024  

---  

## 🔹 **Problem Statement**  

You are given a **binary array A** (containing only `0`s and `1`s).  

Find the **index of a `0`** that can be replaced with `1` to obtain the **longest continuous sequence of `1`s**.  

If multiple indices can achieve the maximum length, return the **first occurrence** of `0`.  

If the input contains **only `1`s**, return `-1` (Invalid Input).  

---

### 🔢 **Input Format**  
- A sequence of space-separated binary numbers (`0` and `1`) ending with `-1`.  
- `-1` is **not part of the array** and marks the end of input.  


### 📤 **Output Format**  
- The **index** (0-based) of the `0` that should be replaced.  
- If the input contains only `1`s, return `-1`.  

---

## 📜 **Constraints**  

✔ The array contains only `0`s and `1`s.  
✔ The input always ends with `-1` (which is **not** part of the array).  
✔ If multiple solutions exist, return the **first occurrence** of `0`.  
✔ If all elements are `1`, return `-1` (Invalid Input).  

---  

## 🔍 **Example Test Cases** 

#### ✅ **Test Case 1**  
🔹 **Input:**  
```cpp
0 0 1 0 1 1 1 0 1 1 -1
```

🔹 **Output:**  
```cpp
7
```

📌 **Explanation:**  
Replacing the `0` at index **7** results in the longest continuous sequence of `1`s (**length = 6**).  

---  

#### ✅ **Test Case 2**  

🔹 **Input:**  
```cpp
0 1 1 0 0 -1
```

🔹 **Output:**  
```cpp
0
```

📌 **Explanation:**  
Replacing the `0` at index **0** or **3** results in a sequence of **length 3**.  
Since we return the **first occurrence**, the output is **0**.  

---  

#### ✅ **Test Case 3**  

🔹 **Input:**  
```cpp
1 1 -1
```

🔹 **Output:**  
```cpp
-1
```

📌 **Explanation:**  
The input contains **only `1`s**, so it is an **invalid input**.  

---  

### 🌟 IYKYK
> "Mere change is not growth.  
> Growth is the synthesis of change and continuity,  
> and where there is no continuity there is no growth."  
> **– C.S. Lewis**
