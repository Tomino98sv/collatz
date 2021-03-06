# Collatz conjecture
    The Collatz conjecture is a conjecture in mathematics that concerns a sequence defined as follows: start with any positive integer n. 
    Then each term is obtained from the previous term as follows: if the previous term is even, the next term is one half the previous term. 
    If the previous term is odd, the next term is 3 times the previous term plus 1. 
    The conjecture is that no matter what value of n, the sequence will always reach 1.
    Collatz conjecture: https://en.wikipedia.org/wiki/Collatz_conjecture

# Warm Up!
    1.1 "Fork" this repository. 
    1.2 Clone your branch of this repository.
    
# Edit collatz.c

## 1. Input
    1.1 Read input from user into variable "num".
    1.2 Create input validation. Program will continue only if value of num is between <1;1000>.

## 2. Main cycle
    2.1 Remember you need to change actuall value of "num" varaible!
    If actuall value of num variable is even you will need to set new value to result of division num / 2.
    But if value of num is odd set new value to num * 3 + 1.
    2.2 Don't forget to print numbers on screen.

## 3. Test your code
    Example:
    Input: 22
    Output: 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

    Input: 19
    Output: 58 29 88 44 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

## 4. Modification
    4.1 Change your program to print count of main cycle iterations.
    4.2 Change your program to print count of main cycle iterations for numbers from 100 to 200 without interaction with user.
    4.3 Find maximum temporary value of num for numbers from 100 to 200.
    
## 5. Push!
    Don't forget to push your work on your git repository.
