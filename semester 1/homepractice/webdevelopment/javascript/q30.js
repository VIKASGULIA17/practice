let positiveCount = 0;
let negativeCount = 0;
let zeroCount = 0;

for (let i = 0; i < 10; i++) {
  let number = parseInt(prompt("Enter a number:"));

  if (number > 0) {
    positiveCount++;
  } else if (number < 0) {
    negativeCount++;
  } else {
    zeroCount++;
  }
}

console.log("Positive numbers: " + positiveCount);
console.log("Negative numbers: " + negativeCount);
console.log("Zero numbers: " + zeroCount);
