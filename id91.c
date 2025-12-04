void FN_iterate_modulus_bad(int array[256], unsigned int len, unsigned int i) {
  while (i < len) {
    i = i % 2;
    array[i] = i;
    i++;
  }
}