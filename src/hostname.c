#include "hostname.h"
#include <cstddef>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hostname_generate(char *hostname, size_t len) {
  char chars[] =
      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

  srand(time(0));
  for (int i = 0; i < len; i++) {
    int randomIndex = rand() % (sizeof(chars) - 1);
    hostname[i] = chars[randomIndex];
  }
  // null terminate the string
  hostname[len] = '\0';
}