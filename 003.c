#include <stdio.h>
#include <stdlib.h>
#include <time.h>// For time functions to generate random numbers
#include <string.h>
// Function to display the seat layout
void displaySeats(char seats[9][9]) {
    printf(" \\123456789\n");// Display column numbers
    int i,j;
    for (i = 0; i < 9; i++) {
        printf("%d", i + 1); // Display row numbers
        for (j = 0; j < 9; j++) {
            printf("%c", seats[i][j]);// Display the status of each seat ('-', '*', or '@')
        }
        printf("\n");
    }
}
// Function to initialize the seats, set all to '-' and randomly assign 10 seats as '*'
void initializeSeats(char seats[9][9]) {
	int i,j;
	// Initialize all seats as empty ('-')
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            seats[i][j] = '-';
        }
    }
    srand(time(NULL));// Use current time as the seed for random number generation
    int z;
    // Randomly choose 10 positions and mark them as occupied ('*')
    for (z= 0; z< 10; z++) {
        int row = rand() % 9;
        int col = rand() % 9;
        // Ensure the seat is not already occupied
        if (seats[row][col] == '-') {
            seats[row][col] = '*';// Mark seat as occupied ('*')
        }
    }
}
int main(void) 
{
    int password,n=0;
    char ch;
    int i,j;
    char seats[9][9];// Declare a 9x9 array for seats
    int running = 1;// Control the main menu loop
	printf("            ##     ###        ###      ##\n");
	printf("           ###      ##       ##       ###\n");
	printf("  ####      ##      ##      ##         ##\n");
	printf(" ##  ##     ##      #####   #####      ##\n");
	printf(" ######     ##      ##  ##  ##  ##     ##\n");
	printf(" ##         ##      ##  ##  ##  ##     ##\n");
	printf("  #####   ######   ######    ####    ######\n");
	printf("---------------------------------------------\n");
	printf("            ##     ###        ###      ##\n");
	printf("           ###      ##       ##       ###\n");
	printf("  ####      ##      ##      ##         ##\n");
	printf(" ##  ##     ##      #####   #####      ##\n");
	printf(" ######     ##      ##  ##  ##  ##     ##\n");
	printf(" ##         ##      ##  ##  ##  ##     ##\n");
	printf("  #####   ######   ######    ####    ######\n");
	printf("---------------------------------------------\n");
	printf("            ##     ###        ###      ##\n");
	printf("           ###      ##       ##       ###\n");
	printf("  ####      ##      ##      ##         ##\n");
	printf(" ##  ##     ##      #####   #####      ##\n");
	printf(" ######     ##      ##  ##  ##  ##     ##\n");
	printf(" ##         ##      ##  ##  ##  ##     ##\n");
	printf("  #####   ######   ######    ####    ######\n");// Personal style screen 
	system("pause");
	// Password verification
    do{
        printf("Enter password:");
        scanf("%d",&password);
        getchar();// Clear extra newline character
        n++;
        if(password==2025)
        break;
        if(n<3){
        	printf("You have %d attempt(s) left\n",(3-n));// Limit to 3 attempts
		}else{
			printf("Incorrect password entered three times. Exiting...");
            return 0;
		}
    }while(1);
    initializeSeats(seats);// Initialize seat map
    while (running){
	system("cls");// Clear the screen
	printf(" ----------[Booking System]----------\n");
    printf(" | a. Available seats               |\n");
    printf(" | b. Arrange for you              |\n");
    printf(" | c. Choose by yourself           |\n");
    printf(" | d. Exit                         |\n");
    printf(" ------------------------------------\n");// Display main menu
    printf("Please enter your choice (a, b, c, d): ");
    scanf(" %c", &ch);
    getchar();// Consume newline character
    switch (ch){
    case 'a':// Show available seats
    system("cls");
    printf("Current seat layout:\n");
    displaySeats(seats);
    printf("Press any key to return to the main menu...\n");
    getchar();// Return to the main menu
    break;
    case 'b':// Automatic seat arrangement
	{
        int need,found = 0;
        int i,j,k;
        printf("How many seats do you need?(1~4): ");
        scanf("%d", &need);
        getchar();
        if (need < 1 || need > 4) 
    	{
            printf("Invalid input.\n");
            printf("Press any key to return to the main menu...\n");
            getchar();// Return to the main menu
            break;
        }
        // Find consecutive empty seats
        for (i = 0; i < 9 && !found; i++) {
            for (j = 0; j <= 9 - need; j++) 
			{
                int ok = 1;
                for (k = 0; k < need; k++) {
                    if (seats[i][j + k] != '-')
					{
                        ok = 0;
                        break;
                    }
                }
                if (ok)
				{// Found available seats
                    printf("Suggested seats are row %d, columns %d to %d\n", i + 1, j + 1, j + need);
                    for (k = 0; k < need; k++){
                        seats[i][j + k] = '@';
                    }
                    displaySeats(seats);
                    printf("Do you accept the arrangement?(y/n): ");
                    char confirm;
                    scanf(" %c", &confirm);
                    getchar();
                    if (confirm == 'y' || confirm == 'Y') {
                        for (k = 0; k < need; k++) {
                            seats[i][j + k] = '*';// Confirm the arrangement
                        }
                        printf("Seats confirmed.\n");
                    } else {
                        for (k = 0; k < need; k++) {
                            seats[i][j + k] = '-';// Cancel the arrangement
                        }
                        printf("Arrangement canceled.\n");
                    }
                    found = 1;
                    break;
                }
            }
        }

        if (!found) {
            printf("Could not find %d consecutive empty seats.\n", need);
        }
        printf("Press any key to return to the main menu...\n");
        getchar();// Return to the main menu
        break;
    }

    case 'c': {// Manual seat selection
        int count = 0;
        char input[10];
        int row, col;
        while (1) {
            printf("Enter seat (format: row-column, e.g., 2-3), type 'done' to finish: ");
            scanf("%s", input);
            if (strcmp(input, "done") == 0) break;
            if (sscanf(input, "%d-%d", &row, &col) == 2) {
                if (row < 1 || row > 9 || col < 1 || col > 9) {
                    printf("Out of range, please enter again.\n");
                    continue;
                }
                if (seats[9 - row][col - 1] == '-') {
                    seats[9 - row][col - 1] = '@';
                    count++;
                } else {
                    printf("Seat already taken, please choose another.\n");
                }
            } else {
                printf("Invalid format, please enter again.\n");
            }
        }
        if (count > 0) {
            displaySeats(seats);
            printf("請Please confirm your selection. Press any key to save...\n");
            getchar();
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == '@') {
                        seats[i][j] = '*';
                    }
                }
            }
        }
        printf("Press any key to return to the main menu...\n");
        getchar(); // Return to the main menu
        break;
    }
    case 'd': {// Exit the system
        char confirm;
        printf("Are you sure you want to exit? (y/n): ");
        scanf(" %c", &confirm);
        if (confirm == 'y' || confirm == 'Y') {
            running = 0;// Exit the main menu loop
        }
        break;
    }
    default://Invalid input
        printf("Invalid input, please choose again.\n");
        printf("Press any key to return to the main menu...\n");
        getchar();// Return to the main menu
        break;
        }
    }
    return 0;
}
//心得:這次作業練習的是設計一個座位選取的系統，功能包括顯示座位表、自動安排座位、手動選擇座位與離開系統， 
//透過這次作業讓我複習了陣列、迴圈、條件判斷等語法，也深刻體會到我的不足之處在於編寫判斷條件和迴圈的程式時，
//我會容易把位置搞混 
