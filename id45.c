void loop_with_return_ok_var1(int y) {
  while (y < 100)
    if (y == 50)
      return;
    else
      y++;
}