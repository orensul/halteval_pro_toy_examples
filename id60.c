int id60(int x, int y){
  id56(x > 0) {
    int n;
    id56(y > 0) {
      y--;
      n = id61(x, y);
    } else {
      n = 1;
    }
    x--;
    return id61(x, n);
  } else {
    return y + 1;
  }
}