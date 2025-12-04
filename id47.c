void loop_with_return_var3_ok(int y) {
  y = 0;
  while (y < 100)
    if (y == 50)
      return;
    else
      y++;
}