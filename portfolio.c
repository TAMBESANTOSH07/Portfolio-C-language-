
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store project information
struct Project {
    char name[100];
    char description[255];
    int year;
};

int main() {
    // Initialize an array to store projects
    struct Project portfolio[10];
    int projectCount = 0;

    int choice;
    do {
        printf("Portfolio Management\n");
        printf("1. Add Project\n");
        printf("2. View Portfolio\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Add a new project to the portfolio
                if (projectCount < 10) {
                    printf("Enter project name: ");
                    scanf(" %[^\n]s", portfolio[projectCount].name);
                    printf("Enter project description: ");
                    scanf(" %[^\n]s", portfolio[projectCount].description);
                    printf("Enter project year: ");
                    scanf("%d", &portfolio[projectCount].year);
                    projectCount++;
                    printf("Project added to the portfolio.\n");
                } else {
                    printf("Portfolio is full. Cannot add more projects.\n");
                }
                break;
            case 2:
                // View the portfolio
                printf("Portfolio:\n");
                for (int i = 0; i < projectCount; i++) {
                    printf("Project %d\n", i + 1);
                    printf("Name: %s\n", portfolio[i].name);
                    printf("Description: %s\n", portfolio[i].description);
                    printf("Year: %d\n", portfolio[i].year);
                    printf("\n");
                }
                break;
            case 3:
                // Exit the program
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
