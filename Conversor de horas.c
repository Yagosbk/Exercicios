#include <stdio.h>

int main() {

    int idade,anos,meses,dias;
    scanf("%d", &idade);
    anos = (idade/365);
    meses = (idade-(anos*365))/12;
    dias = (idade-(anos*365)-(meses*12));
    scanf("%d ano\n %d mes\n %d dia",anos,meses,dias);
    return 0;
}
