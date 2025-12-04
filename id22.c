void nested_external_bad(int y) {
  int x = 0;
  while (y < 100) {
    while (x < 3) {
      x++;
    }
  }
}