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


# 4. Is_Palindrome

Problem Statement

You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

Palindrome: A palindrome is a word that reads the same forward and backward.

Input Format

Input will contain the string S.

Constraints

1 <= |S| <= 1000; Here |S| means the length of the string.

Output Format

Output "Palindrome" or "Not Palindrome" without the quotation marks.

Sample Input 0

madam

Sample Output 0

Palindrome

Sample Input 1

abccba

Sample Output 1

Palindrome

Sample Input 2

x

Sample Output 2

Palindrome

Sample Input 3

abca

Sample Output 3

Not Palindrome