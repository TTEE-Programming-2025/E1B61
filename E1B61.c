#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int password,key=2025;//�ŧi�ܼ� 
	char Char;//�ŧi�r�� 
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
	printf("�п�J4��Ʀr�K�X:");
	scanf("%d",&password);//��J�K�X 
	if(password !=key){
		printf("�K�X���~�A�{������\n");
		printf("%c",'\a');
		return 0;//�K�X���~�A�{������
	}
	//�K�X���T�A����w��T�� 
	printf("�w��A�K�X���T\n");
	system("cls");//�M���ù� 
	printf("'A'...'Z':Uppercase\n");
	printf("'a'...'z':Lowercase\n");
	printf("'0'...'9':Digit\n");
	printf("Othercase:E1B61�i����\n");
	printf("�п�J1�Ӧr��:");//��J1�r�� 
	scanf(" %c",&Char);
	//�P�_��J���r�� 
	if(Char>='A'&&Char<='Z'){
		printf("Uppercase\n");
	} else if(Char>='a'&&Char<='z'){
		printf("Lowercase\n");
	} else if(Char>='0'&&Char<='9'){
		printf("Digit\n");
	} else {
		printf("E1B61�i����\n");
	}
	system("pause");
	return 0;
}//�߱o:�����@�~�b�s�g�{���W�᪺�ɶ�����Ӧh�A�ϦӬO��F�\�h�ɶ��b�F��git�p��ާ@�A�Ʊ�U���ϥί����m 
