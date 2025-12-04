void iterate_intoverflow_ok(int len) {
  unsigned int i = 0xFFFFFFFF;
  while (i != 0)
    i++;
}