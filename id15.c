void twovars_goto_bad(int y) {
  int z = y;
  int x = 0;
label:
  x = 42;
  goto label;
}