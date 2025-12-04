void conditional_goto0_bad(int y) {
re:
  if (y == 100)
    goto re;
  else
    return;
}