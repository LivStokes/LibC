/*
Before diving into the algorithm, let’s quickly recap what factorials are. The factorial of a non-negative integer n, denoted as n!, is the product of all positive integers less than or equal to n. For example, 5! (read as “5 factorial”) is calculated as:

5! = 5 * 4 * 3 * 2 * 1 = 120.

One of the most common algorithms for calculating factorials is the recursive approach. This algorithm breaks down the factorial calculation into smaller subproblems until it reaches the base case. Here’s the recursive algorithm for calculating factorials:

function factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1).

Let’s walk through the algorithm step by step:

If the input n is equal to 0, we have reached the base case and return 1, as 0! is defined as 1.
Otherwise, we recursively call the factorial function with the argument n-1 and multiply the result by n.
This algorithm works well for smaller numbers, but for large factorials, it can quickly consume a significant amount of memory and time due to the repeated function calls and stack usage.
Next, let’s explore the recursive approach. Recursion is a technique where a function calls itself to solve a smaller instance of the same problem until it reaches the base case (n = 1).

Explanation of Recursive Approach:
Input Handling: Uses Scanner to read an integer input from the user.
Validation: Checks if the input number is negative or zero.
Factorial Calculation (Recursive): The factorial method is called recursively to compute the factorial of num. It reaches the base case when num = 1.
Output: Prints the calculated factorial for valid inputs; handles exceptions gracefully for invalid inputs.

