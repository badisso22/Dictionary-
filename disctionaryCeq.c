#include <stdio.h>
#include <ctype.h>  
#include <string.h> 

#define ALPHABET_SIZE 26  

main() {
    char input_string[100];  
    int letter_count[ALPHABET_SIZE] = {0};  

    
    printf("\nEnter a word or sentence: ");
    fgets(input_string, sizeof(input_string), stdin);  

   
    for (int i = 0; i < strlen(input_string); i++) {
        char char_lower = tolower(input_string[i]);  

        
        if (char_lower >= 'a' && char_lower <= 'z') {
           
            letter_count[char_lower - 'a']++;
        }
    }

   
    printf("\nLetter occurrences:\n");
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (letter_count[i] > 0) { 
            printf("%c: %d\n", 'a' + i, letter_count[i]);
        }
    }

    return 0;
}