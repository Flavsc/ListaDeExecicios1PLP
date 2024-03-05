#include<stdio.h>
#include<locale.h>
 

int findConta(int *conta, int cc[1000], int n);
void openConta(int conta, float *saldo, int cc[1000], int *n);
void fazerDeposito(float saldo[1000], int i);
void fazerSaque(float saldo[1000], int i);
void fazerPIX(float saldo[1000], int cc[1000], int n);
void menu(int *p);
float tomaValor(void);
 
int main(void)
{
    setlocale(LC_ALL, "");
    int cc[1000], n=0, i, op, conta;
    float saldo[1000], valor;
 
    for(i=0;i<1000;i++)
    {
       cc[i]= 0 ;
       saldo[i]= 0 ;
    }   
    do{
          menu(&op);
          if(op==1)
          {
             i=findConta(&conta,cc,n);
             if(i!=n) printf("Esta conta-corrente já existe\n");
             else openConta(conta,saldo,cc,&n);
          }
          if(op==2)
          {
             i=findConta(&conta,cc,n);
             if(i==n) printf("Número de conta-corrente inválido\n");
             else printf("Saldo: %.2f\n",saldo[i]);
          }
          if(op==3)
          {
             i=findConta(&conta,cc,n);
             if(i==n) printf("Número de conta-corrente inválido\n");
             else fazerDeposito(saldo,i);
          }
          if(op==4)
          {
             i=findConta(&conta,cc,n);
             if(i==n) printf("Número de conta-corrente inválido\n");
             else fazerSaque(saldo,i);
          }
          if(op==5)
          {
             fazerPIX(saldo, cc, n);
          }
    }while(op!=6);
    printf("Encerrando o programa.\n");
    return 0;
}
 
void menu(int *p){
    setlocale(LC_ALL, "");
    printf("1) Abrir conta\n");
    printf("2) Verificar saldo\n");
    printf("3) Fazer Depósito\n");
    printf("4) Fazer Saque\n");
    printf("5) Fazer PIX\n");
    printf("6) Sair do sistema\n");
    scanf("%d",p);
}
 
int findConta(int *conta, int cc[1000], int n)
{
    setlocale(LC_ALL, "");
    int j;
        
    printf("Número da conta: ");
    scanf("%d",conta); 
    for(j=0;j<n && *conta!=cc[j];j++);
    return j;
}
 
void openConta(int conta, float *saldo, int cc[1000], int *n)
{
    setlocale(LC_ALL, "");
    float valor;

    printf("Valor do depósito inicial: ");
    valor=tomaValor();
    cc[*n]=conta;
    saldo[*n]=valor;
    (*n)++;
    printf("Operação realizada com sucesso\n");
}
 
void fazerDeposito(float saldo[1000], int i)
{
    setlocale(LC_ALL, "");
    float valor;
        
    printf("Valor do depósito: ");
    valor=tomaValor();
    saldo[i]=saldo[i]+valor;
    printf("Operação realizada com sucesso\n");
}

void fazerSaque(float saldo[1000], int i)
{
    setlocale(LC_ALL, "");
    float valor;
        
    printf("Valor do saque: ");
    valor=tomaValor();
    if (valor <= saldo[i]) {
        saldo[i] -= valor;
        printf("Saque realizado com sucesso\n");
    } else {
        printf("Saldo insuficiente\n");
    }
}

void fazerPIX(float saldo[1000], int cc[1000], int n)
{
    setlocale(LC_ALL, "");
    int origem, destino;
    float valor;
        
    printf("Número da conta de origem: ");
    scanf("%d", &origem);
    printf("Número da conta de destino: ");
    scanf("%d", &destino);
    printf("Valor do PIX: ");
    valor = tomaValor();
    int i, j;
    for(i = 0; i < n; i++) {
        if (cc[i] == origem) {
            saldo[i] -= valor;
            printf("PIX realizado com sucesso\n");
        }
        if (cc[i] == destino) {
            saldo[i] += valor;
        }
    }
}

float tomaValor(void)
{
    setlocale(LC_ALL, "");
    float valor;
        
    scanf("%f",&valor);
    while(valor<=0)
    {
        printf("O valor deve ser positivo.\n");
        printf("Valor: ");
        scanf("%f",&valor);
    }
    return valor;
}
