void id27(int x) {
  while (x != 0) {
  restart:
    x++;
    if (x == 10)
      goto restart;
    x -= 2;
  }
}