void id95(){
  int i = 0;

  while (i < 10) {
  retry:
    id56(i == 5)
      goto retry;
    i++;
  }
}