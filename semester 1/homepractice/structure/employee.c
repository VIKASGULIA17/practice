#include <stdio.h>
#include <string.h>
struct employee {
    int id;
    char name[50];
    int age;
    char address[100];
    char department[50];
    float salary;
} emp[10];
int main() {
    int i, n, id, flag = 0;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Employee Name: ");
        scanf("%s", emp[i].name);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Address: ");
        scanf("%s", emp[i].address);
        printf("Department: ");
        scanf("%s", emp[i].department);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\nEnter the employee ID to display details: ");
    scanf("%d", &id);
    for (i = 0; i < n; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee details:\n");
            printf("Employee ID: %d\n", emp[i].id);
            printf("Employee Name: %s\n", emp[i].name);
            printf("Age: %d\n", emp[i].age);
            printf("Address: %s\n", emp[i].address);
            printf("Department: %s\n", emp[i].department);
            printf("Salary: %.2f\n", emp[i].salary);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("\nEmployee with ID %d not found.\n", id);
    }
    return 0;
}
