#include <memory.h>
#include <stdio.h>

#include "KeyboardInjector.h"

int main(int argc, char** argv) {
  if (argc == 2 && (strcmp(argv[1], "-?") == 0 ||
                    strcmp(argv[1], "--help") == 0)) {
    printf("%s - Send commands to the keyboard device\n", argv[0]);
    printf("  sleep N - sleeps N microseconds\n");
    printf("  sleepms N - sleeps N milliseconds\n");
    printf("  up N - sends keyup command for N key\n");
    printf("  down N - sends keydown command for N key\n");
    return 0;
  }

  KeyboardInjector inject;
  if (!inject.Init()) {
    fprintf(stderr, "Init failed; are you su?\n");
    return -1;
  }
  inject.Run();
  return 0;
}
