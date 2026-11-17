#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  (void)argc;
  const char *prog = strrchr(argv[0], '/');
  prog = prog ? prog + 1 : argv[0];

  printf("Hello, World!\n");
  printf("%s\n", prog);
  return 0;
}
