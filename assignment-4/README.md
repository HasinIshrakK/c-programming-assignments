# 1. Pattern
Problem Statement

You will be given a positive integer N, you need to print a pattern shown below using this N.

See the sample test cases for more clarification.

Input Format

Input will contain only N.
Constraints

1 <= N <= 100
Output Format

Output the pattern.
Sample Input 0

4

Sample Output 0

```#
   #
  ---
 #####
-------
 #####
  ---
   #
   ```


Sample Input 1

1

Sample Output 1

`#`

Sample Input 2

7

Sample Output 2

```#
      #
     ---
    #####
   -------
  #########
 -----------
#############
 -----------
  #########
   -------
    #####
     ---
      #
```

# 2. Pattern_2

Problem Statement

You will be given a positive integer N, you need to print a pattern shown below using this N.

See the sample test cases for more clarification.

Input Format

Input will contain only N.
Constraints

1 <= N <= 9
Output Format

Output the pattern.
Sample Input 0

1

Sample Output 0

1

Sample Input 1

4

Sample Output 1
```
   1

  21
  
 321

4321
```

Sample Input 2

5

Sample Output 2
```
    1

   21

  321

 4321

54321
```


# 3. Count_Before_One

Problem Statement

You will be given an array A and the size of that array N. Take input in the main function. You need to write a function named count_before_one() which receives that array of integers and the size of that array and return type will be integer. The function counts the number of elements in that array until you find 1 and returns that count. Print that count in the main function.

Input Format

First line will contain N, the size of the array.
Next line will contain the array A.
Constraints

1 <= N <= 1000
0 <= A[i] <= 1000; Here 0 <= i < N
Output Format

Output the number of elements before the first 1.
Sample Input 0

5

5 4 3 1 2

Sample Output 0

3

Sample Input 1

```
5
1 2 3 4 5
```
Sample Output 1

0