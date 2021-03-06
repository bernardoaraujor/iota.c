#include <stdio.h>
#include <string.h>
#include <unity/unity.h>

#include "core/utils/allocator.h"

void test_allocator() {
  char *str = "Hello";
  char *m = malloc(strlen(str) + 1);
  strcpy(m, str);
  printf("%s: %s\n", JEMALLOC_VERSION, m);
  free(m);
}

int main() {
  UNITY_BEGIN();

  RUN_TEST(test_allocator);

  return UNITY_END();
}