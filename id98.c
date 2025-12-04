void FN_goto_in_loop_bad() {
  int i = 0;

  while (i < 10) {
  retry:
    if (i == 5)
      goto retry;
    i++;
  }
}