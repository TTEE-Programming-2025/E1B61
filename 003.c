#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(void) 
{
    int password,n=0;
    char ch;
    int i,j;
    char seats[9][9];
    int running = 1;
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
	printf("  #####   ######   ######    ####    ######\n");
	system("pause");
    do{
        printf("��J�K�X:");
        scanf("%d",&password);
        getchar();
        n++;
        if(password==2025)
        break;
        if(n<3){
        	printf("�ٳ�%d��\n",(3-n));
		}else{
			printf("���~�T�������J�F");
            return 0;
		}
    }while(1);
    system("cls");
    void displaySeats(char seats[9][9]) {
    printf(" \\123456789\n");
    int i,j;
    for (i = 8; i >= 0; i--) {
        printf("%d", i + 1);
        for (j = 0; j < 9; j++) {
            printf("%c", seats[i][j]);
        }
        printf("\n");
    }
}
void initializeSeats(char seats[9][9]) {
	int i,j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            seats[i][j] = '-';
        }
    }
    srand(time(NULL));
    int z;
    for (z= 0; z< 10; z++) {
        int row = rand() % 9;
        int col = rand() % 9;
        if (seats[row][col] == '-') {
            seats[row][col] = '*';
        }
    }
}
    printf(" ----------[Booking System]----------\n");
    printf(" | a. Available seats               |\n");
    printf(" | b. Arrange for you              |\n");
    printf(" | c. Choose by yourself           |\n");
    printf(" | d. Exit                         |\n");
    printf(" ------------------------------------\n");
    printf("�п�J�ﶵ (a, b, c, d): ");
    scanf(" %c", &ch);
    getchar();
    switch (ch){
        case 'a':
        system("cls");
        printf("�ثe�y��p�U�G\n");
        displaySeats(seats);
        system("pause");
        break;
    }
    return 0;
}

