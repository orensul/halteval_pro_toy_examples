void loop_with_break_var2_ok(int y) {
  while (y < 100)
    if (y == 50) {
      y--;
      break;
    } else
      y++;
}