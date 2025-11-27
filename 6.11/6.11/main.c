#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {

        swapped = 0;  // 每回合開始前設為 0

        // (a) 每回合比較次數遞減
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;  // 有交換
            }
        }

        // (b) 如果沒有任何交換 → 資料已排序好 → 提前結束
        if (swapped == 0)
            break;
    }
}

int main()
{
    int data[] = { 5, 2, 9, 1, 5, 6 };
    int n = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, n);

    for (int i = 0; i < n; i++)
        printf("%d ", data[i]);

    return 0;
}
