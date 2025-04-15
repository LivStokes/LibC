//Factorial is a mathematical function denoted by ! which represents the product of all positive integers up to a given number.
//Uses a loop to repeatedly multiply values until the factorial is computed.
//The factorial of a non-negative integer n, denoted as n!, is the product of all positive integers less than or equal to n. For example, 5! (read as “5 factorial”) is calculated as:
//5! = 5 * 4 * 3 * 2 * 1 = 120.
//Factorials grow rapidly as the input number increases. For instance, 20! is equal to 2,432,902,008,176,640,000. 
//To calculate large factorials more efficiently, we can use an iterative algorithm. This approach avoids the overhead of function calls and utilizes a loop to calculate the factorial. Here’s the iterative algorithm for calculating factorials:
//
//function factorial(n):
//    result = 1
//    for i from 2 to n:
//       result *= i
//    return result
//Let’s break down the iterative algorithm:
//We initialize the result variable to 1, as 1! is defined as 1.
//Starting from 2, we iterate through all the integers up to n.
//In each iteration, we multiply the result by the current integer i.
//Finally, we return the result as the factorial of n.
//The iterative algorithm calculates factorials more efficiently than the recursive algorithm, especially for large numbers. It avoids the overhead of function calls and utilizes a single loop to calculate the factorial in a straightforward manner.

//The factorial of the natural number n is called the product of all natural numbers from 1 to n. The factorial of n is n! (n with an exclamation mark). 0! by definition it is equal to 1. For example:
//1! = 1

//2! = 1 * 2 = 2

//3! = 1 * 2 * 3 = 6

//4! = 1 * 2 * 3 * 4 = 24

//5! = 1 * 2 * 3 * 4 * 5 = 120
/*
 Start - our algorithm starts here.
We load input data - a natural number n, which is an argument to the function factorial.
We initiate two auxiliary variables:
i - it will accept subsequent natural values from 1 (this value is initially set) to n,
s - in this variable the value of the product of consecutive natural numbers is stored, we start from 1.
We check if the value of variable i is less than or equal to n. If the condition from point 4 is satisfied, we multiply the value s of the product of the numbers by i. Then we increase the value of the variable i by 1, that is, we move to the next natural number and return to point 4 of the algorithm. Points 4-5 will be executed as long as the value of the variable i exceed the value stored in the variable n.
After calculating the product of consecutive natural numbers from 1 to n, we print the result contained in the variable s.
Stop - end of the algorithm.
*/
