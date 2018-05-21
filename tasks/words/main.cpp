#include <stdio.h>
#include <string.h>


#define N 255

bool is_spec(char chr) {
  char spec[] = {',', ' ', '.', ';', ':', '?', '!', '"', '\"'};

  for (unsigned short i = 0; i < strlen(spec); i++) {
    if (chr == spec[i]) return true;
  }

  return false;
}

main() {
  FILE *file;
  char tmp[N];
  unsigned short lines, words, chars;
  bool new_line = true;
  bool counting_word;

  counting_word = false;
  lines = 0;
  words = 0;
  chars = 0;
  file = fopen("input.txt", "r");

  while (fgets(tmp, N, file) != NULL) {
    for (unsigned short i = 0; i < strlen(tmp); i++) {
      // would be better to use regexp, but i guess that's 2 much for noobs
      // and i'm not sure if C++ can gimme that
      if (tmp[i] == ' ' && new_line) {
        chars++;
        continue;
      }

      new_line = false;

      if (tmp[i] == '\n') {
        // do not count a new line spec char
        if (counting_word) {
          counting_word = false;
          words++;
        }

        new_line = true;
        lines++;
        continue;
      }

      if (is_spec(tmp[i])) {
        chars++;

        if (counting_word) {
          counting_word = false;
          words++;
        }

        continue;
      } else {
        counting_word = true;
        chars++;
      }
    }
  }

  fclose(file);

  printf("Number of <lines, words, chars>: %d, %d, %d\n", lines, words, chars);
}
