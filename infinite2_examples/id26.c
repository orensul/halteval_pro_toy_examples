int id26(int x) {
  if (x < 100)
    return id26(x + 2);
  return x;
}