void FP_goto_signedarith_ok(int y) {
re:
  if (y > 0x7fffffffffffffff)
    goto re;
  else
    return;
}