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