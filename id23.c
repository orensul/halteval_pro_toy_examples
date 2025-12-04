void nested_external_ok(int y) {
  int x = 0;
  while (y < 100) {
    while (x < 2) {
      x++;
    }
    y++;
  }
}