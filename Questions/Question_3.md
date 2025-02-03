# <center> **Max Min Sum Reverse Palindrome of Array** </center>

### 📅 **Date:** 21-12-2024  

---

### **Problem Statement**

Write a **single function** that performs the following operations on a given array:
1. **Finds the maximum value** in the array.  
2. **Finds the minimum value** in the array.  
3. **Calculates the sum** of all elements in the array.  
4. **Reverses the array** elements.  
5. **Checks if the array is a palindrome** (outputs `1` if true, otherwise `0`).  

The **main function** should:  
- Call the single function that handles all the above tasks.  
- Print the results in the required format.  

---

### 🔍 **Constraints**
1. You must write **only one function** to perform all operations.
2. The **main function** is responsible for printing the output.  
3. Input is provided in the format of the number of array elements followed by the array elements.  
4. Outputs must match the format in the examples provided.  

---

### 🛠️ **Function Format**

Your function should be written as follows:  
```cpp
findMaxMinSumRevPalin( /* parameters */ );
```

Example usage in the main function:  
```cpp
main()
{
    findMaxMinSumRevPalin( /* parameters */ );

    // Printing the outputs
    cout << max << " " << min << " " << sum << endl;
    for ( ; ; ; ) cout << ... << " ";
    cout << endl;
}
```

---

### ✅ **Example Test Cases**

#### **Test Case 1**  
**Input:**  
```
8  
4 7 1 6 2 9 1 5
```

**Output:**  
```
9 1 35  
5 1 9 2 6 1 7 4  
0
```

---

#### **Test Case 2**  
**Input:**  
```
11  
8 2 4 1 5 9 5 1 4 2 8
```

**Output:**  
```
9 1 49  
8 2 4 1 5 9 5 1 4 2 8  
1
```
