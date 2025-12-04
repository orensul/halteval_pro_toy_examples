static void id57(list_t* p){
  int tot = 0;
  do {
    tot += p->value;
    p = p->next;
  } while (p != 0);
}
