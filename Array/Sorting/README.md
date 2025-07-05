https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/visualize/

# 🔢 Sorting Algorithms in C

This repository contains implementations of common **sorting algorithms** using the C programming language.  
Each algorithm is written for educational purposes to help understand how sorting works internally.

---
### Bubble Sort
Bubble Sort is a basic comparison-based sorting technique that works by repeatedly swapping adjacent elements if they are in the wrong order.
#### How it Works

1. Start from the beginning of the array.
2. Compare each pair of adjacent elements.
3. If the left element is greater than the right, swap them.
4. Repeat the process for all elements until the array is sorted.
5. After every pass, the largest unsorted element "bubbles up" to its correct position.

### Selection Sort
Selection Sort is a comparison-based sorting algorithm that divides the array into a sorted and an unsorted region and repeatedly selects the **minimum** (or maximum) from the unsorted region to move it to the correct position.

#### How it Works

1. Start from index `i = 0`.
2. Find the **minimum** element in the unsorted part of the array.
3. Swap it with the element at position `i`.
4. Repeat until the array is sorted.

![image](https://github.com/user-attachments/assets/812d14b8-d94b-4adc-8db8-084d53212b06)

---

## 📌 List of Sorting Algorithms Implemented

| Algorithm        | Time Complexity (Best / Average / Worst) | Space | Stable | In-Place |
|------------------|-------------------------------------------|--------|--------|----------|
| Bubble Sort      | O(n) / O(n²) / O(n²)                      | O(1)   | ✅     | ✅       |
| Selection Sort   | O(n²) / O(n²) / O(n²)                     | O(1)   | ❌     | ✅       |
| Insertion Sort   | O(n) / O(n²) / O(n²)                      | O(1)   | ✅     | ✅       |
| Merge Sort       | O(n log n) / O(n log n) / O(n log n)      | O(n)   | ✅     | ❌       |
| Quick Sort       | O(n log n) / O(n log n) / O(n²)           | O(log n) | ❌  | ✅       |
| Heap Sort        | O(n log n) / O(n log n) / O(n log n)      | O(1)   | ❌     | ✅       |
| Counting Sort    | O(n+k) / O(n+k) / O(n+k)                  | O(k)   | ✅     | ❌       |
| Radix Sort       | O(nk) / O(nk) / O(nk)                     | O(n+k) | ✅     | ❌       |
| Shell Sort       | O(n log n) / O(n^3/2) / O(n²)             | O(1)   | ❌     | ✅       |



