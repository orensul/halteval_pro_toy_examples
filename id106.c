void FP_no_incr_first_iterations_interproc_ok() {
  int i = 0;
  int j = 0;
  while (i < 1) {
    incr_if_eq(j, 2, &i);
    j++;
  }
}