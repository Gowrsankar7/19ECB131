#include <stdio.h>

int input[10] = {10, 9, 8, 7, 6, 5, 1, 2, 3, 4};

void print_array() {
  for (int i = 0; i < 10; i++) printf("%d\t", input[i]);
  printf("\n");
}

void heapify(int a[], int n, int i) {
  int largest = i, l = 2*i+1, r = 2*i+2;
  if (l < n && a[l] > a[largest]) largest = l;
  if (r < n && a[r] > a[largest]) largest = r;
  if (largest != i) {
    int t = a[i]; a[i] = a[largest]; a[largest] = t;
    heapify(a, n, largest);
  }
}

void heap_sort() {
  for (int i = 4; i >= 0; i--) heapify(input, 10, i);
  for (int i = 9; i > 0; i--) {
    int t = input[0]; input[0] = input[i]; input[i] = t;
    heapify(input, i, 0);
  }
}

int main() {
  int ch;
  printf("6. Heap Sort\n9. Exit\nSelect: ");
  scanf("%d", &ch);
  if (ch == 6) { heap_sort(); print_array(); }
  else if (ch == 9) return 0;
  else printf("Invalid choice\n");
  return 0;
}


output
//1. Heap Sort
2. Exit
Select: 1
1	2	3	4	5	6	7	8	9	10	

1. Heap Sort
2. Exit
Select: 2


=== Code Execution Successful ===
