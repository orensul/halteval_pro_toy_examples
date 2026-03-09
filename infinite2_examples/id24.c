int id24(int x) {
  if ((x % 2) == 0)
    return id24(x + 1);
  return x;
}