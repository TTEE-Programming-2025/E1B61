#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) 
{
    int password,n=0;
    char choice;
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
        printf("請輸入密碼:");
        scanf("%d",&password);
        getchar();
        n++;
        if(password==2025)
        break;
        if(n<3){
        	printf("你剩餘%d次機會\n",(3-n));
		}else{
			printf("密碼錯誤3次，結束程式...");
            return 0;
		}
    }while(1);
    do {
        system("cls");
        printf(" ------------[Grade System]----------\n");
        printf(" | a. Enter student grades           |\n");
        printf(" | b. Display student grades         |\n");
        printf(" | c. Search for student grades      |\n");
        printf(" | d. Grade ranking                  |\n");
        printf(" | e. Exit system                    |\n");
        printf(" ------------------------------------\n");
        printf("請選擇功能(a~e): ");
        scanf(" %c", &choice);
        getchar();
        switch (choice) {
            case 'a':
                printf("你選擇了：輸入成績\n");
                system("pause");
                break;
            case 'b':
                printf("你選擇了：顯示成績\n");
                system("pause");
                break;
            case 'c':
                printf("你選擇了：搜尋成績\n");
                system("pause");
                break;
            case 'd':
                printf("你選擇了：成績排名\n");
                system("pause");
                break;
            case 'e':
                printf("系統結束，掰掰！\n");
                break;
            default:
                printf("無效選項，請重新輸入。\n");
                system("pause");
                break;
        }
    } while (choice != 'e');
    return 0;
}

	
	
	
