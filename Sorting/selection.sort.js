function select(arr, i) {
  let minIndex = i; // Assume the first element is the minimum
  for (let j = i + 1; j < arr.length; j++) {
    if (arr[j] < arr[minIndex]) {
      minIndex = j; // Update minIndex if a smaller element is found
    }
  }
  return minIndex; // Return the index of the smallest element
}
function selectionSort(arr, n) {
  for (let i = 0; i < n - 1; i++) {
    let minIndex = select(arr, i);
    if (minIndex !== i) {
      [arr[minIndex], arr[i]] = [arr[i], arr[minIndex]];
    }
  }
}
