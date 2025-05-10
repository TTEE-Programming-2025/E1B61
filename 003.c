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
        case 'b':
		{
            int need;
            int found = 0;
            int i,j,k;
            printf("�ݭn�X�Ӯy��H(1~4): ");
            scanf("%d", &need);
            getchar();
            if (need < 1 || need > 4) 
			{
                printf("��J���~�C\n");
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
                        printf("��ĳ�y�쬰�� %d �C�A�� %d �� %d ��\n", i + 1, j + 1, j + need);
                        for (k = 0; k < need; k++) {
                            seats[i][j + k] = '@';
                        }
                        displaySeats(seats);
                        printf("�O�_�����w�ơH(y/n): ");
                        char confirm;
                        scanf(" %c", &confirm);
                        getchar();
                        if (confirm == 'y' || confirm == 'Y') {
                            for (k = 0; k < need; k++) {
                                seats[i][j + k] = '*';
                            }
                            printf("�w�T�{�y��C\n");
                        } else {
                            for (k = 0; k < need; k++) {
                                seats[i][j + k] = '-';
                            }
                            printf("�w�����w�ơC\n");
                        }
                        found = 1;
                        break;
                    }
                }
            }

                if (!found) {
                    printf("�䤣��s�� %d �ӪŦ�C\n", need);
                }

                system("pause");
                break;
            }

            case 'c': {
                int count = 0;
                char input[10];
                int row, col;

                while (1) {
                    printf("�п�J�y��]�榡�G�C-��A�p 2-3�^�A��J done ����: ");
                    scanf("%s", input);

                    if (strcmp(input, "done") == 0) break;

                    if (sscanf(input, "%d-%d", &row, &col) == 2) {
                        if (row < 1 || row > 9 || col < 1 || col > 9) {
                            printf("�W�X�d��A�Э��s��J�C\n");
                            continue;
                        }

                        if (seats[9 - row][col - 1] == '-') {
                            seats[9 - row][col - 1] = '@';
                            count++;
                        } else {
                            printf("�y��w�Q���ΡA�п�ܨ�L��l�C\n");
                        }
                    } else {
                        printf("�榡���~�A�Э��s��J�C\n");
                    }
                }

                if (count > 0) {
                    displaySeats(seats);
                    printf("�нT�{�O�_��ܵL�~�A�����N��T�{���x�s...\n");
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

