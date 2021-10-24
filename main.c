#include <stdio.h>

int table[50];
int fibonacci(int num) {
  int x;
  
  if(table[num]){
    return table[num];

  }else if (num <=2) {
    x = 1;
  } else {
    x = fibonacci(num-1) + fibonacci(num-2);
  }
  table[num] = x;
  return(x);
}


int main(void) {
  int n,i;
  
  printf("Digite o numero de termos da sequencia: ");
  scanf("%d", &n);
  
  while(n <= 0) {
    printf("Numero incorreto. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
  }
  
  // Para cada i (de 1 a n), calcula e imprime o
  // i-esimo termo da sequencia de Fibonacci.
  for (i = 1; i <= n; i++) {
    printf("Fib(%d) = %d\n",i,fibonacci(i));
  }

  fibonacci(n);
  printf("\n");
  return 0;
}