void var_goto_ok(int y) {
  int x = 42;
  goto end;
  x++;
end:
  return;
}