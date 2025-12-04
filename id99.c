void goto_in_loop_without_eqtest_bad() {
  int i = 0;
  int j = 0;
  while (i < 10) {
  retry:
    j++;
    goto retry;
  }
}