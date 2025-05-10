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
        case 'b':
		{
            int need;
            int found = 0;
            int i,j,k;
            printf("需要幾個座位？(1~4): ");
            scanf("%d", &need);
            getchar();
            if (need < 1 || need > 4) 
			{
                printf("輸入錯誤。\n");
                system("pause");
                break;
            }
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
					{
                        printf("建議座位為第 %d 列，第 %d 到 %d 欄\n", i + 1, j + 1, j + need);
                        for (k = 0; k < need; k++) {
                            seats[i][j + k] = '@';
                        }
                        displaySeats(seats);
                        printf("是否接受安排？(y/n): ");
                        char confirm;
                        scanf(" %c", &confirm);
                        getchar();
                        if (confirm == 'y' || confirm == 'Y') {
                            for (k = 0; k < need; k++) {
                                seats[i][j + k] = '*';
                            }
                            printf("已確認座位。\n");
                        } else {
                            for (k = 0; k < need; k++) {
                                seats[i][j + k] = '-';
                            }
                            printf("已取消安排。\n");
                        }
                        found = 1;
                        break;
                    }
                }
            }

                if (!found) {
                    printf("找不到連續的 %d 個空位。\n", need);
                }

                system("pause");
                break;
            }

            case 'c': {
                int count = 0;
                char input[10];
                int row, col;

                while (1) {
                    printf("請輸入座位（格式：列-欄，如 2-3），輸入 done 結束: ");
                    scanf("%s", input);

                    if (strcmp(input, "done") == 0) break;

                    if (sscanf(input, "%d-%d", &row, &col) == 2) {
                        if (row < 1 || row > 9 || col < 1 || col > 9) {
                            printf("超出範圍，請重新輸入。\n");
                            continue;
                        }

                        if (seats[9 - row][col - 1] == '-') {
                            seats[9 - row][col - 1] = '@';
                            count++;
                        } else {
                            printf("座位已被佔用，請選擇其他位子。\n");
                        }
                    } else {
                        printf("格式錯誤，請重新輸入。\n");
                    }
                }

                if (count > 0) {
                    displaySeats(seats);
                    printf("請確認是否選擇無誤，按任意鍵確認並儲存...\n");
                    getchar();
                    for (i = 0; i < 9; i++) {
                        for (j = 0; j < 9; j++) {
                            if (seats[i][j] == '@') {
                                seats[i][j] = '*';
                            }
                        }
                    }
                }
                system("pause");
                break;
            }
    }
    return 0;
}

