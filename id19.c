void loop_conditional_bad(int y) {
  int x = 0;
  while (y < 100)
    if (y < 50)
      x++;
    else
      y++;
}