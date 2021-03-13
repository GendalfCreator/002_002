#include <stdio.h>

int isPrime(int a) {
  int primeCheck = 0;

  for (int i = 1; i <= a; i++) {
      if (!(a % i)) {
          primeCheck++;
        }
      if (primeCheck == 3) {
          return 1;
        }
    }
  return 0;
}

int main() {
  int a = 10;

  do {
      printf("Введите целое число: ");
      scanf("%d", &a);
    }
  while (a <= 1);

  printf("Число %d %sпростое\n", a, (isPrime(a)? "не ": ""));
  return 0;
}
