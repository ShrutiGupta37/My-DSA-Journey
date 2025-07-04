# 🔍 Searching Algorithms in C

Basic **searching algorithms** using the C programming language. Searching is a fundamental concept in computer science used to find the location of an element in a data structure like arrays.

---

## 📖 Introduction

Searching algorithms help you determine whether an element exists in a list or not, and if it does, return its index (position). This project includes two main types of search:

- **Linear Search**
- **Binary Search** (Recursive)

---

## 🔢 Types of Searching Algorithms

### 1. Linear Search
- Checks each element one by one.
- Works on **unsorted** or **sorted** arrays.
- Simple to implement but slower on large datasets.

### 2. Binary Search (Recursive)
- Requires the array to be **sorted**.
- Divides the search space in half each time.
- More efficient than linear search.

---
| Algorithm             | Best Case | Average Case | Worst Case | Space Complexity | Input Requirement |
| --------------------- | --------- | ------------ | ---------- | ---------------- | ----------------- |
| Linear Search         | O(1)      | O(n)         | O(n)       | O(1)             | Unsorted OK       |
| Binary Search (Iter)  | O(1)      | O(log n)     | O(log n)   | O(1)             | Sorted Only       |
| Binary Search (Recur) | O(1)      | O(log n)     | O(log n)   | O(log n)         | Sorted Only       |

🧠 Space Complexity:
O(log n) (due to recursion stack)
