# <center> **Max Min Sum Reverse Palindrome of Array** </center>

### 📅 **Date:** 21-12-2024  
### ⏳ **Deadline:** 21-12-2024 23:55:00 PM  
---

## 💡 Solution  

⚠️ **Before you peek!** Try solving the problem first. Understanding pointers and array manipulation is key to mastering C++ fundamentals.  

### 🎯 **Important Note**
- The **main function** **only prints** the results and **calls the single function** that performs all tasks. 

---

Here is the **solution code**:

```cpp
#include <iostream>
using namespace std;

void findmaxminsumrevpalin(int *arr, int n, int &max, int &min, int &sum, int &p)
{
    max = *arr;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max) max = *(arr + i);
    }

    min = *arr;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < min) min = *(arr + i);
    }

    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }

    int t;
    for (int i = 0; i < n / 2; i++)
    {
        t = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n - i - 1) = t;
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (*(arr + i) == *(arr + n - i - 1))
        {
            p = 1;
        }
        else
        {
            p = 0;
            break;
        }
    }
}

main()
{
    int size;
    cin >> size;

    int arr[size];
    int max, min, sum, p;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    findmaxminsumrevpalin(&arr[0], size, max, min, sum, p);

    cout << max << " " << min << " " << sum << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n' << p;

    return 0;
}
```

---

## 📖 **Explanation**

### 🔹 **What the function does:**
1. **Finds the maximum value** in the array using a loop.  
2. **Finds the minimum value** using a similar approach.  
3. **Computes the sum** of all array elements.  
4. **Reverses the array** by swapping elements.  
5. **Checks if the array is a palindrome** (i.e., whether it reads the same forward and backward).  

### 🔹 **Breakdown of Key Lines:**
- `max = *arr;` → Initializes `max` to the first element, then loops through to find the maximum.  
- `min = *arr;` → Similar approach for the minimum value.  
- `sum += *(arr + i);` → Accumulates the sum of all elements.  
- **Reversal:**  
  ```cpp
  t = *(arr + i);
  *(arr + i) = *(arr + n - i - 1);
  *(arr + n - i - 1) = t;
  ```
  - Swaps the elements from start and end moving towards the center.  
- **Palindrome check:**  
  ```cpp
  if (*(arr + i) == *(arr + n - i - 1))
      p = 1;
  else
  {
      p = 0;
      break;
  }
  ```
  - Compares corresponding elements from both ends; if any mismatch is found, `p = 0`.  

---

## 🔍 **Key Concepts**
- **Pointers**: Used to access and manipulate array elements.  
- **Pass by Reference**: `int &max, int &min, int &sum, int &p` ensures values are updated in the main function.  
- **Looping & Swapping**: Used for finding values, reversing, and checking palindrome properties.  

---

### ✅ **Expected Output Format**

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
