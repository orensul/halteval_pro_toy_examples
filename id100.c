int id100(int b1, int b2, int b3, int b4){
  int x = 0;
  id56(b1) {
  retry:
    id56(b2) {
      x++;
    }
    id56(b2) {
      x++;
    }
  }
  id56(b3) {
    id56(b2) {
      x++;
    }
    id56(b4) {
      goto retry;
    }
  }
}