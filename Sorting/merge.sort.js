class Solution {
  // Function to merge two sorted subarrays into a single sorted array
  merge(arr, l, m, r) {
    // Calculate sizes of the two subarrays to be merged
    let n1 = m - l + 1; // Size of the left subarray
    let n2 = r - m; // Size of the right subarray

    // Create temporary arrays to hold the subarray values
    let left = new Array(n1);
    let right = new Array(n2);

    // Copy data to the temporary arrays
    for (let i = 0; i < n1; i++) {
      left[i] = arr[l + i];
    }
    for (let j = 0; j < n2; j++) {
      right[j] = arr[m + 1 + j];
    }

    // Merge the temporary arrays back into arr[l..r]
    let i = 0; // Initial index of the left subarray
    let j = 0; // Initial index of the right subarray
    let k = l; // Initial index of the merged subarray

    while (i < n1 && j < n2) {
      if (left[i] <= right[j]) {
        arr[k] = left[i];
        i++;
      } else {
        arr[k] = right[j];
        j++;
      }
      k++;
    }

    // Copy the remaining elements of the left subarray, if any
    while (i < n1) {
      arr[k] = left[i];
      i++;
      k++;
    }

    // Copy the remaining elements of the right subarray, if any
    while (j < n2) {
      arr[k] = right[j];
      j++;
      k++;
    }
  }

  // Function to sort the array using the Merge Sort algorithm
  mergeSort(arr, l, r) {
    if (l < r) {
      // Find the middle point of the array
      let m = Math.floor(l + (r - l) / 2);

      // Recursively sort the first and second halves
      this.mergeSort(arr, l, m);
      this.mergeSort(arr, m + 1, r);

      // Merge the sorted halves
      this.merge(arr, l, m, r);
    }
  }
}

// Example usage
const solution = new Solution();
const arr = [12, 11, 13, 5, 6, 7];
solution.mergeSort(arr, 0, arr.length - 1);
console.log("Sorted array:", arr); // Output: [5, 6, 7, 11, 12, 13]
