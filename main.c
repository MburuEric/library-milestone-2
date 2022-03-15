#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char name[100];
    char user[30];
    char password[40];
    int is_staff;
};

void add_user() {
    struct User user;
    printf("view users:");
    gets(user.name);
    printf("Add new user:");
    scanf("user");
    printf("Edit user:");
    scanf("user");
    printf("Delete user:");
    scanf("user");
    printf("change password");
    scanf("password");
    printf("log out");
    scanf("log");
    printf("Exit");
    scanf(exit);
    printf("Enter 1 if staff 0 otherwise: ");
    scanf("%d",&user.is_staff);


        printf("successful\n");


}

int menu()
{
  int action;
  printf("Select an action:\n");
  printf("1. View users\n");
  printf("2. Add new user\n");
  printf("3. Edit user\n");
  printf("4. Delete user\n");
  printf("5. change password\n");
  printf("6. Log out\n");
  printf("7. Exit system\n");
  printf("Your Action: ");
  scanf("%d",&action);
  if(action < 1 || action > 4) {
    printf("Invalid action. Try again\n");
  }
  return action;
}

void execute_action(int action) {
    switch(action) {
    case 1:
        add_user();
        break;
    case 2:
        printf("here is a list of all users\n");
        break;
    case 3:
        printf("adding a new user\n");
        break;
    case 4:
        printf("editing user\n");
        break;
    case 5:
        printf("deleting user\n");
        break;
    case 6:
        printf("changing password\n");
        break;
    case 7:
        printf("logging out\n");
        break;
    case 8:
        printf("exiting system\n");
        break;
    default:
        printf("Invalid action.\n");
    }
}



int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("Welcome Mr. Antony!\n");
    printf("What would you like to do?\n");
    execute_action(menu());
    return 0;
}
