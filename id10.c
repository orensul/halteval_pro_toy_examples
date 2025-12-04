void conditional_goto0_ok(int y) {
re:
  if (y == 100) {
    y++;
    goto re;
  } else
    return;
}