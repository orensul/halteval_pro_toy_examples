


void id1(){ return; }


void id2(int x){ x++; }


void id3(int x){
  x++;
  return;
}

void id4(int y){
re:
  y++;
  goto re;
}


void id5(){
  int y = 0;
  while (y < 100)
    y++;
}

void id6(){
  int y = 0;
  int x = 0;
  while (y < 100)
    x++;
}


void id7(int y){
  y++;
  goto end;
end:
  return;
}

void id8(){
  id6();
}


void id9(int y){
re:
  id56(y == 100)
    goto re;
  else
    return;
}

void id10(int y){
re:
  id56(y == 100) {
    y++;
    goto re;
  } else
    return;
}


void id11(int y){ y++; }

void id12(int y){
  while (y == 100)
    id11(y);
  return;
}

void id13(int* y){ (*y) = (*y) + 1; }

void id14(int y){
  while (y == 100)
    id13(&y);
  return;
}

void id15(int y){
  int z = y;
  int x = 0;
label:
  x = 42;
  goto label;
}


void id16(int* x, int y){
  int* z = x;
  
  id56(x != &y)
    while (y < 100) {
      y++;
      (*z)--;
    }
}


void id17(int* x, int y){
  int* z = x;
  
  id56(x == &y)
    while (y < 100) {
      y++;
      (*z)--;
    }
}


void id18(int y){
  int x = 42;
  goto end;
  x++;
end:
  return;
}


void id19(int y){
  int x = 0;
  while (y < 100)
    id56(y < 50)
      x++;
    else
      y++;
}

void id20(int y){
  int x = 0;
  while (y < 100)
    id56(y < 50) {
      x++;
      y = 50;
    } else
      y++;
}


void id21(int y){
  int x = 42;
  while (y < 100) {
    while (x <= 100) {
      id56(x == 50)
        x = 1;
      else
        x++;
    }
    y++;
  }
}

void id22(int y){
  int x = 0;
  while (y < 100) {
    while (x < 3) {
      x++;
    }
  }
}

void id23(int y){
  int x = 0;
  while (y < 100) {
    while (x < 2) {
      x++;
    }
    y++;
  }
}

void id24(int k){
  int r = 0;
  for (int i = 0; i < k; r++)
    for (int j = 0; j < k; j++)
      r++;
  return r;
}

void id25(int k){
  int r = 0;
  for (int i = 0; i < k; i++)
    for (int j = 0; j < k; r++)
      r++;
  return r;
}

void id26(int k){
  int r = 0;
  for (int i = 0; i < k; i++)
    for (int j = 0; j < k; j++)
      r++;
  return r;
}

void id27(int y){
  int x = 42;
  while (y < 100) {
    while (x <= 100) {
      id56(x == 50)
        x = 60;
      else
        x++;
    }
    y++;
  }
}


void id28(int x){
  int y = 1;
  while (x != 3)
    y++;
}

void id29(int x){
  int y = 1;
  while (y != 3)
    y++;
}

void id30(int y, int x){
  int turn = 0;
  while (x < 100) {
    id56(turn)
      x++;
    else
      x--;
    turn = (turn ? 0 : 1);
  }
}

void id31(int y, int x){
  int turn = 0;
  while (x < 100) {
    id56(turn)
      x++;
    else
      x = x + 2;
    turn = (turn ? 0 : 1);
  }
}

void id32(int y, int x){
  while (y < 100) {
    while (x == 0)
      y++;
    y++;
  }
}

void id33(int y, int x){
  while (y < 100) {
    while (x == 0) {
      y++;
      x++;
    }
    y++;
  }
}

void id34(int y, int x){
  do {
    y++;
    x++;
  } while (0);
}

void id35(int y, int x){
  do {
    x++;
  } while (y > 0);
}

int id36(int x, int y){
re:
  x++;
  id56(0) {
    int z1 = x * 2;
    goto re;
    return (z1);
  } else {
    int z2 = x + y;
    return z2;
  }
}

int id37(int x, int y){
re:
  x++;
  id56(y) {
    int z1 = x * 2;
    goto re;
    return (z1);
  } else {
    int z2 = x + y;
    return z2;
  }
}


void id38(int y){
  while (y > 0x7fffffff) {
    y++;
    y--;
  }
  return;
}


void id39(int y){
re:
  id56(y > 0x7fffffffffffffff)
    goto re;
  else
    return;
}


void id40(int y){
  y = 0;
  while (y < 100)
    id56(y == 50)
      break;
    else
      y++;
}


void id41(int y){
  y = 0;
  while (y < 100)
    id56(y == 50) {
      y--;
      break;
    } else
      y++;
}


void id42(int y){
  while (y < 100)
    id56(y == 50) {
      y--;
      break;
    } else
      y++;
}


void id43(int y){
  while (y < 100)
    id56(y == 50)
      break;
    else
      y++;
}


void id44(int y){
  while (y < 100)
    id56(y == 50) {
      y--;
      return;
    } else
      y++;
}


void id45(int y){
  while (y < 100)
    id56(y == 50)
      return;
    else
      y++;
}


void id46(int y){
  y = 0;
  while (y < 100)
    id56(y == 50) {
      y--;
      return;
    } else
      y++;
}


void id47(int y){
  y = 0;
  while (y < 100)
    id56(y == 50)
      return;
    else
      y++;
}

void id48(){
  int i = 0;
  while ((i >= 0) == 1)
    i++;
}

void id49(){
  int i = 0;
  while (i % 2 == 0)
    i = i + 2;
}

int id50(int x, int y){
  id56(y == 0)
    return x;
  else
    return x + 1;
}

void id51(int y){
  int i = 0;
  while (i < 100)
    i = id50(i, y);
}

int id52(int x){
  id56(x < 0)
    return x;
  else
    return x + 1;
}

void id53(){
  int i = 0;
  while (i < 100)
    i = id52(i);
}

int id54(int i){
  int val = 0;
  for (i = 0; i < 3; i++)
    val++;
  for (i = 0; i < 3; i++)
    val++;
  return (val);
}



int id55(int a[], int k, unsigned int lo, unsigned int hi){
  unsigned int mid;

  while (lo < hi) {
    mid = (lo + hi) / 2;
    id56(a[mid] < k) {
      lo = mid + 1;
    } else id56(a[mid] > k){
      hi = mid - 1;
    } else {
      return mid;
    }
  }
  return -1;
}



typedef struct s_list {
  int value;
  struct s_list* next;
} list_t;


static void id57(list_t* p){
  int tot = 0;
  do {
    tot += p->value;
    p = p->next;
  } while (p != 0);
}


static void id58(list_t* p){
  int tot = 0;
  while (p != 0) {
    tot += p->value;
    p = p->next;
  }
}


static void id59(list_t* p){
  int tot;
  for (tot = 0; p != 0; p = p->next) {
    tot += p->value;
  }
}



void id60(int x, int y){
  id56(y >= 1)
    while (x >= 0)
      x = x + y;
}


int id61(int x, int y){
  id56(x > 0) {
    int n;
    id56(y > 0) {
      y--;
      n = id61(x, y);
    } else {
      n = 1;
    }
    x--;
    return id61(x, n);
  } else {
    return y + 1;
  }
}

#include <stdlib.h>


int id62(){ return (rand()); }
int id63(){
  int x = id62();
  int y = id62();

  int* p = &y;
  int* q = &x;
  int b = 1;

  while (x < 100 && 100 < y && b) {
    id56(p == q) {
      int k = id61(id62(), id62());
      (*p)++;
      while ((k--) > 100) {
        id56(id62()) {
          p = &y;
        }
        id56(id62()) {
          p = &x;
        }
        id56(!b) {
          k++;
        }
      }
    } else {
      (*q)--;
      (*p)--;
      id56(id62()) {
        p = &y;
      }
      id56(id62()) {
        p = &x;
      }
    }
    b = id62();
  }
  return (0);
}





int npc = 0;
int nx, ny, nz;
void id64(){
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





void id65(){
  int x = id62(), y = id62(), z = id62();
  id56(y > 0) {
    do {
      id56(id62()) {
        x = x + y;
      } else {
        z = x - y;
      }
    } while (x < y && y < z);
  }
}




void id66(int z){
  int x = 1;
  while (x < z)
    id56(id62())
      x++;
}



void id67(int x, int y){
  y = 0;
  while (x > 0) {
    x--;
    y++;
  }
  while (y > 1)
    y = y;
}


void id68(int* x){ (*x)--; }



void id69(int x){
  while (x > 0)
    id68(&x);
}



void id70(int x){
  while (x > 0) {
    id56(id62())
      id68(&x);
    else
      id68(&x);
  }
}





void id71(int x, int d, int z){
  d = 0;
  z = 0;
  while (x > 0) {
    z++;
    x = x - d;
  }
}







void id72(int k, int i){
  id56(k >= 0)
    ;
  else
    i = -1;
  while (i >= 0)
    i = id62();
  i = 2;
}


void id73(int k, int j){
  while (k >= 0) {
    k++;
    j = k;
    while (j >= 1)
      j--;
  }
}



void id74(int i){
  id56(i == 10) {
    while (i > 0) {
      i = i - 1;
      while (i == 0)
        ;
    }
  }
}



void id75(int array[]){
  unsigned int i = 0;
  while (array[i] != 0) {
    array[i] = 42;
    i++;
  }
}


void id76(int array1[], int array2[]){
  unsigned int i = 0;
  while (array1[i] != 0) {
    array2[i] = 42;
    i++;
  }
}



void id77(int array[], int len){
  int i = 0;
  while (i < len) {
    array[i] = 42;
    id56(i > 10)
      i = 0;
    i++;
  }
}



void id78(int array[256]){
  unsigned int i = 0;
  while (i < (sizeof(*array) / sizeof(array[0]))) {
    array[i] = i;
    i++;
  }
}



void id79(int array[256], int len){
  unsigned int i = 0;
  while (i < len) {
    array[i] = (i & (~7));
    i++;
  }
}



void id80(int array[256], int len){
  unsigned int i = 0;
  unsigned int j = 0;
  while (i < len) {
    j = (i & (~7));
    array[j] = i;
    i++;
  }
}



void id81(int array[256], unsigned int len){
  unsigned int i = 0;
  while (i < len) {
    i = (i & (~7));
    array[i] = i;
    i++;
  }
}


void id82(int i){
  while (i)
    i = i >> 1;
}


void id83(int i){
  while (i)
    i = i << 1;
}


void id84(unsigned int i){
  while (i % 2)
    i = (i << 1);
}




void id85(int array[256]){
  unsigned int i = 1;
  while (i != 0) {
    array[i] = i;
    i = i << 1;
  }
}



void id86(int array[256], int len){
  unsigned int i = 1;
  while (i < len) {
    array[i] = i;
    i = i << 1;
  }
}



void id87(int array[256], unsigned char i){
  while (i != 0) {
    array[i] = i;
    i = i >> 1;
  }
}


void id88(int len){
  unsigned int i = 0xFFFFFFFF;
  while (i != 0)
    i++;
}





void id89(int array[256], unsigned int len, unsigned int i){
  while (i < len) {
    i = i % 2;
    array[i] = i;
    i++;
  }
}




#define W 8

void id90(){
  unsigned int k;
  unsigned long crc0 = 0xFFFFFFFF;

  for (k = 1; k < W; k++) {
    crc0++;
  }
}




void id91(int val){
  int num;
  int i;
  int p = 0;

  id56(val == 0)
    num = 1;
  else
    num = 10;

  for (i = 0; i < num; i++)
    p += val;
}



void id92(){
  int x = 42;
  while (x == x)
    x = x + 1;
}


int id93(int k){ return (k % 2 ? 1 : 0); }

void id94(){
  int i;
  int incr;
  for (i = 0; i < 10; i += incr)
    incr = id93(i);
}



void id95(int* array[]){
  for (int i = 0; i < 2; i++) {
    array[i] = malloc(sizeof(int));
  }
}



void id96(){
  int i = 0;

  while (i < 10) {
  retry:
    id56(i == 5)
      goto retry;
    i++;
  }
}

void id97(){
  int i = 0;
  int j = 0;
  while (i < 10) {
  retry:
    j++;
    goto retry;
  }
}



void id98(){
  int i = 0;

retry:
  while (i < 10) {
    id56(i == 6)
      goto retry;
    i++;
  }
}



void id99(){
  int i = 0;

retry:
  while (i < 10) {
    id56(i == 5)
      goto retry;
    i++;
  }
}


#define defined_const 8
int id100(int i, int j){
  for (i = 0; i < defined_const; i++)
    j++;
  return (j);
}


int id101(int b1, int b2, int b3, int b4){
  int x = 0;
  id56(b1) {
  retry:
    id56(b2) {
      x++;
    }
    id56(b2) {
      x++;
    }
  }
  id56(b3) {
    id56(b2) {
      x++;
    }
    id56(b4) {
      goto retry;
    }
  }
}

void id102(){
  int i = 0;
  int j = 0;
  while (i < 1) {
    i += j / 2;
    j++;
  }
}

void id103(int k1, int k2, int* x){
  id56(k1 == k2) {
    (*x)++;
  }
}

void id104(){
  int i = 0;
  int j = 0;
  while (i < 1) {
    id103(j, 2, &i);
    j++;
  }
}
