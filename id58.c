static void id58(list_t* p){
  int tot;
  for (tot = 0; p != 0; p = p->next) {
    tot += p->value;
  }
}