let sum = 0,
  N = 12345;

while (N > 0) {
  let number = N % 10;
  N = Math.floor(N / 10);
  sum = sum + number;
}

console.log(sum);
