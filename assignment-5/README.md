# 1. Find_the_Missing_Number:

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


# 2. Jadu_Matrix:

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


# 3. Matrix_Again:

You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the values of last row and then print the values of last column in the order they were given.

Input Format

First line will contain N and M the row and column respectively.
Then the 2D matrix will be given.

Constraints

2 <= N,M <= 100

0 <= Element <= 100

Output Format

First line will contain the values of last row.
Second line will contain the values of last column.

Sample Input 0

3 4

1 2 3 4

5 6 7 8

6 5 4 2

Sample Output 0

6 5 4 2 

4 8 2 

Sample Input 1

5 3

1 2 3 

5 6 7 

6 5 4

3 5 4

1 2 3

Sample Output 1

1 2 3 

3 7 4 4 3 


# 4. Magical_Tree:

Jingle Bells, Jingle Bells - It's Christmas today! Ranja, our little friend, is all excited, but there's just one thing missing: a Christmas tree.

Ranja will provide us with the size of the tree, N, and we'll work our holiday magic to print out that perfect tree. Let's make Ranja's Christmas tree dreams come true!

You should see the sample input output to understand how the tree looks like.

Input Format

Input will contain only N.

Constraints

1 <= N <= 21 ; and N is odd.
Output Format

Output the tree of size N.

Sample Input 0

1

Sample Output 0
```
     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *
```
Sample Input 1

3

Sample Output 1
```
      *
     ***
    *****
   *******
  *********
 ***********
*************
     ***
     ***
     ***
     ***
     ***
```
Sample Input 2

5

Sample Output 2
```
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
     *****
     *****
     *****
     *****
     *****
```


# 5. Difference_Array:

You will be given an array A and the size of that array N. You need to make a copy of this array named B. Then sort the array B in ascending order.

After that, you need to make another array C, where each index i (0 <= i < N) of array C is the absolute difference between array A[i] and B[i].

That means,
```
C[0] = |A[0] - B[0]|
C[1] = |A[1] - B[1]|
C[2] = |A[2] - B[2]|
.....
.....
C[N-1] = |A[N-1] - B[N-1]|
```
Here, || means the absolute value. After making the array C, print that array.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N.
Second line of each test case will contain the array A.
Constraints:

1 <= T <= 100

1 <= N <= 1000

0 <= A[i] <= 1000

Output Format

Output the array C.

Sample Input 0

2

5

5 4 3 2 1

6

2 4 5 6 5 1

Sample Output 0

4 2 0 2 4 

1 2 1 1 0 5 

Explanation 0
```
In the first test case, A=[5,4,3,2,1], B=[1,2,3,4,5], so array C=[|5-1|,|4-2|,|3-3|,|2-4|,|1-5|]
In the second test case, A=[2,4,5,6,5,1], B=[1,2,4,5,5,6], so array C=[|2-1|,|4-2|,|5-4|,|6-5|,|5-5|,|1-6|]
```