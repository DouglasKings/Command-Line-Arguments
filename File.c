#include <stdio.h>

// Function prototype for displaying usage message
void displayUsage();

int main(int argc, char *argv[]) {
    // Check if the number of arguments is not exactly 3
    if (argc != 3) {
        // Display usage message and exit
        displayUsage();
        return 1; // Return non-zero value to indicate an error
    }

    // Assuming argv[1] and argv[2] are the required arguments
    printf("First Argument: %s\n", argv[1]);
    printf("Second Argument: %s\n", argv[2]);

    return 0;
}

// Function definition for displaying usage message
void displayUsage() {
    printf("Usage: ./program_name arg1 arg2\n");
    printf("Where:\n");
    printf("arg1 - First required argument.\n");
    printf("arg2 - Second required argument.\n");
}
