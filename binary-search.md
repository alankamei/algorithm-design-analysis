# Algorithm: Binary Search

## Problem Statement

The task is to design an algorithm that searches for a target value in a **sorted array** using the **Binary Search** technique. The Binary Search algorithm works by repeatedly dividing the search space in half until the target value is found or the search space is empty.

Given a sorted array `arr[]` of `n` elements and a target value `target`, the goal is to find the index of `target` in `arr[]` or return `-1` if the target is not present.

### Binary Search Algorithm

Binary Search works on the principle of **divide and conquer**, and it operates as follows:

1. **Initialize pointers**: Define two pointers `low` and `high` to represent the boundaries of the search space. Initially, `low` is set to `0` and `high` is set to `n-1`, where `n` is the length of the array.

2. **Iterate**:
   - While `low` is less than or equal to `high`, calculate the middle index `mid`:
     \[
     \text{mid} = \left( \text{low} + \text{high} \right) / 2
     \]
   - If `arr[mid]` is equal to the target, return `mid` as the index where the target is found.
   - If `arr[mid]` is less than the target, update `low = mid + 1` to search the right half of the array.
   - If `arr[mid]` is greater than the target, update `high = mid - 1` to search the left half of the array.

3. **Termination**:
   - If `low > high`, the target is not in the array, so return `-1`.

### Steps of the Algorithm

1. **Initialization**: Set `low` to `0` and `high` to `n-1`.
2. **Loop**: While `low <= high`, calculate the middle index and compare the middle element with the target.
3. **Update Search Space**: If the target is greater or smaller than the middle element, adjust the search space by updating `low` or `high` accordingly.
4. **Return Result**: If the target is found, return the index; otherwise, return `-1`.

## Time Complexity Analysis

### Best Case:
- The best case occurs when the target value is located at the middle of the array. In this case, the algorithm completes in **O(1)** time, as it checks the middle element once.

### Worst Case:
- In the worst case, the algorithm keeps halving the search space until it has reduced the problem size to a single element.
- In each iteration, the search space is reduced by half, so the total number of iterations is proportional to the logarithm of `n` (base 2).
- The time complexity in the worst case is **O(log n)**.

### Average Case:
- In the average case, the time complexity is also **O(log n)**, as the number of operations will be proportional to the number of times the search space can be halved before the target is found or the search space is exhausted.

### Space Complexity:
- The space complexity is **O(1)** because the algorithm only uses a constant amount of extra space for variables like `low`, `high`, and `mid`.

### Summary of Time Complexity:
- **Best Case**: O(1)
- **Worst Case**: O(log n)
- **Average Case**: O(log n)
- **Space Complexity**: O(1)

This makes binary search one of the most efficient searching algorithms for sorted data.

## Conclusion

Binary Search is a highly efficient algorithm for searching in a **sorted array** with a time complexity of **O(log n)**. Its logarithmic time complexity makes it very scalable, and it is commonly used in applications that require fast searching, such as searching in large databases, directories, and other sorted datasets.

The key advantage of binary search over linear search (which has a time complexity of O(n)) is its ability to significantly reduce the number of comparisons by halving the search space with each step.
