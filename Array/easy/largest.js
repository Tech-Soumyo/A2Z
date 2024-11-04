function largest(arr) {
  // code here
  arr.sort();
  let length = arr.length();

  return arr[length - 1];
}
