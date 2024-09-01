class Solution {
  // Function to calculate the factorial of a number.
  factorialNumbers(n) {
    // Initialize an array to store the factorial numbers
    const result = [];

    // Start with the first factorial (1! = 1)
    let factorial = 1;
    let i = 2; // Start i from 2 to match 2!, 3!, etc.

    // Add the factorial to the result if it is less than or equal to n
    while (factorial <= n) {
      result.push(factorial);
      // Calculate the next factorial
      factorial *= i;
      i++;
    }

    return result;
  }
}
