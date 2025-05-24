#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10//最大學生數量為 10
struct Student//定義學生結構 
{
    char name[50];//學生姓名
    char id[10];//學號
    int math;//數學成績
    int physics;//物理成績
    int english;//英文成績
    float average;//平均成績
};
struct Student students[MAX];//學生陣列
int studentCount = 0;//實際輸入的學生數量
void enterGrades();//輸入成績
void displayGrades();//顯示所有成績
void searchGrades();//搜尋學生
void gradeRanking();//成績排名
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
	printf("  #####   ######   ######    ####    ######\n");//顯示個人風格畫面
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
		}//密碼驗證，最多三次
    }while(1);
    do {
        system("cls");//主選單
        printf(" ------------[Grade System]----------\n");
        printf(" | a. Enter student grades           |\n");
        printf(" | b. Display student grades         |\n");
        printf(" | c. Search for student grades      |\n");
        printf(" | d. Grade ranking                  |\n");
        printf(" | e. Exit system                    |\n");
        printf(" ------------------------------------\n");
        printf("請選擇a~e: ");
        scanf(" %c", &choice);
        getchar();
        switch (choice) {
            case 'a':
                enterGrades();//輸入成績
                system("pause");
                break;
            case 'b':
                system("cls");
                displayGrades();//顯示所有成績
                system("pause");
                getchar();
                system("cls");
                break;
            case 'c':
                system("cls");
                searchGrades();//搜尋學生
                system("pause");
                getchar();
                system("cls");
                break;
            case 'd':
                system("cls");
                gradeRanking();//成績排名
                system("pause");
                getchar();
                system("cls");
                break;
            case 'e':{
                char confirm;
                do {
                    printf("確定離開？ (y/n): ");
                    scanf(" %c", &confirm);
                    getchar();
                    if (confirm == 'y' || confirm == 'Y') {
                        printf("系統結束，掰掰！\n");
                        return 0;
                    } else if (confirm == 'n' || confirm == 'N') {
                        break;
                    }//若輸入非 y/n，繼續詢問
                } while (1);
                break;
            }
            default:
                printf("無效選項，請重新輸入。\n");
                system("pause");
                break;
        }
    } while(1);
    return 0;
}
void enterGrades() {//輸入學生資料與成績
    int n,i,j;
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
        while (1) {//檢查學號：6位數字
            printf("學號（6 位數）：");
            scanf("%s", students[i].id);
            if (strlen(students[i].id) == 6) {
                int valid = 1;
                for (j = 0; j < 6; j++) {
                    if (students[i].id[j] < '0' || students[i].id[j] > '9') {
                        valid = 0;
                        break;
                    }
                }
                if (valid) break;
            }
            printf("錯誤：學號必須為 6 位數字！\n");
        }
        while (1) {//輸入成績
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
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0f;//計算平均
    }
    printf("\n所有資料輸入完成！\n");
    system("pause");
}
void displayGrades() {//顯示所有學生的成績
    int i;
    printf("所有學生成績如下：\n");
    printf("-----------------------------------------------------------\n");
    printf("| 姓名          | 學號      | 數學 | 物理 | 英文 | 平均分數 |\n");
    printf("-----------------------------------------------------------\n");
    for (i = 0; i < studentCount; i++) {
        printf("| %-12s | %-8s | %4d | %4d | %4d | %7.1f |\n",
            students[i].name,
            students[i].id,
            students[i].math,
            students[i].physics,
            students[i].english,
            students[i].average);
    }
    printf("-----------------------------------------------------------\n");
}
void searchGrades() {//搜尋學生姓名
    char searchName[50];
    int i, found = 0;
    printf("請輸入要搜尋的學生姓名：");
    scanf("%s", searchName);

    for (i = 0; i < studentCount; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("\n找到學生資料：\n");
            printf("姓名：%s\n", students[i].name);
            printf("學號：%s\n", students[i].id);
            printf("數學：%d\n", students[i].math);
            printf("物理：%d\n", students[i].physics);
            printf("英文：%d\n", students[i].english);
            printf("平均分數：%.1f\n", students[i].average);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\n資料不存在！\n");
    }
}
void gradeRanking() {//排序學生依平均成績
    int i, j;
    struct Student temp[MAX];
    for (i = 0; i < studentCount; i++) {
        temp[i] = students[i];
    }
    for (i = 0; i < studentCount -1; i++) {
        for (j = 0; j < studentCount -1 - i; j++) {
            if (temp[j].average < temp[j+1].average) {
                struct Student t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }
    printf("成績排名如下（依平均分數由高到低）：\n");//顯示排名結果
    printf("-----------------------------------------\n");
    printf("| 姓名          | 學號      | 平均分數    |\n");
    printf("-----------------------------------------\n");
    for (i = 0; i < studentCount; i++) {
        printf("| %-12s | %-8s | %7.1f    |\n",
            temp[i].name,
            temp[i].id,
            temp[i].average);
    }
    printf("-----------------------------------------\n");
}
//心得:在完成這次作業的過程中，我學到了如何運用結構（struct）來儲存學生資料，
//並透過函式來分工完成輸入、查詢、排序等功能。
//過程中遇到的困難包括學號格式驗證與排序他們分別的成績，
//尤其在比對字串及處理使用者輸入時常出現錯誤，需要花時間找出原因並修正
 
