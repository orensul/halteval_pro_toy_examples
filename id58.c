static void list_iter_cook06_variant2_ok(list_t* p) {
  int tot;
  for (tot = 0; p != 0; p = p->next) {
    tot += p->value;
  }
}