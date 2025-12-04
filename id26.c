void two_nested_ok(int k) {
  int r = 0;
  for (int i = 0; i < k; i++)
    for (int j = 0; j < k; j++)
      r++;
  return r;
}