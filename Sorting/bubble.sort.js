class Solution {
  //Function to sort the array using bubble sort algorithm.
  bubbleSort(arr, n) {
    //code here
    for (let i = 1; i < n; i++) {
      for (let j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
        }
      }
    }
  }
}

function recursiveBubbleSort(arr, n) {
  // Base case: if the array size is 1, it is already sorted
  if (n === 1) return;

  // Perform one pass of the bubble sort, pushing the largest element to the end
  for (let i = 0; i < n - 1; i++) {
    // Swap if the current element is greater than the next element
    if (arr[i] > arr[i + 1]) {
      [arr[i], arr[i + 1]] = [arr[i + 1], arr[i]];
    }
  }

  // Recursively call bubble sort on the array of size n-1
  recursiveBubbleSort(arr, n - 1);
}

// Example usage
const arr = [64, 34, 25, 12, 22, 11, 90];
recursiveBubbleSort(arr, arr.length);
console.log("Sorted array:", arr); // Output: [11, 12, 22, 25, 34, 64, 90]
