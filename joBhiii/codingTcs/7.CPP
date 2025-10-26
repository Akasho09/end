Q6) 
Problem Statement:
You are given a binary tree with N nodes where each node contains a positive integer value. The goal is to find the maximum sum path from the root to any leaf node. However, you need to ensure that the sum of the values along the path is not divisible by a given integer K.

Input:

The first line of input contains an integer N, the number of nodes in the tree.
The second line contains N space-separated integers representing the values of the nodes.
The third line contains N-1 pairs of integers u and v, representing the edges of the tree (the tree is rooted at node 1).
The fourth line contains a single integer K, the divisor.
Output:

Print the maximum sum of the path from the root to any leaf node such that the sum is not divisible by K. If no such path exists, print -1.
Input:

7 3 4 8 2 1 6 10 1 2 1 3 2 4 2 5 3 6 3 7 5

Output:

21

Explanation:

The possible paths from the root (node 1) to the leaves are:

3 -> 4 -> 2 (sum = 9)
3 -> 4 -> 1 (sum = 8)
3 -> 8 -> 6 (sum = 17)
3 -> 8 -> 10 (sum = 21)
The path with the maximum sum that is not divisible by 5 is 3 -> 8 -> 10, with a sum of 21.

Notes:

Consider edge cases where no valid path exists.
Optimize the solution for large inputs where N can be as large as 100,000.