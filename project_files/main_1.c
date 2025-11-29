#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fptr;
    unsigned long position;
    fptr = fopen("/home/mateus/projects/c_projects/project_files/sample.bin", "wb");

    int len;
    size_t written;
    char *buffer="This is a test";
    

    if(fptr == NULL) {
        printf("Error in opening the file.\n");
    }
    else {
        len = strlen(buffer); // Calculates the number of bytes in the string.
        written = fwrite(buffer, 1, len, fptr); // Writes the string to the file. It attempts to write one block of 'len' bytes.
        if(written == len) {
            printf("Write successful.\n");
        }
        else {
            printf("Length file: %ld.\n", written);
            printf("Length string: %ld.\n", len);
        }
        fclose(fptr);
    }
    return 0;
}