void iterate_bitmask_ok(int array[256], int len) {
  unsigned int i = 0;
  while (i < len) {
    array[i] = (i & (~7));
    i++;
  }
}