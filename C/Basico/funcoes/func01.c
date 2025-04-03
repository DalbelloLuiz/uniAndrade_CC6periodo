#include <stdio.h>

// int main(int argc, char *argv[]){
//     argc = 3;
//     for(int i=0; i < argc; i++){
//         printf("Arg[%i] %s\n", i, argv[i]);
//     }
//     return 0;
// }

// float intToFloat (int n){
//     return n;
// }

// void halfConvert (int n){
//     intToFloat(n);
//     n = n * 0.5;
//     printf("Metade %.2f\n", n);
// }

// int main(){
//     halfConvert(3);
//     return 0;
// }

typedef struct 
{
    char name[MAX_STR];
    float power;
    int lives;
    bool alive;
};
