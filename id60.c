int Ack(int x, int y) {
  if (x > 0) {
    int n;
    if (y > 0) {
      y--;
      n = Ack(x, y);
    } else {
      n = 1;
    }
    x--;
    return Ack(x, n);
  } else {
    return y + 1;
  }
}