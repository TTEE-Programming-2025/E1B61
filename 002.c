#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    int password,n=0;//�ŧi�ܼ�
    char ch;
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
        n++;
        if(password==2025)
        break;
        if(n<2){
        	printf("�ٳ�%d��\n",(3-n));
		}else{
			printf("���~�T�������J�F");
            return 0;
		}
    }
    while(n<3);
    system("cls");/*�M����e�e��*/
    do{
	    printf("( a.�����T���� )\n"); 
	    printf("( b.��ܭ��k�� )\n"); 
	    printf("( c.���� )\n"); 
	    printf("�п�J�r��\n"); 
        scanf(" %c",&ch);
        switch (ch) 
	    {
            case 'a': 
	        {
                int i, j, h;
                printf("�п�J�T���Ϊ�����: ");
                scanf("%d", &h);
                for (i = 1; i <= h; i++) 
		        {
                    for (j = 1; j <= i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;
            }
            case 'b': 
	        {
                int i, j;
                for (i = 1; i <= 9; i++)
		        {
                    for (j = 1; j <= 9; j++) {
                        printf("%d��%d = %2d  ", i, j, i * j);
                    }
                    printf("\n");
                }
                break;
            }
            case 'c':
                printf("�������\n");
                break;
            default:
                printf("�L�Ŀﶵ�A�Э��s��J�C\n");
        } 
    }
        while(ch != 'c');	
    return 0;
}
