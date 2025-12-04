void benchmark_simple_cook06_ok() {
  int x = nondet(), y = nondet(), z = nondet();
  if (y > 0) {
    do {
      if (nondet()) {
        x = x + y;
      } else {
        z = x - y;
      }
    } while (x < y && y < z);
  }
}