#include <stdio.h>
#include <string.h>

int main(void) {
    
    int count = 0, ch;
    FILE *fptr;
    fptr = fopen("/home/mateus/projects/c_projects/project_files/main.c", "r");

    if(fptr == NULL) {
        printf("Error in opening the file.\n");
    } 
    else {
        // Read characters one by one until EOF is reached
        while(1) {
            ch = fgetc(fptr);
            if(ch == EOF) {
                break;
            }
            ++count;
        }
        printf("Number of characters in %s is %d\n", "data.txt", count);
        fclose(fptr);
    }
    return 0;
}