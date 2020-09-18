Omkar and Passwords
https://codeforces.com/problemset/problem/1392/A
ord Omkar has permitted you to enter the Holy Church of Omkar! To test your worthiness, Omkar gives you a password which you must interpret!
A password is an array a of n positive integers. You apply the following operation to the array: pick any two adjacent numbers that are not equal to each other and replace them with their sum. Formally, choose an index i such that  1≤i<n and a i≠ai+1 ai≠ai+1, delete both aiai and ai+1 ai+1 from the array and put ai+ai+1ai+ai+1 in their place.For example, for array 
[7,4,3,7]
[7,4,3,7] you can choose 
i=2
i=2 and the array will become 
[7,4+3,7]=[7,7,7]
[7,4+3,7]=[7,7,7]. Note that in this array you can't apply this operation anymore.


Input
2
4
2 1 3 1
2
420 420
Output
1
2
