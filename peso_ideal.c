#include <stdio.h>

int main()
{
    float heightValue,genderType,idealWeight;   // peso em kg
    scanf("%f", &heightValue);                  // altura em metro (utilizar "." para separar a casa decimal
    scanf("%f", &genderType);                   // 1 para mulheres e 2 para homens

    if (genderType == 1){
        idealWeight = ((62.1*heightValue)-44.7);
        printf("%.2f", idealWeight);
        return 0;
    }

    else if (genderType == 2){
        idealWeight = ((72.7*heightValue)-58.0);
        printf("%.2f", idealWeight);
        return 0;
    }
}
