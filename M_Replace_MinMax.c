#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    int minIdx = 0, maxIdx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
        
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
    }
    
    int temp = arr[minIdx];
    arr[minIdx] = arr[maxIdx];
    arr[maxIdx] = temp;
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}