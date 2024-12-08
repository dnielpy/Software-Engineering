//Funcion para el MCD
int mcd(int x, int y){
    int result = 0;

    //Asegurarme de que x sea el menor
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    int i = x;
    for(i; i > 1 && i != -1; i--){
        if(y % i == 0 && x % i == 0){
            result = i;
            i = -1;
        }
    }

    return result;
}
