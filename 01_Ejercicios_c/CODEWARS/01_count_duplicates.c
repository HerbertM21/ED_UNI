#include <stdio.h>

size_t duplicate_count(const char* text) {
    char cache[36] = {0};
    size_t result = 0;
  
    while (*text){
        if (isdigit(*text)){
            cache[*text - '0']++;
        } else {
            cache[tolower(*text) - 'a' + 10]++;
        }
      text++;
    }
  
    for (size_t i = 0; i < 36; i++)
        if (cache[i] > 1){
            result++;
    }

    return result;
}

int main(){

    char str1[] = "abcde";
    char str2[] = "aabbcde";
    char str3[] = "aabBcde";
    char str4[] = "indivisibility";
    char str5[] = "Indivisibilities";
    char str6[] = "aA11";
    char str7[] = "ABBA";

    printf("%s -> %d\n", str1, duplicate_count(str1));
    printf("%s -> %d\n", str2, duplicate_count(str2));
    printf("%s -> %d\n", str3, duplicate_count(str3));
    printf("%s -> %d\n", str4, duplicate_count(str4));
    printf("%s -> %d\n", str5, duplicate_count(str5));
    printf("%s -> %d\n", str6, duplicate_count(str6));
    printf("%s -> %d\n", str7, duplicate_count(str7));

    return 0;
}