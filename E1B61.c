#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int password,key=2025;//宣告變數 
	char Char;//宣告字元 
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
	printf("請輸入4位數字密碼:");
	scanf("%d",&password);//輸入密碼 
	if(password !=key){
		printf("密碼錯誤，程式結束\n");
		printf("%c",'\a');
		return 0;//密碼錯誤，程式結束
	}
	//密碼正確，顯示歡迎訊息 
	printf("歡迎，密碼正確\n");
	system("cls");//清除螢幕 
	printf("'A'...'Z':Uppercase\n");
	printf("'a'...'z':Lowercase\n");
	printf("'0'...'9':Digit\n");
	printf("Othercase:E1B61張介誠\n");
	printf("請輸入1個字元:");//輸入1字元 
	scanf(" %c",&Char);
	//判斷輸入的字元 
	if(Char>='A'&&Char<='Z'){
		printf("Uppercase\n");
	} else if(Char>='a'&&Char<='z'){
		printf("Lowercase\n");
	} else if(Char>='0'&&Char<='9'){
		printf("Digit\n");
	} else {
		printf("E1B61張介誠\n");
	}
	system("pause");
	return 0;
}//心得:此次作業在編寫程式上花的時間不算太多，反而是花了許多時間在了解git如何操作，希望下次使用能更熟練 
