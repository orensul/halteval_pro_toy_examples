void loop_fcall_add_inductive_bad() {
  int i;
  int incr;
  for (i = 0; i < 10; i += incr)
    incr = compute_increment(i);
}