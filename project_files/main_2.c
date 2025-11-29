#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fptr;
    unsigned long position;
    fptr = fopen("/home/mateus/projects/c_projects/project_files/sample.bin", "rb");

    int len;
    size_t read;
    char buffer[128];
    

    if(fptr == NULL) {
        printf("Error in opening the file.\n");
    }
    else {
        fseek(fptr, 0, SEEK_END); // Move file pointer to the end to get file size
        position = ftell(fptr); // Return the current position -> this is the file size in bytes
        fseek(fptr, 0, SEEK_SET); // Move file pointer back to the beginning of the file
        
        read = fread(buffer, 1, position, fptr); // Read 'position' bytes into buffer, 1 byte at a time
        buffer[position] = '\0'; // Ensure buffer is null-terminated so it's safe for string functions

        if (strcmp(buffer, "This is a test") == 0) {
            printf("Read complete: %s\n", buffer);
        }
        else {
            printf("File content does not match expected.\n");
            printf("Read: %s\n", buffer);
        }
        fclose(fptr);
    }
    return 0;
}