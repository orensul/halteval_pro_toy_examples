int constant_loop_ok(int i, int j) {
  for (i = 0; i < defined_const; i++)
    j++;
  return (j);
}