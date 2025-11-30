#include <stdio.h>
#include <string.h>

int main(void) {
    
    int ch;
    FILE *fptr1, *fptr2;
    fptr1 = fopen("/home/mateus/projects/c_projects/project_files/data.txt", "r");

    if(fptr1 != NULL) {
        fptr2 = fopen("/home/mateus/projects/c_projects/project_files/new.txt", "w");
        if(fptr2 != NULL) {
            // Copy file one character at a time
            while (1)
            {
                ch = fgetc(fptr1); // Read next character
                if(ch == EOF) {
                    break;
                }
                fputc(ch, fptr2); // Write character to new file
            }
            fclose(fptr1);
            fclose(fptr2);
        }
    }
    return 0;
}