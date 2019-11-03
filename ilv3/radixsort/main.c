#include  <stdio.h>

  int print(int *a, int n) {
  int i;
  for (i = 0; i < n;  i++)
  printf("%d\t", a[i]);
  }

  void radix_sort(int *ar, int n) {
  int i, b[10], m = 0,  exp = 1;
  for (i = 0; i < n;  i++) {
  if (ar[i] > m)
  m = ar[i];
  }

  while (m / exp >  0) {
  int box[10] = { 0 };
  for (i = 0; i <  n; i++)
  box[ar[i] / exp %  10]++;
  for (i = 1; i <  10; i++)
  box[i] += box[i -  1];
  for (i = n - 1; i  >= 0; i--)
  b[--box[ar[i] / exp  % 10]] = ar[i];
  for (i = 0; i <  n; i++)
  ar[i] = b[i];
  exp *= 10;
  }
  }

  int main() {
  int arr[10];
  int i, num;

  printf("Arrey länge eingeben ");
  scanf("%d",  &num);

  printf("\nArrey elemt eingeben: \n");
  for (i = 0; i <  num; i++)
  scanf("%d", &arr[i]);

  printf("\nArray  elemente : ");
  print(&arr[0],  num);

  radix_sort(&arr[0], num);

  printf("\nSorted  elements : ");
  print(&arr[0],  num);

  return 0;
  }