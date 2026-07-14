let N = 987654321,
  count = 0;

while (N > 0) {
  N = Math.floor(N / 10);
  count++;
}
console.log(count);
