void iterate_crc_ok() {
  unsigned int k;
  unsigned long crc0 = 0xFFFFFFFF;

  for (k = 1; k < W; k++) {
    crc0++;
  }
}