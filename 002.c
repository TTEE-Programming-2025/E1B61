#include <stdio.h>
#include <stdlib.h>
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
                break;
            }
            case 'c':
                printf("結束選單\n");
                break;
            default:
                printf("無效選項，請重新輸入。\n");
        } 
    }
        while(ch != 'c');	
    return 0;
}
