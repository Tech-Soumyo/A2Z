function insert(arr, i) {
  let key = arr[i];
  let j = i - 1;

  while (j >= 0 && arr[j] > key) {
    arr[j + 1] = arr[j];
    j--;
  }

  arr[j + 1] = key;
}

function insertionSort(arr, n) {
  for (let i = 1; i < n; i++) {
    insert(arr, i);
  }
}

function recursiveInsertionSort(arr, n) {
  // Base case: If the array has only one element, it's already sorted
  if (n <= 1) {
    return;
  }

  // Sort the first n-1 elements
  this.recursiveInsertionSort(arr, n - 1);

  // Insert the last element at its correct position in the sorted subarray
  let last = arr[n - 1];
  let j = n - 2;

  // Shift elements of the sorted subarray that are greater than last
  while (j >= 0 && arr[j] > last) {
    arr[j + 1] = arr[j];
    j--;
  }

  // Place the last element at its correct position
  arr[j + 1] = last;
}
