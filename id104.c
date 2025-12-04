void FP_no_incr_first_iterations_ok() {
  int i = 0;
  int j = 0;
  while (i < 1) {
    i += j / 2;
    j++;
  }
}