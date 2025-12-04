void simple_loop_equal_bad() {
  int x = 42;
  while (x == x)
    x = x + 1;
}