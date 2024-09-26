#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;
  for (s21_size_t i = 0;
       i < n && result == 0 && (!(str1[i] == '\0') || !(str2[i] == '\0'));
       i++) {
    if (str1[i] != str2[i]) {
      if ((int)str1[i] > (int)str2[i])
        result = (int)str1[i] - (int)str2[i];
      else if ((int)str1[i] < (int)str2[i])
        result = (int)str1[i] - (int)str2[i];
    }
  }
  return result;
}