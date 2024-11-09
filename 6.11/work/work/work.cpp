#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, tmp;
    int a[5] = { 26, 5, 81, 7, 63 };
    int n = 5;

    //改進一
    /*for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n-1-i; j++){
            if (a[j] > a[j + 1]){
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        printf("Loop %d: ", i);
        for (j = 0; j < 5; j++)
            printf("%4d", a[j]);
        printf("\n");
    }*/

    //改進二
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;  // 每輪開始時重設為 0
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // 交換相鄰元素
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }

        printf("Loop %d: ", i);
        for (j = 0; j < n; j++)
            printf("%4d", a[j]);
        printf("\n");

        for (int x = 0; x < n - 1; x++) {
            if (a[x] > a[x + 1])  //左數曾經有沒有>右數
                swapped = 1;    
        }

        if (!swapped)
            break;
    }

    system("pause");
}
