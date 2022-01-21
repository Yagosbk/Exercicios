#include <stdio.h>

int main() {

    int idade,anos,meses,dias;
    scanf("%d", &idade);
    anos = (idade/365);
    meses = (idade-(anos*365))/30;
    dias = (idade-(anos*365)-(meses*30));
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,dias);
    return 0;
}
