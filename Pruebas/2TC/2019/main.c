#include <stdio.h>
#include <stdbool.h>

int mcd(int x, int y){

    int mcd = 0;

    //Organizar para que x sea el menor
    if(x > y){
        int z = x;
        x = y;
        y = z;
    }

    int i = 2;
    for(i; i <= x; i++){
        if(x % i == 0 && y % i == 0){
            mcd = i;
        }
    }

    return mcd;
}

int main() {
    printf("%d", mcd(4, 9));
}
