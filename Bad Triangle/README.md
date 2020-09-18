Bad Triangle
https://codeforces.com/problemset/problem/1398/A
You are given an array a1,a2,…,an which is sorted in non-decreasing order(ai≤ai+1).Find three indices i, j, k such that 1≤i<j<k≤n and it is impossible to construct a non-degenerate triangle (a triangle with nonzero area) having sides equal to ai, aj and ak (for example it is possible to construct a non-degenerate triangle with sides 3, 4 and 5 but impossible with sides 3, 4 and 7). If it is impossible to find such triple, report it.

Input
3
7
4 6 11 11 15 18 20
4
10 10 10 11
3
1 1 1000000000




Output
2 3 6
-1
1 2 3
