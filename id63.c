void id63(){
  int x = id62(), y = id62(), z = id62();
  id56(y > 0) {
    do {
      id56(npc == 5) {
        id56(!((y < z && z <= nz) || (x < y && x >= nx) || 0))
          ;
      }
      id56(npc == 0) {
        id56(id62()) {
          nx = x;
          ny = y;
          nz = z;
          npc = 5;
        }
      }
      id56(id62()) {
        x = x + y;
      } else {
        z = x - y;
      }
    } while (x < y && y < z);
  }
}