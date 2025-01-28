#include <stdio.h>
#include <stdbool.h>
    
//Ejercicios del libro de IP
//6.30 La Criba de Erastotenes
/*
void isAPrimeNumber(int numbers[1000], int n){
    int i;
    numbers[0] = 0;
    for(i = 1; i < n; i++){
        numbers[i] = 1;
    }

    for(i = 2; i < n; i++){
        int j = i+1;
        for(j; j < n; j++){
            if(j % i == 0){
                numbers[j] = 0;
            }
        }

    }

    for(i = 0; i < n; i++){
        if(numbers[i] == 1){
            printf("\nEs primo el numero: %d", i);
        }
    }
}

//VERSION OPTIMIZADA
int countPrimes(int n) {
    long total = 0;
    if(n < 2){
        total = 0;
    }
    else{
        int x[n];
        long i;
        for(i = 0; i < n; i++){
            x[i] = 1;
        }
        for(i = 2; i < n; i++){
            if(x[i] == 1){
                long j = i * i;
                for(j; j < n; j+=i){
                    if(j % i == 0){
                        x[j] = 0; 
                    }
                }
                if(x[i] == 1){
                    total++;
                }
            }   
        }
    }
    return total;
}

*/




int main() {

    int y = 10;

    printf("Primos menores que %d: %d", y, countPrimes(y));
    return 0;
}
