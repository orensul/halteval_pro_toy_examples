


void transformed_source(){ return; }


void transformed_source(int x){ x++; }


void transformed_source(int x){
  x++;
  return;
}

void transformed_source(int y){
re:
  y++;
  goto re;
}


void transformed_source(){
  int y = 0;
  while (y < 100)
    y++;
}

void transformed_source(){
  int y = 0;
  int x = 0;
  while (y < 100)
    x++;
}


void transformed_source(int y){
  y++;
  goto end;
end:
  return;
}

void transformed_source(){
  id6();
}


void transformed_source(int y){
re:
  id56(y == 100)
    goto re;
  else
    return;
}

void transformed_source(int y){
re:
  id56(y == 100) {
    y++;
    goto re;
  } else
    return;
}


void transformed_source(int y){ y++; }

void transformed_source(int y){
  while (y == 100)
    id11(y);
  return;
}

void transformed_source(int* y){ (*y) = (*y) + 1; }

void transformed_source(int y){
  while (y == 100)
    id13(&y);
  return;
}

void transformed_source(int y){
  int z = y;
  int x = 0;
label:
  x = 42;
  goto label;
}


void transformed_source(int* x, int y){
  int* z = x;
  
  id56(x != &y)
    while (y < 100) {
      y++;
      (*z)--;
    }
}


void transformed_source(int* x, int y){
  int* z = x;
  
  id56(x == &y)
    while (y < 100) {
      y++;
      (*z)--;
    }
}


void transformed_source(int y){
  int x = 42;
  goto end;
  x++;
end:
  return;
}


void transformed_source(int y){
  int x = 0;
  while (y < 100)
    id56(y < 50)
      x++;
    else
      y++;
}

void transformed_source(int y){
  int x = 0;
  while (y < 100)
    id56(y < 50) {
      x++;
      y = 50;
    } else
      y++;
}


void transformed_source(int y){
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

void transformed_source(int y){
  int x = 0;
  while (y < 100) {
    while (x < 3) {
      x++;
    }
  }
}

void transformed_source(int y){
  int x = 0;
  while (y < 100) {
    while (x < 2) {
      x++;
    }
    y++;
  }
}

void transformed_source(int k){
  int r = 0;
  for (int i = 0; i < k; r++)
    for (int j = 0; j < k; j++)
      r++;
  return r;
}

void transformed_source(int k){
  int r = 0;
  for (int i = 0; i < k; i++)
    for (int j = 0; j < k; r++)
      r++;
  return r;
}

void transformed_source(int k){
  int r = 0;
  for (int i = 0; i < k; i++)
    for (int j = 0; j < k; j++)
      r++;
  return r;
}

void transformed_source(int y){
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


void transformed_source(int x){
  int y = 1;
  while (x != 3)
    y++;
}

void transformed_source(int x){
  int y = 1;
  while (y != 3)
    y++;
}

void transformed_source(int y, int x){
  int turn = 0;
  while (x < 100) {
    id56(turn)
      x++;
    else
      x--;
    turn = (turn ? 0 : 1);
  }
}

void transformed_source(int y, int x){
  int turn = 0;
  while (x < 100) {
    id56(turn)
      x++;
    else
      x = x + 2;
    turn = (turn ? 0 : 1);
  }
}

void transformed_source(int y, int x){
  while (y < 100) {
    while (x == 0)
      y++;
    y++;
  }
}

void transformed_source(int y, int x){
  while (y < 100) {
    while (x == 0) {
      y++;
      x++;
    }
    y++;
  }
}

void transformed_source(int y, int x){
  do {
    y++;
    x++;
  } while (0);
}

void transformed_source(int y, int x){
  do {
    x++;
  } while (y > 0);
}

int transformed_source(int x, int y){
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

int transformed_source(int x, int y){
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


void transformed_source(int y){
  while (y > 0x7fffffff) {
    y++;
    y--;
  }
  return;
}


void transformed_source(int y){
re:
  id56(y > 0x7fffffffffffffff)
    goto re;
  else
    return;
}


void transformed_source(int y){
  y = 0;
  while (y < 100)
    id56(y == 50)
      break;
    else
      y++;
}


void transformed_source(int y){
  y = 0;
  while (y < 100)
    id56(y == 50) {
      y--;
      break;
    } else
      y++;
}


void transformed_source(int y){
  while (y < 100)
    id56(y == 50) {
      y--;
      break;
    } else
      y++;
}


void transformed_source(int y){
  while (y < 100)
    id56(y == 50)
      break;
    else
      y++;
}


void transformed_source(int y){
  while (y < 100)
    id56(y == 50) {
      y--;
      return;
    } else
      y++;
}


void transformed_source(int y){
  while (y < 100)
    id56(y == 50)
      return;
    else
      y++;
}


void transformed_source(int y){
  y = 0;
  while (y < 100)
    id56(y == 50) {
      y--;
      return;
    } else
      y++;
}


void transformed_source(int y){
  y = 0;
  while (y < 100)
    id56(y == 50)
      return;
    else
      y++;
}

void transformed_source(){
  int i = 0;
  while ((i >= 0) == 1)
    i++;
}

void transformed_source(){
  int i = 0;
  while (i % 2 == 0)
    i = i + 2;
}

int transformed_source(int x, int y){
  id56(y == 0)
    return x;
  else
    return x + 1;
}

void transformed_source(int y){
  int i = 0;
  while (i < 100)
    i = id50(i, y);
}

int transformed_source(int x){
  id56(x < 0)
    return x;
  else
    return x + 1;
}

void transformed_source(){
  int i = 0;
  while (i < 100)
    i = id52(i);
}

int transformed_source(int i){
  int val = 0;
  for (i = 0; i < 3; i++)
    val++;
  for (i = 0; i < 3; i++)
    val++;
  return (val);
}



int transformed_source(int a[], int k, unsigned int lo, unsigned int hi){
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


static void transformed_source(list_t* p){
  int tot = 0;
  do {
    tot += p->value;
    p = p->next;
  } while (p != 0);
}


static void transformed_source(list_t* p){
  int tot = 0;
  while (p != 0) {
    tot += p->value;
    p = p->next;
  }
}


static void transformed_source(list_t* p){
  int tot;
  for (tot = 0; p != 0; p = p->next) {
    tot += p->value;
  }
}



void transformed_source(int x, int y){
  id56(y >= 1)
    while (x >= 0)
      x = x + y;
}


int transformed_source(int x, int y){
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


int transformed_source(){ return (rand()); }
int transformed_source(){
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
void transformed_source(){
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





void transformed_source(){
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




void transformed_source(int z){
  int x = 1;
  while (x < z)
    id56(id62())
      x++;
}



void transformed_source(int x, int y){
  y = 0;
  while (x > 0) {
    x--;
    y++;
  }
  while (y > 1)
    y = y;
}


void transformed_source(int* x){ (*x)--; }



void transformed_source(int x){
  while (x > 0)
    id68(&x);
}



void transformed_source(int x){
  while (x > 0) {
    id56(id62())
      id68(&x);
    else
      id68(&x);
  }
}





void transformed_source(int x, int d, int z){
  d = 0;
  z = 0;
  while (x > 0) {
    z++;
    x = x - d;
  }
}







void transformed_source(int k, int i){
  id56(k >= 0)
    ;
  else
    i = -1;
  while (i >= 0)
    i = id62();
  i = 2;
}


void transformed_source(int k, int j){
  while (k >= 0) {
    k++;
    j = k;
    while (j >= 1)
      j--;
  }
}



void transformed_source(int i){
  id56(i == 10) {
    while (i > 0) {
      i = i - 1;
      while (i == 0)
        ;
    }
  }
}



void transformed_source(int array[]){
  unsigned int i = 0;
  while (array[i] != 0) {
    array[i] = 42;
    i++;
  }
}


void transformed_source(int array1[], int array2[]){
  unsigned int i = 0;
  while (array1[i] != 0) {
    array2[i] = 42;
    i++;
  }
}



void transformed_source(int array[], int len){
  int i = 0;
  while (i < len) {
    array[i] = 42;
    id56(i > 10)
      i = 0;
    i++;
  }
}



void transformed_source(int array[256]){
  unsigned int i = 0;
  while (i < (sizeof(*array) / sizeof(array[0]))) {
    array[i] = i;
    i++;
  }
}



void transformed_source(int array[256], int len){
  unsigned int i = 0;
  while (i < len) {
    array[i] = (i & (~7));
    i++;
  }
}



void transformed_source(int array[256], int len){
  unsigned int i = 0;
  unsigned int j = 0;
  while (i < len) {
    j = (i & (~7));
    array[j] = i;
    i++;
  }
}



void transformed_source(int array[256], unsigned int len){
  unsigned int i = 0;
  while (i < len) {
    i = (i & (~7));
    array[i] = i;
    i++;
  }
}


void transformed_source(int i){
  while (i)
    i = i >> 1;
}


void transformed_source(int i){
  while (i)
    i = i << 1;
}


void transformed_source(unsigned int i){
  while (i % 2)
    i = (i << 1);
}




void transformed_source(int array[256]){
  unsigned int i = 1;
  while (i != 0) {
    array[i] = i;
    i = i << 1;
  }
}



void transformed_source(int array[256], int len){
  unsigned int i = 1;
  while (i < len) {
    array[i] = i;
    i = i << 1;
  }
}



void transformed_source(int array[256], unsigned char i){
  while (i != 0) {
    array[i] = i;
    i = i >> 1;
  }
}


void transformed_source(int len){
  unsigned int i = 0xFFFFFFFF;
  while (i != 0)
    i++;
}





void transformed_source(int array[256], unsigned int len, unsigned int i){
  while (i < len) {
    i = i % 2;
    array[i] = i;
    i++;
  }
}




#define W 8

void transformed_source(){
  unsigned int k;
  unsigned long crc0 = 0xFFFFFFFF;

  for (k = 1; k < W; k++) {
    crc0++;
  }
}




void transformed_source(int val){
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



void transformed_source(){
  int x = 42;
  while (x == x)
    x = x + 1;
}


int transformed_source(int k){ return (k % 2 ? 1 : 0); }

void transformed_source(){
  int i;
  int incr;
  for (i = 0; i < 10; i += incr)
    incr = id93(i);
}



void transformed_source(int* array[]){
  for (int i = 0; i < 2; i++) {
    array[i] = malloc(sizeof(int));
  }
}



void transformed_source(){
  int i = 0;

  while (i < 10) {
  retry:
    id56(i == 5)
      goto retry;
    i++;
  }
}

void transformed_source(){
  int i = 0;
  int j = 0;
  while (i < 10) {
  retry:
    j++;
    goto retry;
  }
}



void transformed_source(){
  int i = 0;

retry:
  while (i < 10) {
    id56(i == 6)
      goto retry;
    i++;
  }
}



void transformed_source(){
  int i = 0;

retry:
  while (i < 10) {
    id56(i == 5)
      goto retry;
    i++;
  }
}


#define defined_const 8
int transformed_source(int i, int j){
  for (i = 0; i < defined_const; i++)
    j++;
  return (j);
}


int transformed_source(int b1, int b2, int b3, int b4){
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

void transformed_source(){
  int i = 0;
  int j = 0;
  while (i < 1) {
    i += j / 2;
    j++;
  }
}

void transformed_source(int k1, int k2, int* x){
  id56(k1 == k2) {
    (*x)++;
  }
}

void transformed_source(){
  int i = 0;
  int j = 0;
  while (i < 1) {
    id103(j, 2, &i);
    j++;
  }
}
