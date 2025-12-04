static void list_iter_cook06_ok(list_t* p) {
  int tot = 0;
  do {
    tot += p->value;
    p = p->next;
  } while (p != 0);
}