void FN_goto_cross_loop_stop_at_6_bad() {
  int i = 0;

retry:
  while (i < 10) {
    if (i == 6)
      goto retry;
    i++;
  }
}