A knight is a chess piece that performs the following moves:

- two squares up and one square left.
- two squares up and one square right.
- one square up and two squares left.
- one square up and two squares right.
- one square down and two squares left.
- one square down and two squares right.
- two squares down and one square left.
- two squares down and one square right.

The board can be described by a matrix of N rows and M columns of integers. But, the number of possible moves can be reduced if the knight whould fall of the board or if the destination square is blocked. The square of the board is empty if its matrix element has value 0, and blocked if its 1.

For example, consider following matrix A:

A[0][0] = 0 A[0][1] = 0 A[0][2] = 0
A[1][0] = 0 A[1][1] = 0 A[1][2] = 1
A[2][0] = 1 A[2][1] = 0 A[2][2] = 0
A[3][0] = 0 A[3][1] = 0 A[3][2] = 0

Consider the knight starting in A[0][0]. 
To go to A[3][2] the minimum required moves are:

A[0][0] -> A[2][1] -> A[0][2] -> A[1][0] 
-> A[2][2] -> A[3][0] -> A[1][1] -> A[3][2]

This code solves this challenge. 






