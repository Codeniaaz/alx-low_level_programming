#include "main.h"
#include <stdlib.h>

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (is_space(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
    
	int numWords = countWords(str);
	int wordIndex = 0;
    int wordLength = 0;
    char *wordStart = NULL;	
	int i;	
	char **words;

	if (str == NULL || *str == '\0') {
        return NULL;
    }

    words = (char **)malloc((numWords + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    while (*str) {
        if (is_space(*str)) {
            if (wordLength > 0) {
                words[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
                if (words[wordIndex] == NULL) {
                    for (i = 0; i < wordIndex; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }

                for (i = 0; i < wordLength; i++) {
                    words[wordIndex][i] = wordStart[i];
                }
                words[wordIndex][wordLength] = '\0';
                wordIndex++;
                wordLength = 0;
            }
        } else {
            if (wordLength == 0) {
                wordStart = str;
            }
            wordLength++;
        }

        str++;
    }

    if (wordLength > 0) {
        words[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
        if (words[wordIndex] == NULL) {
            for (i = 0; i <= wordIndex; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }

        for (i = 0; i < wordLength; i++) {
            words[wordIndex][i] = wordStart[i];
        }
        words[wordIndex][wordLength] = '\0';
        wordIndex++;
    }

    words[wordIndex] = NULL;

    return words;
}

void freeWords(char **words) {
	int i;

    if (words == NULL) {
        return;
    }

    for (i = 0; words[i] != NULL; i++) {
        free(words[i]);
    }

	free(words);
}
