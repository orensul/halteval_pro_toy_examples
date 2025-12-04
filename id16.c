void loop_pointer_ok(int* x, int y) {
  int* z = x;
  // int y = 1;
  if (x != &y)
    while (y < 100) {
      y++;
      (*z)--;
    }
}