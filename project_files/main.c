#include <stdio.h>

int main(void) {
    FILE *fptr;
    fptr = fopen("/home/mateus/projects/c_projects/project_files/main.c", "rb");

    unsigned long position;
    if(fptr == NULL) {
        printf("Error in opening the file.\n");
    }
    else
    {
        fseek(fptr, 0, SEEK_END); // Move file pointer to the end of the file
        position = ftell(fptr); // Get the current position (file size in bytes)
        printf("main.c has %ld number of bytes\n", position);
        fclose(fptr);
    }
    return 0;
}