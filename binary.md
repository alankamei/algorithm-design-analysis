# Time Complexity of Binary Search using Master Theorem

Binary search is a classic algorithm that works by dividing the search space in half at each step. In this document, we will derive the time complexity of the binary search algorithm using the **Master Theorem**.

## Recurrence Relation for Binary Search

Binary search works by dividing the problem size in half with each recursive call. This leads to the following recurrence relation:




**T(n) = T(n / 2) + O(1)**

Where:
- `T(n)` represents the time complexity for searching in an array of size `n`.
- `T(n / 2)` is the time complexity of searching in half of the array.
- `O(1)` represents the constant time spent on the comparison and the mid-point calculation.

## Master Theorem Form

The Master Theorem applies to divide-and-conquer recurrences of the form:





**T(n) = aT(n / b) + O(n^d)**

Where:
- `a` is the number of subproblems.
- `b` is the factor by which the problem size is divided.
- `d` is the exponent of the polynomial term representing the work done outside of the recursive calls.

## Identifying Parameters for Binary Search

For binary search, we can identify the following:
- `a = 1` (because we only recurse on one half of the array),
- `b = 2` (because the problem size is divided by 2),
- `d = 0` (since the work done outside the recursive calls is constant, i.e., `O(1)`).

## Applying the Master Theorem

Now, we compare the values of `a` and `b^d` to determine the time complexity:

1. **Case 1**: If `a > b^d`, the complexity is `O(n^log_b a)`.
2. **Case 2**: If `a = b^d`, the complexity is `O(n^d log n)`.
3. **Case 3**: If `a < b^d`, the complexity is `O(n^d)`.

### For Binary Search:

- `a = 1`,
- `b^d = 2^0 = 1`.

Since `a = b^d`, we fall into **Case 2** of the Master Theorem, which gives the time complexity:



**T(n) = O(n^d log n)**
Substituting `d = 0` (since the non-recursive work is constant):


**T(n) = O(log n)**

This logarithmic time complexity makes binary search highly efficient, particularly for searching in large, sorted arrays.



