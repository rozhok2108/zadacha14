#include <stdio.h>
#include <math.h>

int func(int a){
    int k=0, b, rez=0;
    for(k=0;a>0;k++){
        b=a%10;
        rez+= b*pow(2,k);
        a/=10;
    }
    return rez;
}

int main(){
    int i, n;
    char probel[20]; 
    printf("сколько хотите написать чисел:\n");
    scanf("%d", &n);
    int mas[n];
   printf("введите числа в двоичной системе:\n");
   for (i=0; i<n; ++i){
       scanf("%d", &mas[i]);
   }
    printf("ДВОИЧНАЯ\tДЕСЯТИЧНАЯ\n");
    for(i=0; i<n; ++i){
        printf("%8d\t", mas[i]);
        printf("%8d\n", func(mas[i]));
    }
    return 0;
}

