 string_operations.h
#ifndef STRING_OPERATIONS_H
#define STRING_OPERATIONS_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function 1: Count the number of words in a string
int word_count(const char *str) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i]; i++) {
        if (isspace(str[i])) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }
    return count;
}

// Function 2: Count the number of sentences in a paragraph (based on periods, question marks, or exclamation marks)
int sentence_count(const char *str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            count++;
        }
    }
    return count;
}

// Function 3: Convert string to camelCase
void to_camel_case(char *str) {
    int j = 0;
    int capitalize_next = 0;
    for (int i = 0; str[i]; i++) {
        if (isspace(str[i])) {
            capitalize_next = 1;
        } else {
            if (capitalize_next && islower(str[i])) {
                str[j++] = toupper(str[i]);
                capitalize_next = 0;
            } else {
                str[j++] = tolower(str[i]);
            }
        }
    }
    str[j] = '\0';
}

// Function 4: Convert string to Sentence Case
void to_sentence_case(char *str) {
    int capitalize_next = 1;
    for (int i = 0; str[i]; i++) {
        if (capitalize_next && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize_next = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            capitalize_next = 1;
        }
    }
}

// Function 5: Convert string to Toggle Case
void to_toggle_case(char *str) {
    for (int i = 0; str[i]; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

// Function 6: Capitalize each word in a string
void capitalize_each_word(char *str) {
    int capitalize_next = 1;
    for (int i = 0; str[i]; i++) {
        if (isspace(str[i])) {
            capitalize_next = 1;
        } else if (capitalize_next) {
            str[i] = toupper(str[i]);
            capitalize_next = 0;
        }
    }
}

#endif // STRING_OPERATIONS_H