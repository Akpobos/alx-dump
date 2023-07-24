function printPattern(size) {
  if (size < 7) return;

  size = size % 2 === 0 ? size + 1 : size;
  const mid = Math.ceil(size / 2) - 1;

  console.log(mid);
  console.log(size);
  let pattern = "";
  for (let i = 1; i <= size; i++) {
    for (let j = 1; j <= size; j++) {
      if ([1, size].includes(i) || [1, size].includes(j)) {
        pattern += "*";
      } else {
        if ((i >= mid && i <= mid + 2) || (j >= mid && j <= mid + 2)) {
          pattern += "*";
        } else {
          pattern += " ";
        }
      }

      if (j < size) pattern += " ";
    }
    pattern += "\n";
  }
  console.log(pattern);
}

printPattern(7);
