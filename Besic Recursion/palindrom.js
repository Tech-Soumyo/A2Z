var isPalindrome = function (s) {
  const str1 = s
    .toLowerCase()
    .replace(/[^a-zA-Z0-9]/g, "")
    .split("")
    .reverse()
    .join("");

  const str2 = s.toLowerCase().replace(/[^a-zA-Z0-9]/g, "");

  if (str2 == str1) return true;
  return false;
};
function removeSpaces(str) {
  return str.replace(/[.,;:!?]/g, "");
}

const inputStr = "A man, a plan, a canal: Panama";

const outputStr = inputStr
  .toLowerCase()
  .replace(/[^a-zA-Z0-9]/g, "")
  .split("")
  .reverse()
  .join("");

console.log(outputStr);

// function removePunctuationAndConvertToLowerCase(s) {
//   // Remove punctuation using regular expression
//   const sWithoutPunctuation = s.replace(/[^a-zA-Z0-9]/g, "");

//   // Convert to lowercase
//   const sLowerCase = sWithoutPunctuation.toLowerCase();

//   return sLowerCase;
// }

// // Example usage
// const inputStr = "A man, a plan, a canal: Panama";
// const outputStr = removePunctuationAndConvertToLowerCase(inputStr);
// console.log(outputStr); // Output: amanaplanacanalpanama
