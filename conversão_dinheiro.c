#include <stdio.h>

int A,B,C,D;  //definição das variáveis

int testOne(){

    switch(B){

        case 9: {
            printf("dezenove");
            break;  }

        case 8: {
            printf("dezoito");
            break;  }

        case 7: {
            printf("dezessete");
            break;  }

        case 6: {
            printf("dezesseis");
            break;  }

        case 5: {
            printf("quinze");
            break;  }

        case 4: {
            printf("catorze");
            break;  }

        case 3: {
            printf("treze");
            break;  }

        case 2: {
            printf("doze");
            break;  }

        case 1: {
            printf("onze");
            break;  }

        case 0: {
            printf("dez");
            break;  }

        default: {
            return 0;
            break;   }
    }
}

int testTwo(){

    switch(B){

        case 9: {
            printf(" nove");
            break;  }

        case 8: {
            printf(" oito");
            break;  }

        case 7: {
            printf(" sete");
            break;  }

        case 6: {
            printf(" seis");
            break;  }

        case 5: {
            printf(" cinco");
            break;  }

        case 4: {
            printf(" quatro");
            break;  }

        case 3: {
            printf(" tres");
            break;  }

        case 2: {
            printf(" dois");
            break;  }

        case 1: {
            printf(" um");
            break;}

        case 0: {
            break;  }

        default: {
            return 0;
            break;}
    }
}

int testThree(){

    switch(A){

        case 9: {
            printf("noventa");
            testTwo();
            break;  }

        case 8: {
            printf("oitenta");
            testTwo();
            break;  }

        case 7: {
            printf("setenta");
            testTwo();
            break;  }

        case 6: {
            printf("sessenta");
            testTwo();
            break;  }

        case 5: {
            printf("cinquenta");
            testTwo();
            break;  }

        case 4: {
            printf("quarenta");
            testTwo();
            break;  }

        case 3: {
            printf("trinta");
            testTwo();
            break;  }

        case 2: {
            printf("vinte");
            testTwo();
            break;  }

        case 1: {
            testOne();
            break;  }

        case 0: {
            testTwo();
            break;  }

        default: {
            return 0;   }
    }

}

int main(){

    int X,Y;
    scanf("%d,%d", &X, &Y);
    A = X/10;
    B = X - (A*10);
    C = Y/10;
    D = Y - (C*10);

    printf("%d %d %d %d \n", A,B,C,D);

    testThree();
    printf(" reais e ");
        A = C;
        B = D;
    testThree();
    printf(" centavos.");
}
