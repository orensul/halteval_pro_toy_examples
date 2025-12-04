void inner_loop_bad(int y, int x) {
  while (y < 100) {
    while (x == 0)
      y++;
    y++;
  }
}