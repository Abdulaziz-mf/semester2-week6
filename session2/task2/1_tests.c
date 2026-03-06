#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "acutest.h"
int is_palindrome(const char *str);

/**
 * @brief Checks if a given string is a palindrome.
 * 
 * @param str The string to be checked.
 * @return int 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(const char *str) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      return 0;
    }
  }
  return 1;
}
void test_is_pallindrome(void){
  TEST_CHECK(is_palindrome("racecar") == 1);
  TEST_MSG("Expected racecar");
}

TEST_LIST = {
  {"Pallindrome test",test_is_pallindrome},

};