int id23(int x) {
  if (x > 50 && x < 100)
    return id23(x + 4);
  else
    return id23(x + 2);
  return x;
}