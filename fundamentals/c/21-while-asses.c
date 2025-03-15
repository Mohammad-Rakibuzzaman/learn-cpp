#include <stdio.h>

int main() {

    int i = 0, num;
    while (i < 6){
        i++;
        scanf("%d", &num);
        
        if(num  <= 0){
            break;
        } else if(num < 100) {
            num = num * num;
            printf("%d ", num);
        }

    }

    return 0;
}