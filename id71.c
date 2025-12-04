void interproc_terminating_harris10_cond_ok(int x) {
  while (x > 0) {
    if (nondet())
      foo(&x);
    else
      foo(&x);
  }
}