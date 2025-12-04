void nondet_loop_bad(int z) {
  int x = 1;
  while (x < z)
    if (nondet())
      x++;
}