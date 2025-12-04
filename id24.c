void FN_two_nested_fst_bad(int k) {
  int r = 0;
  for (int i = 0; i < k; r++)
    for (int j = 0; j < k; j++)
      r++;
  return r;
}