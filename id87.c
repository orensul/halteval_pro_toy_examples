void id87(int array[256], unsigned char i){
  while (i != 0) {
    array[i] = i;
    i = i >> 1;
  }
}
