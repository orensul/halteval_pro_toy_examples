int id24(int x) {
  if (x < 100)
    return id24(x + 2);
  return x;
}