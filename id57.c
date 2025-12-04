static void list_iter_cook06_variant_ok(list_t* p) {
  int tot = 0;
  while (p != 0) {
    tot += p->value;
    p = p->next;
  }
}