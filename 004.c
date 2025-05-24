#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
struct Student 
{
    char name[50];
    int id;
    int math;
    int physics;
    int english;
    float average;
};
struct Student students[MAX];
int studentCount = 0;
void enterGrades();
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
                enterGrades();
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
void enterGrades() {
    int n,i;
    system("cls");
    do {
        printf("請輸入學生數量 (5~10): ");
        scanf("%d", &n);
        if (n < 5 || n > 10) {
            printf("輸入錯誤，請輸入 5 到 10 之間的整數！\n");
        }
    } while (n < 5 || n > 10);
    studentCount = n;
    for (i = 0; i < n; i++) {
        printf("\n輸入第 %d 位學生資料：\n", i + 1);
        printf("姓名：");
        scanf("%s", students[i].name);
        while (1) {
            printf("學號（6 位數）：");
            scanf("%d", &students[i].id);
            if (students[i].id >= 100000 && students[i].id <= 999999) break;
            printf("錯誤：學號必須為 6 位整數！\n");
        }
        while (1) {
            printf("數學成績（0~100）：");
            scanf("%d", &students[i].math);
            if (students[i].math >= 0 && students[i].math <= 100) break;
            printf("錯誤：請輸入 0~100 分！\n");
        }
        while (1) {
            printf("物理成績（0~100）：");
            scanf("%d", &students[i].physics);
            if (students[i].physics >= 0 && students[i].physics <= 100) break;
            printf("錯誤：請輸入 0~100 分！\n");
        }
        while (1) {
            printf("英文成績（0~100）：");
            scanf("%d", &students[i].english);
            if (students[i].english >= 0 && students[i].english <= 100) break;
            printf("錯誤：請輸入 0~100 分！\n");
        }
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0f;
    }
    printf("\n所有資料輸入完成！\n");
    system("pause");
}

	
	
	
