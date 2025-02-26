<center> Largest Continuous Sequence: Solution </center>

📅 **Date:** 22-12-2024  
⏳ **Deadline:** 23-12-2024 11:55:00 AM  

---  

❓ **Problem Statement**  

You are given a **binary array A** (consisting of only `0`s and `1`s) where the input ends with `-1` (which is not part of the array).  

Find the **index of a `0`** that, when replaced with `1`, produces the **longest continuous sequence of `1`s**.  
If multiple indices yield the maximum sequence length, return the **first occurrence** of such a `0`.  
If the array contains **only `1`s**, return `-1`.

---  

🔹 **Input Format**  
- A sequence of space-separated binary numbers (`0`s and `1`s) ending with `-1`.  
- `-1` marks the end of the input and is **not** considered part of the array.

🔹 **Output Format**  
- A single integer representing the **index (0-based)** of the `0` that should be replaced.  
- If all elements are `1`, output `-1`.


## 📝 **Solution Code**

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x; 
    cin >> x;
    int size = 0;
    int arr[100];
   
   while(x != -1){
        arr[size] = x;
        size++;
        cin >> x;
    }

    int len = 0;
    int maxLen = 0;
    int c0 = 0;
    int index;
    int firstIndex;

    for (int i = 0; i < size; i++)
    {
        len = 0;
        c0 = 0;
        for (int j = i; j < size; j++)
        {
            // If a zero is encountered, increase the zero count.
            if (arr[j] == 0){
                c0++;
            }
            // If there is at most one zero, increment the length.
            if ((c0 == 1) || (arr[j] == 1)){
                len++;
                // Record the index of the zero in the current subarray.
                if (arr[j] == 0){
                    index = j;
                }
                // If we reach the end, update max length if necessary.
                if (j == size - 1){
                    if (len > maxLen){
                        maxLen = len;
                        firstIndex = index;
                    }
                    break;
                }
            }
            // If more than one zero is encountered, update max length and break.
            else if (c0 > 1){
                if (len > maxLen){
                    maxLen = len;
                    firstIndex = index;
                }
                break;
            }
        }
    }
    
    // If there is any zero in the array, print the first index stored.
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            cout << firstIndex;
            return 0;
        }
        else if (i == size - 1){
            // If no zeros are found, print -1.
            cout << -1;
            return 0;
        }
    }
    
    return 0;
}
```

---  

🔍 **Explanation of the Code**  

1. **Input Reading:**  
   - The program reads integers until `-1` is encountered, storing them in an array.  
   - `size` keeps track of the number of valid inputs.

2. **Nested Loop Strategy:**  
   - The **outer loop** iterates over each index `i` as a potential starting point for a continuous sequence.  
   - The **inner loop** examines the subarray from index `i` to the end, counting the sequence length (`len`) and the number of zeros (`c0`).  
   - If `c0` exceeds `1`, the inner loop breaks because only one zero can be flipped.

3. **Updating Maximum Sequence:**  
   - Whenever the current sequence length (`len`) exceeds the previous maximum (`maxLen`), update `maxLen` and store the current zero’s index (`firstIndex`).

4. **Final Output Determination:**  
   - After processing, the program scans the array to check if there is any zero.  
   - If found, it outputs the stored `firstIndex`.  
   - If the array contains only `1`s, it outputs `-1`.

---  

🎯 **Test Cases**  

✅ **Example 1**  
**Input:**  
```
0 0 1 0 1 1 1 0 1 1 -1
```  
**Output:**  
```
7
```  
**Explanation:**  
Replacing the `0` at index **7** produces the longest continuous sequence of `1`s (length = 6).

---

✅ **Example 2**  
**Input:**  
```
0 1 1 0 0 -1
```  
**Output:**  
```
0
```  
**Explanation:**  
Multiple indices could yield a sequence of length 3, but since the **first occurrence** is required, the output is **0**.

---

✅ **Example 3**  
**Input:**  
```
1 1 -1
```  
**Output:**  
```
-1
```  
**Explanation:**  
The array contains only `1`s, hence the output is **-1**.
