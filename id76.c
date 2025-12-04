void FN_nestedloop_chen14_bad(int i) {
  if (i == 10) {
    while (i > 0) {
      i = i - 1;
      while (i == 0)
        ;
    }
  }
}