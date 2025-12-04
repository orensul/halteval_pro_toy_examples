void loop_with_break_var3_ok(int y) {
  while (y < 100)
    if (y == 50)
      break;
    else
      y++;
}