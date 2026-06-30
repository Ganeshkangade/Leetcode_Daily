# Parse Integers Using StringStream (C++)

## 📌 Problem Statement

Given a string containing integers separated by commas, extract all the integers and store them in a vector.

### Example

**Input**

```
23,4,56
```

**Output**

```
23
4
56
```

---

## 💡 Approach

The solution uses C++'s `stringstream` class to parse the input string.

### Steps

1. Create a `stringstream` object from the input string.
2. Read an integer from the stream.
3. Store the integer in a vector.
4. Read and ignore the comma delimiter.
5. Repeat until all integers have been extracted.
6. Print the contents of the vector.

---

## 🔍 Algorithm

1. Initialize an empty `vector<int>`.
2. Create a `stringstream` using the input string.
3. While an integer can be extracted:

   * Store the integer in the vector.
   * Read the comma (`','`) to move to the next number.
4. Return the vector.

---

## ✅ C++ Solution

```cpp
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> result;
    stringstream ss(str);

    int num;
    char comma;

    while (ss >> num)
    {
        result.push_back(num);
        ss >> comma;
    }

    return result;
}

int main()
{
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
```

---

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(n)`

  * Each character in the string is processed at most once.

* **Space Complexity:** `O(k)`

  * `k` is the number of integers stored in the output vector.

---

## 🛠️ Concepts Used

* `stringstream`
* `vector`
* String parsing
* Input/Output
* Delimiter handling

---

## 🎯 Key Learning

* `stringstream` simplifies parsing formatted strings.
* Delimiters such as commas can be ignored by reading them into a `char` variable.
* This approach is cleaner and more efficient than manually traversing the string.
