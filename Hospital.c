#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Patient {
    char first_name[20];
    char second_name[20];
    char surname[20];
    int age;
    char id[9];
};


void generate_id(char* id) {
    srand(time(NULL));
    int i;
    for (i = 0; i < 8; i++) {
        id[i] = rand() % 10 + '0';
    }
    id[8] = '\0';
}

int main() {
  
    char choice;
    struct Patient patient;

    
    printf("Enter first name: ");
    scanf("%s", patient.first_name);
    printf("Enter second name: ");
    scanf("%s", patient.second_name);
    printf("Enter surname: ");
    scanf("%s", patient.surname);
    printf("Enter age: ");
    scanf("%d", &patient.age);

    if (patient.age < 1 || patient.age > 100) {
        printf("Error: Age must be between 1 and 100\n");
        return 1;
    }

    generate_id(patient.id);

    printf("\nPatient information:\n");
    printf("First name: %s\n", patient.first_name);
    printf("Second name: %s\n", patient.second_name);
    printf("Surname: %s\n", patient.surname);
    printf("Age: %d\n", patient.age);
    printf("ID: %s\n", patient.id);

    printf("\nMenu:\n");
    printf("1. Pay bill\n");
    printf("2. Retrieve receipt\n");
    printf("3. Quit\n");

    printf("Enter choice: ");
    scanf(" %c", &choice);

    switch (choice) {
        case '1':
            printf("You chose to pay your bill\n");
            break;
        case '2':
            printf("You chose to retrieve your receipt\n");
            break;
        case '3':
            printf("You chose to quit. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Goodbye!\n");
            break;
    }

    return 0;
}

