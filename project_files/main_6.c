#include <stdio.h>
#include <string.h>

int main(void) {
    
    char *ptr;
    char buffer[10];
    int num1, num2;
    
    FILE *fptr;
    // Open file in write mode to store formatted data
    fptr = fopen("/home/mateus/projects/c_projects/project_files/data.txt", "w");

    if(fptr != NULL) {
        fprintf(fptr, "%s %d %d\n", "Haai", 10, 100); // Write formatted line
        fprintf(fptr, "%s %d %d\n", "Haai", 20, 200); // Write another line
        fclose(fptr);
    }    
    fptr = fopen("/home/mateus/projects/c_projects/project_files/data.txt", "r");
    if(fptr != NULL) {
        while(fscanf(fptr, "%s %d %d", buffer, &num1, &num2) != EOF) {
            printf("%s %d %d\n", buffer, num1, num2);
        }
        fclose(fptr);
    }

    return 0;
}