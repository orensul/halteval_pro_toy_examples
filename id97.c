void allocate_all_in_array_ok(int* array[]) {
  for (int i = 0; i < 2; i++) {
    array[i] = malloc(sizeof(int));
  }
}