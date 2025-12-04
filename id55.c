int FN_bsearch_gupta08_bad(int a[], int k, unsigned int lo, unsigned int hi) {
  unsigned int mid;

  while (lo < hi) {
    mid = (lo + hi) / 2;
    if (a[mid] < k) {
      lo = mid + 1;
    } else if (a[mid] > k) {
      hi = mid - 1;
    } else {
      return mid;
    }
  }
  return -1;
}