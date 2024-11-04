var removeDuplicates = function (nums) {
  // Create a Set to remove duplicates and convert it back to an array
  const uniqueNums = [...new Set(nums)];

  // Modify the original array in place
  nums.length = 0; // Clear the original array
  nums.push(...uniqueNums); // Push unique elements back into the original array

  // Return the new length of the modified array
  return nums.length;
};
