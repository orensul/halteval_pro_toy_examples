void FN_iterate_bitshift_bad(int array[256]) {
  unsigned int i = 1;
  while (i != 0) {
    array[i] = i;
    i = i << 1;
  }
}