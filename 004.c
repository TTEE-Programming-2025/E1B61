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
                printf("�A��ܤF�G��J���Z\n");
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

	
	
	
