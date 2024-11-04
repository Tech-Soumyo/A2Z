function printLargest(arr) {
  arr.sort((a, b) => a - b);

  arr = [...new Set(arr)];

  if (arr.length < 2) {
    return -1;
  }

  return arr[arr.length - 2];
}
