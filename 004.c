#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10//�̤j�ǥͼƶq�� 10
struct Student//�w�q�ǥ͵��c 
{
    char name[50];//�ǥͩm�W
    char id[10];//�Ǹ�
    int math;//�ƾǦ��Z
    int physics;//���z���Z
    int english;//�^�妨�Z
    float average;//�������Z
};
struct Student students[MAX];//�ǥͰ}�C
int studentCount = 0;//��ڿ�J���ǥͼƶq
void enterGrades();//��J���Z
void displayGrades();//��ܩҦ����Z
void searchGrades();//�j�M�ǥ�
void gradeRanking();//���Z�ƦW
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
	printf("  #####   ######   ######    ####    ######\n");//��ܭӤH����e��
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
		}//�K�X���ҡA�̦h�T��
    }while(1);
    do {
        system("cls");//�D���
        printf(" ------------[Grade System]----------\n");
        printf(" | a. Enter student grades           |\n");
        printf(" | b. Display student grades         |\n");
        printf(" | c. Search for student grades      |\n");
        printf(" | d. Grade ranking                  |\n");
        printf(" | e. Exit system                    |\n");
        printf(" ------------------------------------\n");
        printf("�п��a~e: ");
        scanf(" %c", &choice);
        getchar();
        switch (choice) {
            case 'a':
                enterGrades();//��J���Z
                system("pause");
                break;
            case 'b':
                system("cls");
                displayGrades();//��ܩҦ����Z
                system("pause");
                getchar();
                system("cls");
                break;
            case 'c':
                system("cls");
                searchGrades();//�j�M�ǥ�
                system("pause");
                getchar();
                system("cls");
                break;
            case 'd':
                system("cls");
                gradeRanking();//���Z�ƦW
                system("pause");
                getchar();
                system("cls");
                break;
            case 'e':{
                char confirm;
                do {
                    printf("�T�w���}�H (y/n): ");
                    scanf(" %c", &confirm);
                    getchar();
                    if (confirm == 'y' || confirm == 'Y') {
                        printf("�t�ε����A�T�T�I\n");
                        return 0;
                    } else if (confirm == 'n' || confirm == 'N') {
                        break;
                    }//�Y��J�D y/n�A�~��߰�
                } while (1);
                break;
            }
            default:
                printf("�L�Ŀﶵ�A�Э��s��J�C\n");
                system("pause");
                break;
        }
    } while(1);
    return 0;
}
void enterGrades() {//��J�ǥ͸�ƻP���Z
    int n,i,j;
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
        while (1) {//�ˬd�Ǹ��G6��Ʀr
            printf("�Ǹ��]6 ��ơ^�G");
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
            printf("���~�G�Ǹ������� 6 ��Ʀr�I\n");
        }
        while (1) {//��J���Z
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
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0f;//�p�⥭��
    }
    printf("\n�Ҧ���ƿ�J�����I\n");
    system("pause");
}
void displayGrades() {//��ܩҦ��ǥͪ����Z
    int i;
    printf("�Ҧ��ǥͦ��Z�p�U�G\n");
    printf("-----------------------------------------------------------\n");
    printf("| �m�W          | �Ǹ�      | �ƾ� | ���z | �^�� | �������� |\n");
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
void searchGrades() {//�j�M�ǥͩm�W
    char searchName[50];
    int i, found = 0;
    printf("�п�J�n�j�M���ǥͩm�W�G");
    scanf("%s", searchName);

    for (i = 0; i < studentCount; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("\n���ǥ͸�ơG\n");
            printf("�m�W�G%s\n", students[i].name);
            printf("�Ǹ��G%s\n", students[i].id);
            printf("�ƾǡG%d\n", students[i].math);
            printf("���z�G%d\n", students[i].physics);
            printf("�^��G%d\n", students[i].english);
            printf("�������ơG%.1f\n", students[i].average);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\n��Ƥ��s�b�I\n");
    }
}
void gradeRanking() {//�ƧǾǥ̥ͨ������Z
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
    printf("���Z�ƦW�p�U�]�̥������ƥѰ���C�^�G\n");//��ܱƦW���G
    printf("-----------------------------------------\n");
    printf("| �m�W          | �Ǹ�      | ��������    |\n");
    printf("-----------------------------------------\n");
    for (i = 0; i < studentCount; i++) {
        printf("| %-12s | %-8s | %7.1f    |\n",
            temp[i].name,
            temp[i].id,
            temp[i].average);
    }
    printf("-----------------------------------------\n");
}
//�߱o:�b�����o���@�~���L�{���A�ھǨ�F�p��B�ε��c�]struct�^���x�s�ǥ͸�ơA
//�óz�L�禡�Ӥ��u������J�B�d�ߡB�Ƨǵ��\��C
//�L�{���J�쪺�x���]�A�Ǹ��榡���һP�ƧǥL�̤��O�����Z�A
//�ר�b���r��γB�z�ϥΪ̿�J�ɱ`�X�{���~�A�ݭn��ɶ���X��]�íץ�
 
