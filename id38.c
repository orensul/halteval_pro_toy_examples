void FP_loop_signedarith_ok(int y) {
  while (y > 0x7fffffff) {
    y++;
    y--;
  }
  return;
}