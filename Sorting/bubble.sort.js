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
