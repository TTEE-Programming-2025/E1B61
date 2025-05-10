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
        printf("輸入密碼:");
        scanf("%d",&password);
        getchar();
        n++;
        if(password==2025)
        break;
        if(n<3){
        	printf("還剩%d次\n",(3-n));
		}else{
			printf("錯誤三次不能輸入了");
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
    printf("請輸入選項 (a, b, c, d): ");
    scanf(" %c", &ch);
    getchar();
    switch (ch){
        case 'a':
        system("cls");
        printf("目前座位如下：\n");
        displaySeats(seats);
        system("pause");
        break;
    }
    return 0;
}

