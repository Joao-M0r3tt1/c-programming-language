/*
en-US: EXERCISE_09.C - Exercise 09. Printing Pattern Using Loops
- Statement: Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.
Ex.:
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   

- Input Format: The input will contain a single integer n.
- Constraints: 1 <= n <= 1000
_____________________________________________________________________________________________________________________
*/

#include <stdio.h>

int main(void) {
    int n=3, limit, x, mid, a;

    //scanf("%d", &n);
    limit = (n * 2) - 1;
    mid = n-1;
    a = x = n;

    for(int i = 0; i < limit; i++) {
        for(int j = 0; j < limit; j++) {
            i > 0 && i <= limit-mid && j > 0 && j < n && (i >= j) ? x--: x;

            i > 0 && i <= limit-mid && (j > n || i == mid) && (i < j) ? x++: x;
            
            printf("%d ", x);
            //(i > n) ? x-- : x++;
        }
        puts("");
    }
    
    return 0;
}





// #include <stdio.h>

// int main(void) {
//     int n=2, limit, x;

//     //scanf("%d", &n);
//     limit = (n * 2) - 1;
//     x = n;

//     for(int i = limit; i > 0; i--) {
//         printf("%d ", n);
//         for(int j = ((n%2 == 0) ? (n - 1) : n); j > 0; j--)
//             printf("%d ", x);
//         (x != (n / 2)) ? x-- : x++;
//         printf("%d\n", n);
//     }
    
//     return 0;
// }