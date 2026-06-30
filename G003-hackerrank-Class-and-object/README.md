# Class and Objects (C++)

## 📌 Problem Statement

Create a `Student` class that stores the marks of **five subjects** for each student.

The class should provide:

* An instance variable to store the five subject scores.
* An `input()` function to read the scores.
* A `calculateTotalScore()` function to calculate the total marks of a student.

The program then determines **how many students scored higher than the first student (Kristen)**.

---

## 📝 Example

### Input

```text
3
30 40 45 10 10
40 40 40 40 40
20 20 20 20 20
```

### Output

```text
1
```

### Explanation

| Student   | Total Score |
| --------- | ----------: |
| Kristen   |         135 |
| Student 2 |         200 |
| Student 3 |         100 |

Only **one** student scored higher than Kristen.

---

## 💡 Approach

1. Create a `Student` class.
2. Store the marks of five subjects in an array.
3. Read the marks using the `input()` function.
4. Calculate the total marks using `calculateTotalScore()`.
5. Store all students in an array.
6. Compute Kristen's total score.
7. Compare every other student's total with Kristen's score.
8. Count the number of students whose total score is greater.
9. Print the final count.

---

## 🔍 Algorithm

1. Read the number of students `n`.
2. Create an array of `Student` objects.
3. Read the marks of every student.
4. Calculate Kristen's total score.
5. Traverse the remaining students:

   * Calculate their total score.
   * If their score is greater than Kristen's, increment the counter.
6. Print the counter.

---

## ✅ C++ Solution

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
public:
    int score[5];

    void input()
    {
        int num;
        for (int i = 0; i < 5; i++)
        {
            cin >> num;
            score[i] = num;
        }
    }

    int calculateTotalScore()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum += score[i];
        }

        return sum;
    }
};

int main()
{
    int n;
    cin >> n;

    Student *s = new Student[n];

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0;

    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();

        if (total > kristen_score)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
```

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n)`

  * Each student's five scores are processed once. Since each student has a fixed number of subjects (5), the work per student is constant.

* **Space Complexity:** `O(n)`

  * An array of `n` `Student` objects is created.

---

## 🛠️ Concepts Used

* Classes and Objects
* Instance Variables
* Member Functions
* Arrays
* Object Arrays
* Loops
* Encapsulation

---

## 🎯 Key Learning

* An **instance variable** is a data member that belongs to each object of a class.
* Member functions operate on the object's data.
* Arrays of objects allow you to manage multiple instances of a class efficiently.
* Encapsulating data and behavior inside a class makes the code more organized and reusable.
