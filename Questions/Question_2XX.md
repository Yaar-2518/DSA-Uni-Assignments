# <center> **Segment Tree - Range Sum Query** </center>  

### 📅 **Date:** 04-03-2025  
---

## **Problem Statement**❓  
Create a **Segment Tree (ST) for Range Sum** for a given array **A**.  
- Print its contents in a **level-order** format.  
- Read input query ranges, terminated by `-1 -1`.  
- For each query, print the **sum of the elements** in the given range.  

---

## 📜**Constraints**  
1. `A` contains **positive integers**.
2. The input array is terminated by `-1`.
3. Queries are given as two integers `l r`, representing the **range sum from index l to r**.
4. Queries end with `-1 -1`.
5. The segment tree should be implemented using an **array-based representation**.

---

## **Example Test Cases**  

### ✅ **Test Case 1**  
🔹 **Input:**  
```cpp
1 2 5 6 7 9 -1
0 5
2 4
3 5
1 3
-1 -1
```  
🔹 **Output:**  
```cpp
30 8 22 3 5 13 9 1 2 0 0 6 7 0 0  
30  
18  
22  
13  
```  

---

### ✅ **Test Case 2**  
🔹 **Input:**  
```cpp
5 1 6 2 4 8 7 3 -1
0 7
0 3
4 7
4 6
2 5
-1 -1
```  
🔹 **Output:**  
```cpp
36 14 22 6 8 12 10 5 1 6 2 4 8 7 3 0  
36  
14  
22  
12  
19  
20  
```  
