#include <stdio.h>
#include <math.h>

int func(int a){
    int k=0, b=0, rez=0;
    for(k=0;a>0;k++){
        b=a%10;
        if(b!=0 && b!=1){
            rez='\0';
            break;
        }
        rez+= b*pow(2,k);
        a/=10;
    }
    return rez;
}

int main(){
    int i=0, n=0;
    printf("сколько хотите написать чисел:\n");
    scanf("%d", &n);
    int mas[n];
   printf("введите числа в двоичной системе:\n");
   for (i=0; i<n; i++){
       scanf("%d", &mas[i]);
   }
    printf("ДВОИЧНАЯ\tДЕСЯТИЧНАЯ\n");
    for(i=0; i<n; i++){
        printf("%8d\t", mas[i]);
        if(func(mas[i]) =='\0'){
            printf("ошибка\n");
        }
        else{
            printf("%8d\n", func(mas[i]));
        }
    }
    return 0;
}

