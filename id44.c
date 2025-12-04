void loop_with_return_ok(int y) {
  while (y < 100)
    if (y == 50) {
      y--;
      return;
    } else
      y++;
}