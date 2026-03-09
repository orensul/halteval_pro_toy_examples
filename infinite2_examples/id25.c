int id25(int x) {
  if (x > 50 && x < 100)
    return id25(x + 4);
  else
    return id25(x + 2);
  return x;
}