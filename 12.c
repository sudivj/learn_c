#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter length: ");
  scanf("%d", &n);

  if (n > 0) {
  printf("0%c",'\n');
  }
  else {
	  printf("you entered 0");
  }
    for (i = 2; i <= n; ++i) {
  	    
    printf("%d""%c", nextTerm, '\n');
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
