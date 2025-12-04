void loop_with_break_ok(int y) {
  y = 0;
  while (y < 100)
    if (y == 50)
      break;
    else
      y++;
}