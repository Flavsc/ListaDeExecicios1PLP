// 4. Diga o resultado das variáveis x, y e z depois da seguinte seqüência de operações:
// int x,y,z;
// x=y=10;
// z=++x;
// x=-x;
// y++;
// x=x+y-(z--);

// Passos:
// int x,y,z;
// VALORES: x = 0, y = 0, z = 0
// x = y = 10;
// VALORES: x = 10, y = 10, z = 0
// z=++x;
// VALORES: x = 11,y = 10, z = 11
// x=-x;
// VALORES: x = -11, y = 10, z = 11
// y++;
// VALORES: x = -11, y = 11, z = 11
// x=x+y-(z--);
// VALORES: x = -11, y = 11, z = 10

// Prova real abaixo:

#include<stdio.h>

int main()
{
    int x, y, z;
    x = y = 10;
    printf("x = %d, y = %d \n", x, y);
    z=++x;
    printf("z = %d, x = %d \n", z, x);
    x=-x;
    printf("x = %d \n", x);
    y++;
    printf("y = %d \n", y);
    x=x+y-(z--);
    printf("x = %d, y = %d, z = %d", x, y, z);
    return 0;
}
