void incr_with_call_ok() {
  int i = 0;
  while (i < 100)
    i = incr_if_geq_zero(i);
}