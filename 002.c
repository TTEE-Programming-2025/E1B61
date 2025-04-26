#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
int main(void) 
{
    int password,n=0;//宣告變數
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
        printf("輸入密碼:");
        scanf("%d",&password);
        n++;
        if(password==2025)
        break;
        if(n<2){
        	printf("還剩%d次\n",(3-n));
		}else{
			printf("錯誤三次不能輸入了");
            return 0;
		}
    }
    while(n<3);
    system("cls");/*清除當前畫面*/
    do{
	    printf("( a.直角三角形 )\n"); 
	    printf("( b.顯示乘法表 )\n"); 
	    printf("( c.結束 )\n"); 
	    printf("請輸入字元\n"); 
        scanf(" %c",&ch);
        switch (ch) 
	    {
            case 'a': 
	        {
                int i, j, h;
                printf("請輸入三角形的高度: ");
                scanf("%d", &h);
                for (i = 1; i <= h; i++) 
		        {
                    for (j = 1; j <= i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                printf("按任意鍵返回主選單...\n");
                getch();
                break;
            }
            case 'b': 
	        {
                int i, j;
                for (i = 1; i <= 9; i++)
		        {
                    for (j = 1; j <= 9; j++) {
                        printf("%d×%d = %2d  ", i, j, i * j);
                    }
                    printf("\n");
                }
                printf("按任意鍵返回主選單...\n");
                getch();
                break;
            }
            case 'c':{
				char confirm;
                do {
                    printf("\nContinue? (y/n)：");
                    scanf(" %c", &confirm);
                    confirm = tolower(confirm);
                    if (confirm == 'y') {
                        break;
                    } else if (confirm == 'n') {
                        printf("\n程式結束，感謝使用！\n");
                        return 0;
                    } else {
                        printf("無效輸入，請輸入 y 或 n。\n");
                    }
                } while (1);
                break;
            }
            default:
                printf("無效選項，請重新輸入。\n");
                system("pause");
        } 
    }
        while(1);	
    return 0;
}
