# Find_the_Missing_Number:

Given the multiplication of four numbers and three of those numbers, find the missing number.

Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

Input Format

The first line will contain T, number of test cases.
For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).
Constraints

1 < T <= 100000
0 <= M <= 10^18
1 <= A, B, C <= 10^6
Output Format

Print the missing number. Don't forget to print a new line after it.

Sample Input 0

4

20 1 2 2

10 2 2 1

1 1 2 3

0 3 10 15

Sample Output 0

5

-1

-1

0

Sample Input 1

3

20 5 1 1

18 2 3 3

0 10 20 30

Sample Output 1

4

1

0


# Jadu_Matrix:

You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.

Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

Input Format

First line will contain N, the row and M, the column of the matrix.
Then the N * M sized matrix will be given.
Constraints

1 <= N, M <= 100

0 <= Values <= 100

Output Format

Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.

Sample Input 0

5 5

1 0 0 0 1

0 1 0 1 0

0 0 1 0 0

0 1 0 1 0

1 0 0 0 1

Sample Output 0

YES

Sample Input 1

5 5

1 0 0 0 1

0 1 0 1 0

0 0 0 0 0

0 1 0 1 0

1 0 0 0 1

Sample Output 1

NO

Sample Input 2

5 5

1 0 0 0 1

0 1 0 1 0

0 0 1 0 1

0 1 0 1 0

1 0 0 0 1

Sample Output 2

NO

Sample Input 3

5 5

2 0 0 0 1

0 1 0 1 0

0 0 1 0 0

0 1 0 1 0

1 0 0 0 1

Sample Output 3

NO

Sample Input 4

6 6

1 0 0 0 0 1 

0 1 0 0 1 0 

0 0 1 1 0 0 

0 0 1 1 0 0 

0 1 0 0 1 0 

1 0 0 0 0 1 

Sample Output 4

YES


