#include <stdio.h>
#include <string.h>

int main(void) {
    
    char *ptr;
    char buffer[80];
    FILE *fptr1, *fptr2;
    fptr1 = fopen("/home/mateus/projects/c_projects/project_files/data.txt", "r");

    if(fptr1 != NULL) {
        fptr2 = fopen("/home/mateus/projects/c_projects/project_files/new.txt", "w");
        if(fptr2 != NULL) {
            while (1)
            {
                // Copy file one line at a time
                ptr = fgets(buffer, sizeof(buffer), fptr1); // Read a line
                if(ptr == NULL) {
                    break;
                }
                fputs(buffer, fptr2); // Write line to file
            }
            fclose(fptr1);
            fclose(fptr2);
        }
    }
    return 0;
}