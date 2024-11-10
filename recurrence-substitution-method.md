# Solving the Recurrence Relation Using the Substitution Method

## Problem Statement

Given the recurrence relation:

\[
T(n) = 
\begin{cases} 
0 & \text{if } n = 0 \\
1 + T(n-1) & \text{if } n > 0
\end{cases}
\]

Our goal is to find a closed-form solution for \( T(n) \) and analyze its time complexity.

## Step 1: Applying the Recurrence

We will begin by manually calculating the first few values of \( T(n) \) to look for a pattern.

- **For \( n = 0 \)**:
  \[
  T(0) = 0 \quad \text{(Base case)}
  \]

- **For \( n = 1 \)**:
  \[
  T(1) = 1 + T(0) = 1 + 0 = 1
  \]

- **For \( n = 2 \)**:
  \[
  T(2) = 1 + T(1) = 1 + 1 = 2
  \]

- **For \( n = 3 \)**:
  \[
  T(3) = 1 + T(2) = 1 + 2 = 3
  \]

- **For \( n = 4 \)**:
  \[
  T(4) = 1 + T(3) = 1 + 3 = 4
  \]

From these calculations, we observe that:

\[
T(n) = n
\]

## Step 2: Proving the Solution by Induction

We now prove the closed-form solution \( T(n) = n \) using mathematical induction.

### Base Case:
For \( n = 0 \), the recurrence gives \( T(0) = 0 \), which matches the formula \( T(n) = n \).

### Inductive Step:
Assume that \( T(k) = k \) holds for some \( k \geq 0 \). We need to prove that \( T(k + 1) = k + 1 \).

From the recurrence relation:
\[
T(k + 1) = 1 + T(k)
\]
By the inductive hypothesis, \( T(k) = k \), so:
\[
T(k + 1) = 1 + k = k + 1
\]

Thus, by the principle of mathematical induction, the formula \( T(n) = n \) holds for all \( n \geq 0 \).

## Step 3: Conclusion

The closed-form solution to the recurrence relation is:

\[
T(n) = n \quad \text{for all} \quad n \geq 0
\]

### Time Complexity:
The closed-form expression \( T(n) = n \) is a linear function, so the time complexity of this recurrence is:

\[
\text{Time Complexity} = O(n)
\]

This shows that the recurrence grows linearly with respect to \( n \).

