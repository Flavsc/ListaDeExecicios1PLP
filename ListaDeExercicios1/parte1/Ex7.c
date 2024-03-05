// 7. Diga se as seguintes expressões serão verdadeiras ou falsas:
// ((10>5)||(5>10))
// (!(5==6)&&(5!=6)&&((2>1)||(5<=4)))

// ((10>5)||(5>10)) = Verdadeira
// (!(5==6)&&(5!=6)&&((2>1)||(5<=4))) = Verdadeira

// Prova real abaixo:

#include <stdio.h>

int main() {
    int exp1 = (10 > 5) || (5 > 10);
    printf("%s\n", exp1 ? "True" : "False");

    int exp2 = (!(5 == 6) && (5 != 6) && ((2 > 1) || (5 <= 4)));
    printf("%s\n", exp2 ? "True" : "False");

    return 0;
}
