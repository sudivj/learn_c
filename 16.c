#include <stdio.h>
int main() {
  int n;
  printf("Enter the number of elements (1 to 10): ");
  scanf("%d", &n);
  double arr[n+1];

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[n+1] < arr[i]) {
      arr[n+1] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[n]);

  return 0;
}

