#include <stdio.h>
#include <string.h>
#include "string_operations.h"

int main() {
    char input[] = "hello world. this is an example paragraph. how are you?";

    // Word count
    printf("Word Count: %d\n", word_count(input));

    // Sentence count
    printf("Sentence Count: %d\n", sentence_count(input));

    // Camel case
    char camel_case_str[1000];
    strcpy(camel_case_str, input);
    to_camel_case(camel_case_str);
    printf("Camel Case: %s\n", camel_case_str);

    // Sentence case
    char sentence_case_str[1000];
    strcpy(sentence_case_str, input);
    to_sentence_case(sentence_case_str);
    printf("Sentence Case: %s\n", sentence_case_str);

    // Toggle case
    char toggle_case_str[1000];
    strcpy(toggle_case_str, input);
    to_toggle_case(toggle_case_str);
    printf("Toggle Case: %s\n", toggle_case_str);

    // Capitalize each word
    char capitalize_case_str[1000];
    strcpy(capitalize_case_str, input);
    capitalize_each_word(capitalize_case_str);
    printf("Capitalize Each Word: %s\n", capitalize_case_str);

    return 0;
}