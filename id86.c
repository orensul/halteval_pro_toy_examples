void bitshift_loop_ok(unsigned int i) {
  while (i % 2)
    i = (i << 1);
}