#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("Hello, World!\n");
  if (argc > 0) {
    printf("%s\n", argv[0]);
  }
  return 0;
}
