void loop_call_ok(int y) {
  while (y == 100)
    fcall_by_ref(&y);
  return;
}