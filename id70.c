void interproc_terminating_harris10_ok(int x) {
  while (x > 0)
    foo(&x);
}