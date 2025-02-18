# <center> **Calendar 2025: Solution** </center>  

### 📅 **Date:** 21-12-2024  
### ⏳ **Deadline:** 22-12-2024 11:55:00 AM  
---  

## 💡 **Solution**  

⚠️ **Before you look!** Try to implement the calendar generation on your own first. This problem leverages **mental mathematics** and **modular arithmetic techniques** to compute the starting day of each month and format the calendar accordingly.

Below is the solution code:

```cpp
#include <iostream>
using namespace std;

int main()
{
    string months[12] = {"January", "February", "March", "April", "May", "June", 
                           "July", "August", "September", "October", "November", "December"};
    int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char days[8] = "SMTWTFS";
    int monthCode[] = {0,3,3,6,1,4,6,2,5,0,3,5};
    int centuryCode[] = {2,0,6,4};
    int dayCode[] = {0,1,2,3,4,5,6};    

    int year; 
    cout << "Enter the Year: "; 
    cin >> year;

    // Determine if the given year is a leap year
    bool leap = 0;
    if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 400 == 0) && (year % 100 == 0)))
    {
        leap = 1;
    }

    // Calculate century and year components
    int century = year / 100;
    int yearInTens = year % 100;
    
    /* The 'sum' variable aggregates the components of the day calculation:
    1 (for January 1st) + 0 (a constant used in the formula) + yearInTens + (yearInTens/4)*/
    int sum = 1 + 0 + yearInTens + (yearInTens / 4);

    /* Adjust the sum based on the century using a mental math shortcut:
    The century code cycles in a pattern every 400 years.*/
    if ((century - 14) % 4 == 0) sum += 2;
    else if ((century - 15) % 4 == 0) sum += 0;
    else if ((century - 16) % 4 == 0) sum += 6;
    else if ((century - 17) % 4 == 0) sum += 4;

    // The final starting day code is computed using modulo 7.
    int ans = sum % 7;
    
    // Adjust for leap year: decrement the day code by 1 and set February to 29 days.
    if (leap)
    {
        ans--;
        monthDays[1] = 29;
    }

    for (int i = 0; i < 12; i++){
        cout << "      " << months[i] << endl;
        cout << "S  M  T  W  T  F  S\n";
        int space = ans * 3;
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= monthDays[i]; k++)
        {
            cout << k;
            ans++;
            // If a week is complete, reset the day counter and start a new line.
            if ((ans) % 7 == 0)
            {
                ans = 0;
                cout << endl;
            }
            else {
                if (k < 10) { cout << "  "; }
                else { cout << " "; }
            }
        }
        cout << endl << endl;
    }
    
    return 0;
}
```

---  

## 🔍 **Detailed Explanation of the Approach**  

### **1. Data Structures and Predefined Codes**  
- **Month Names & Days:**  
  The `months` array stores the names of all 12 months, while `monthDays` holds the standard number of days in each month.  
- **Day Header:**  
  The `days` array contains the characters for the days of the week ("SMTWTFS") for header display.  
- **Predefined Codes:**  
  Arrays like `monthCode` and `centuryCode` are based on **mental mathematics techniques**. They allow quick computation of the starting weekday by accounting for the offset contributed by the month and century.  

### **2. Leap Year Determination**  
- The program checks if the year is a leap year using the standard rule:
  - A year is a leap year if it is divisible by 4 but not by 100, unless it is also divisible by 400.
- If it’s a leap year, February (month index 1) is updated to have 29 days, and the starting day (`ans`) is adjusted accordingly.

### **3. Calculating the Starting Day Using Mental Mathematics**  
- **Year Breakdown:**  
  The year is split into the century part and the last two digits (`yearInTens`).  
- **Aggregation of Components:**  
  The `sum` variable is calculated using:
  ```cpp
  int sum = 1 + 0 + yearInTens + (yearInTens / 4);
  ```
  This formula is derived from mental math methods that compute the weekday for January 1st.
- **Century Adjustment:**  
  Based on the century value, a specific offset is added to `sum`. This offset follows a cyclical pattern every 400 years and is computed using modulo operations.
- **Final Day Code:**  
  The final day code (`ans`) is computed as `sum % 7`, normalizing it to a value between 0 and 6 (representing days Sunday through Saturday).

### **4. Generating the Calendar Output**  
- **Formatting the Month:**  
  For each month, the month name and day header are printed with proper spacing.
- **Aligning Dates:**  
  The number of leading spaces is determined by the starting day (`ans`). Each empty day slot is represented by 3 spaces.
- **Printing Dates:**  
  Dates are printed in sequence. When a week completes (`ans % 7 == 0`), a new line is started. Single-digit dates are padded with extra spaces for alignment.

---

## 🔗 **Additional References**

- **YouTube Video:**  
  [![How to Calculate Calendar Dates](https://i.ytimg.com/vi/87hOITnSl1A/hq720.jpg?sqp=-oaymwEnCNAFEJQDSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLD9FezmWj4lHcuTnMOc91r6mU3Auw)](https://www.youtube.com/watch?v=87hOITnSl1A&pp=ygUhaG93IHRvIGNhbGN1bGF0ZSBkYXkgaW4gcmVhc29uaW5n)

