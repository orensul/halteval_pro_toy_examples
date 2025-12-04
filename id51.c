void incr_with_call_bad(int y) {
  int i = 0;
  while (i < 100)
    i = incr_if_non_zero(i, y);
}