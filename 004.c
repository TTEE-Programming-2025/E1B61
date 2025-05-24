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
        printf("�п�J�K�X:");
        scanf("%d",&password);
        getchar();
        n++;
        if(password==2025)
        break;
        if(n<3){
        	printf("�A�Ѿl%d�����|\n",(3-n));
		}else{
			printf("�K�X���~3���A�����{��...");
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
        printf("�п�ܥ\��(a~e): ");
        scanf(" %c", &choice);
        getchar();
        switch (choice) {
            case 'a':
                enterGrades();
                system("pause");
                break;
            case 'b':
                printf("�A��ܤF�G��ܦ��Z\n");
                system("pause");
                break;
            case 'c':
                printf("�A��ܤF�G�j�M���Z\n");
                system("pause");
                break;
            case 'd':
                printf("�A��ܤF�G���Z�ƦW\n");
                system("pause");
                break;
            case 'e':
                printf("�t�ε����A�T�T�I\n");
                break;
            default:
                printf("�L�Ŀﶵ�A�Э��s��J�C\n");
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
        printf("�п�J�ǥͼƶq (5~10): ");
        scanf("%d", &n);
        if (n < 5 || n > 10) {
            printf("��J���~�A�п�J 5 �� 10 ��������ơI\n");
        }
    } while (n < 5 || n > 10);
    studentCount = n;
    for (i = 0; i < n; i++) {
        printf("\n��J�� %d ��ǥ͸�ơG\n", i + 1);
        printf("�m�W�G");
        scanf("%s", students[i].name);
        while (1) {
            printf("�Ǹ��]6 ��ơ^�G");
            scanf("%d", &students[i].id);
            if (students[i].id >= 100000 && students[i].id <= 999999) break;
            printf("���~�G�Ǹ������� 6 ���ơI\n");
        }
        while (1) {
            printf("�ƾǦ��Z�]0~100�^�G");
            scanf("%d", &students[i].math);
            if (students[i].math >= 0 && students[i].math <= 100) break;
            printf("���~�G�п�J 0~100 ���I\n");
        }
        while (1) {
            printf("���z���Z�]0~100�^�G");
            scanf("%d", &students[i].physics);
            if (students[i].physics >= 0 && students[i].physics <= 100) break;
            printf("���~�G�п�J 0~100 ���I\n");
        }
        while (1) {
            printf("�^�妨�Z�]0~100�^�G");
            scanf("%d", &students[i].english);
            if (students[i].english >= 0 && students[i].english <= 100) break;
            printf("���~�G�п�J 0~100 ���I\n");
        }
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0f;
    }
    printf("\n�Ҧ���ƿ�J�����I\n");
    system("pause");
}

	
	
	
