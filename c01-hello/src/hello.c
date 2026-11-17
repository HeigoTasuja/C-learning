#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  printf("Hello, World!\n");
  if (argc > 0) {
    const char *slash = strrchr(argv[0], '/');
    printf("%s\n", slash ? slash + 1 : argv[0]);
  }
  return 0;
}
