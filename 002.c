#include <stdio.h>
#include <stdlib.h>
#include <conio.h>// �ϥ�getch()���
#include <ctype.h>// �B�z�j�p�g�r��
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
	printf("  #####   ######   ######    ####    ######\n");//�ӤH����e�� 
	system("pause");
	//��J�K�X�A�̦h�i�H���դT��
    do{
        printf("��J�K�X:");
        scanf("%d",&password);
        n++;//�W�[���~����
        if(password==2025)
        break;//�p�G�K�X���T�A���X�`��
        if(n<2){
        	printf("�ٳ�%d��\n",(3-n));//��ܳѾl���|
		}else{
			printf("���~�T�������J�F");
            return 0;//�W�L�T�����~�A�h�X�{��
		}
    }
    while(n<3);
    system("cls");//�M����e�e��
    do{
	    printf("( a.�����T���� )\n"); 
	    printf("( b.��ܭ��k�� )\n"); 
	    printf("( c.���� )\n"); 
	    printf("�п�J�r��:\n"); 
        scanf(" %c",&ch);
        switch (ch) 
	    {
            case 'a': 
	        { //��� 'a'�A��ܪ����T����
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
                printf("�����N���^�D���...\n");
                getch();//�����N��
                break;
            }
            case 'b': 
	        {  //��� 'b'�A��ܭ��k�� 
                int i, j;
                for (i = 1; i <= 9; i++)
		        {
                    for (j = 1; j <= 9; j++) {
                        printf("%d��%d = %2d  ", i, j, i * j);
                    }
                    printf("\n");
                }
                printf("�����N���^�D���...\n");
                getch();//�����N��
                break;
            }
            case 'c':{// ��� 'c'�A�߰ݬO�_�~��
				char confirm;
                do {
                    printf("\nContinue? (y/n)�G");
                    scanf(" %c", &confirm);
                    confirm = tolower(confirm);//�N��J�ഫ���p�g�r��
                    if (confirm == 'y') {
                        break;//���s�^��D���
                    } else if (confirm == 'n') {
                        printf("\n�{�������A�P�¨ϥΡI\n");
                        return 0;
                    } else {
                        printf("�L�Ŀ�J�A�п�J y �� n�C\n");//��ܿ��~�T��
                    }
                } while (1);//���_���ƪ���o�즳�Ī���J
                break;
            }
            default:
                printf("�L�Ŀﶵ�A�Э��s��J�C\n");//��ܿ��~�T��
                system("pause");
        } 
    }
        while(1);//�D���`������h�X�{��	
    return 0;
}




//�߱o:�o�����@�~�m�ߤF�h�h switch �Pdo-while ����c�A 
//�b�s�g�{�����L�{���X�F�U�ذ��D:
//��pscanf�ѰO�e���[�Ů�B�S�[ #include <conio.h>�ɭP�sĶ���~�A
//�ӥB�٦bcase'c'���a��d�F�ܤ[�A
//���]���]�p���~������|��ڪ����� 
