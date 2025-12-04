void goto_cross_loop_stop_at_5_bad() {
  int i = 0;

retry:
  while (i < 10) {
    if (i == 5)
      goto retry;
    i++;
  }
}