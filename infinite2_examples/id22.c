typedef struct s_ent {
  unsigned int val;
  struct s_ent *next;
}	       ent_t;

id19(*ent_t);

void id22() {
  ent_t one;
  ent_t two;
  one.val = 1;
  one.next = &two;
  two.val = 2;
  two.next = &one;
  loop_entry_iter(&one);
}