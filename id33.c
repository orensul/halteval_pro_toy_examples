void inner_loop_ok(int y, int x) {
  while (y < 100) {
    while (x == 0) {
      y++;
      x++;
    }
    y++;
  }
}