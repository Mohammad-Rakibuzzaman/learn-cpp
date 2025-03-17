// #include<stdio.h>
// int main() {
//     int iterator = 1;
//     while (iterator <= 5) {
//         printf("%d\n", iterator);
//         iterator++;
//     }
//     return 0;
// }

// #include<stdio.h> 
// int main() { 
//     for(int i = 1; i <= 5; i++ ){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int n;
//     int sum = 0;
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++){
//         sum += i;
//     }
//     printf("%d", sum);


//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
    
//     int i = 5;
//     for (;;) {
//         if (i < 1) {
//             break;
//         }
//         printf("%d ", i);
//         i--;
//     }
//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
    
//     int n;
//     int sum = 0;

//     for(int i = 0; i < 10; i++) {
//         scanf("%d ", &n);


//         if (n > 0) {
//             sum += n;
//         } else {
//             break;
//         }
//     }

//     // int i = 0;
//     // while (i < 10) {
//     //     scanf("%d ", &n);

//     //     if (n > 0) {
//     //         sum += n;
//     //     } else {
//     //         break;
//     //     }


//     //     i++;
//     // }

//     printf("%d", sum);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int sum = 0;

    for (int i=0; i < 10; i++) {
        int n;
        scanf("%d", &n);    

        if (n >= 0) {
            sum += n;
        } else {
            continue;
        }

    }

    printf("%d", sum);

    return 0;
}
