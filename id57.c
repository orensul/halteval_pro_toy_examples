static void id57(list_t* p){
  int tot = 0;
  while (p != 0) {
    tot += p->value;
    p = p->next;
  }
}