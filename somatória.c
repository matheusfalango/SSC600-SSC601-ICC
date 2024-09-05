#include <stdio.h>

//    int main(){

//    int x,y,soma;
//    scanf("%d", &x);
//    scanf("%d", &y);

//    if(x==y){soma=x;}
//    else{soma = ((x+y)*((y-x)+1))/2;}
//    printf("%d", soma);
//}

int main()
{
    int x, y, total = 0;
    scanf("%d\n%d", &x, &y);
    for(int count = x; count<=y; count++){
        total += count;
    }
    printf("%d", total);
}

