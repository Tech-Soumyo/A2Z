function TwoSum(nums, target) {
  let nummap = {}; // hashmap

  for (let i = 0; i < nums.length; i++) {
    let complement = target - nums[i];

    if (nummap.hasOwnProperty(complement)) {
      return [nummap[complement], i];
    }

    nummap[nums[i]] = i;
  }
  return [-1, -1];
}
