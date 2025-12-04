void loop_with_return_var2_ok(int y) {
  y = 0;
  while (y < 100)
    if (y == 50) {
      y--;
      return;
    } else
      y++;
}