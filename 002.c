#include <stdio.h>
#include <stdlib.h>
#include <conio.h>// 使用getch()函數
#include <ctype.h>// 處理大小寫字母
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
	printf("  #####   ######   ######    ####    ######\n");//個人風格畫面 
	system("pause");
	//輸入密碼，最多可以嘗試三次
    do{
        printf("輸入密碼:");
        scanf("%d",&password);
        n++;//增加錯誤次數
        if(password==2025)
        break;//如果密碼正確，跳出循環
        if(n<2){
        	printf("還剩%d次\n",(3-n));//顯示剩餘機會
		}else{
			printf("錯誤三次不能輸入了");
            return 0;//超過三次錯誤，退出程式
		}
    }
    while(n<3);
    system("cls");//清除當前畫面
    do{
	    printf("( a.直角三角形 )\n"); 
	    printf("( b.顯示乘法表 )\n"); 
	    printf("( c.結束 )\n"); 
	    printf("請輸入字元:\n"); 
        scanf(" %c",&ch);
        switch (ch) 
	    {
            case 'a': 
	        { //選擇 'a'，顯示直角三角形
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
                getch();//按任意鍵
                break;
            }
            case 'b': 
	        {  //選擇 'b'，顯示乘法表 
                int i, j;
                for (i = 1; i <= 9; i++)
		        {
                    for (j = 1; j <= 9; j++) {
                        printf("%d×%d = %2d  ", i, j, i * j);
                    }
                    printf("\n");
                }
                printf("按任意鍵返回主選單...\n");
                getch();//按任意鍵
                break;
            }
            case 'c':{// 選擇 'c'，詢問是否繼續
				char confirm;
                do {
                    printf("\nContinue? (y/n)：");
                    scanf(" %c", &confirm);
                    confirm = tolower(confirm);//將輸入轉換為小寫字母
                    if (confirm == 'y') {
                        break;//重新回到主選單
                    } else if (confirm == 'n') {
                        printf("\n程式結束，感謝使用！\n");
                        return 0;
                    } else {
                        printf("無效輸入，請輸入 y 或 n。\n");//顯示錯誤訊息
                    }
                } while (1);//不斷重複直到得到有效的輸入
                break;
            }
            default:
                printf("無效選項，請重新輸入。\n");//顯示錯誤訊息
                system("pause");
        } 
    }
        while(1);//主選單循環直到退出程式	
    return 0;
}




//心得:這次的作業練習了多層 switch 與do-while 控制結構， 
//在編寫程式的過程中出了各種問題:
//比如scanf忘記前面加空格、沒加 #include <conio.h>導致編譯錯誤，
//而且還在case'c'的地方卡了很久，
//但也正因如此才讓我體會到我的不足 
