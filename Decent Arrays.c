//Decent Arrays


#include <stdio.h>

int main() {
  
    int n;
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }


    int isAscending = 1; 

    for (int i = 1; i < n; ++i) {
        if (numbers[i] < numbers[i - 1]) {
            isAscending = 0;
            break;
        }
    }


    if (isAscending) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
