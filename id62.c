int id62(){
  int x = id62();
  int y = id62();

  int* p = &y;
  int* q = &x;
  int b = 1;

  while (x < 100 && 100 < y && b) {
    id56(p == q) {
      int k = id61(id62(), id62());
      (*p)++;
      while ((k--) > 100) {
        id56(id62()) {
          p = &y;
        }
        id56(id62()) {
          p = &x;
        }
        id56(!b) {
          k++;
        }
      }
    } else {
      (*q)--;
      (*p)--;
      id56(id62()) {
        p = &y;
      }
      id56(id62()) {
        p = &x;
      }
    }
    b = id62();
  }
  return (0);
}