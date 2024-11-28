/*
102. WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.
*/

#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *ptr = fopen("D:\\Coding\\VSCODE\\C\\LAB 9\\File 102.txt", "r");  // Path may need to change
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int ch, charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    while ((ch = fgetc(ptr)) != EOF) {
        charCount++;  // Increment character count

        if (ch == '\n') {
            lineCount++;  // Increment line count when newline is encountered
        }

        if (isspace(ch)) {
            if (inWord) {
                wordCount++;  // End of a word
                inWord = 0;
            }
        } else {
            inWord = 1;  // Inside a word
        }
    }

    // If the last word ends before EOF, we need to count it.
    if (inWord) {
        wordCount++;
    }

    // If the file isn't empty, count the last line (if it doesn't end with a newline)
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    fclose(ptr);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}
