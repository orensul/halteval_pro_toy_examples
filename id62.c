int benchmark_nondet_cook06_ok() {
  int x = nondet();
  int y = nondet();

  int* p = &y;
  int* q = &x;
  int b = 1;

  while (x < 100 && 100 < y && b) {
    if (p == q) {
      int k = Ack(nondet(), nondet());
      (*p)++;
      while ((k--) > 100) {
        if (nondet()) {
          p = &y;
        }
        if (nondet()) {
          p = &x;
        }
        if (!b) {
          k++;
        }
      }
    } else {
      (*q)--;
      (*p)--;
      if (nondet()) {
        p = &y;
      }
      if (nondet()) {
        p = &x;
      }
    }
    b = nondet();
  }
  return (0);
}