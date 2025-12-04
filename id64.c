void benchmark_cook06_ok() {
  int x = nondet(), y = nondet(), z = nondet();
  if (y > 0) {
    do {
      if (npc == 5) {
        if (!((y < z && z <= nz) || (x < y && x >= nx) || 0))
          ;
      }
      if (npc == 0) {
        if (nondet()) {
          nx = x;
          ny = y;
          nz = z;
          npc = 5;
        }
      }
      if (nondet()) {
        x = x + y;
      } else {
        z = x - y;
      }
    } while (x < y && y < z);
  }
}