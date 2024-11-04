function findUnion(arr1, arr2, n, m) {
  const mergeDuplicate = [...new Set(arr1.concat(arr2))]; // Sort the result; for numbers, use a comparator function

  return mergeDuplicate.sort((a, b) => a - b);
}
