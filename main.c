#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000   // Maximum number of lines in the text file
#define MAX_LENGTH 256   // Maximum length of each line

void displayFile(char lines[MAX_LINES][MAX_LENGTH], int lineCount) {
    printf("\n--- Text Editor ---\n");
    for (int i = 0; i < lineCount; i++) {
        printf("%d: %s", i + 1, lines[i]);
    }
    printf("\n-------------------\n");
}

int main(int argc, char *argv[]) {
    char lines[MAX_LINES][MAX_LENGTH];
    int lineCount = 0;
    char filename[100];

    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    strcpy(filename, argv[1]);
    FILE *file = fopen(filename, "r");
    if (file) {
        // Load file contents into the buffer
        while (fgets(lines[lineCount], MAX_LENGTH, file) && lineCount < MAX_LINES) {
            lineCount++;
        }
        fclose(file);
    }

    displayFile(lines, lineCount);

    // Editing loop
    char command;
    int editLine;
    while (1) {
        printf("Enter command (e: edit, s: save, q: quit): ");
        scanf(" %c", &command);

        if (command == 'e') {
            printf("Enter line number to edit: ");
            scanf("%d", &editLine);
            getchar(); // Consume newline
            if (editLine > 0 && editLine <= lineCount) {
                printf("Enter new text: ");
                fgets(lines[editLine - 1], MAX_LENGTH, stdin);
            } else {
                printf("Invalid line number.\n");
            }
        } else if (command == 's') {
            file = fopen(filename, "w");
            if (!file) {
                printf("Error saving file.\n");
                continue;
            }
            for (int i = 0; i < lineCount; i++) {
                fputs(lines[i], file);
            }
            fclose(file);
            printf("File saved successfully.\n");
        } else if (command == 'q') {
            printf("Exiting editor.\n");
            break;
        } else {
            printf("Invalid command.\n");
        }
    }
    return 0;
}
