#include <stdio.h>

int main(){

    int inValue,outValue;
    scanf("%d", &inValue);
    outValue = 1;

    for(int i = inValue; i > 1; i--){
        outValue = outValue*inValue;
        inValue--;
    }

    printf("%d", outValue);
    return 0;
}
