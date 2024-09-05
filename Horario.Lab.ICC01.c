#include <stdio.h>

int main(){

    int hora,min,seg,dur;
    scanf ("%d", &hora);
    scanf ("%d", &min);
    scanf ("%d", &seg);
    scanf ("%d", &dur);

    int a,b,c;
    a = dur%60;
    b = (dur-a)%3600;
    c = (dur-(a+b*60))/3600;

    int x,y,z;
    x = c + hora;
    y = b + min;
    z = a + seg;

    return 0;
}
