void loop_with_break_var1_ok(int y) {
  y = 0;
  while (y < 100)
    if (y == 50) {
      y--;
      break;
    } else
      y++;
}