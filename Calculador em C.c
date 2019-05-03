
int main()
{
 
    int input,a,b,resultado;
    char option;
 
do{
 
    printf("calculadora:\n");
 
    printf("\nInsira 1 para adicao:\n ");
    printf("Insira 2 para subtracao:\n ");
    printf("Insira 3 para multiplicacao:\n ");
    printf("Insira 4 para divisao:\n ");
 
    scanf("%d",&input);
    printf("Insira um numero:\n");
    scanf("%d",&a);
    printf("Insira outro numero:\n");
    scanf("%d",&b);
 
    switch(input){
        case 1 : resultado=a+b;
                 printf("A adicao e : %d\n",result);
                 break;
        case 2 : resultado=a-b;
                 printf("A Substracao e : %d\n",result);
                 break;
        case 3 : resultado=a*b;
                 printf("A Multiplicacao e : %d\n",result);
                 break;
        case 4 : resultado=a/b;
                 printf("A divisao e : %d\n",result);
                 break;
 
        default: printf("input errado\n");
 
    }
    printf("Quer continuar ? (s/n)\n");
    option=getche();
 
    }while(option=='s');
 
 return 0;
}