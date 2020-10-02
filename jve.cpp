//BY: Matheus Nascimento
#include<stdio.h>
#include<stdlib.h>
#define lin 3
#define col 3

void menu();
void menu_final();
void jogodavelha();
int main(void)
{
    menu();
    jogodavelha();
      return 0;
}
void jogodavelha()
{
	int i,j,l=0,pj;
	char jogo[lin][col];
	char O='O',X='X';
	char nome1[21],nome2[21];
	for(i=0;i<lin;i++)//atribui ' ' em cada espaço da matriz
	{
		for(j=0;j<col;j++)
     	{
			jogo[i][j]=' ';
		}
	}
	printf("\n\t\t\tPlayer 1 - Informe o seu nome: ");//nomes
	scanf("%s",nome1);
	printf("\n\t\t\tPlayer 2 - Informe o seu nome: ");
	scanf("%s",nome2);
	system("cls");
	while(l<=9)//loop
	{
        printf("\t\t\t\t  JOGO DA VELHA\n\n");
		for(i=0;i<lin;i++)//mostrador da tabela
        {
            printf("\t\t\t\t   %c \xBA %c \xBA %c\n",jogo[i][0],jogo[i][1],jogo[i][2]);
            if(i<3-1)
            {
                printf("\t\t\t\t  ÍÍÍ\xCEÍÍÍ\xCEÍÍÍ\n");
            }
		}
        if (l%2==0)//menu primeiro jogador
		{
			pj=1;
			while(pj==1)
			{
				pj=1;
				printf("%s",nome1);
				printf("\nInforme as coordenadas:\n");
				printf("Linha:");
				scanf("%d",&i);
				printf("Coluna:");
				scanf("%d",&j);
				if((i==' ')&&(j==' '))
                {
                    pj=0;
                }
				else if((i>3)&&(j>3))
				{
					pj=0;
				}
				else
				{
					pj=0;
				}
			}
			system("cls");

		}
		else//menu segundo jogador
		{
			pj=1;
			while(pj==1)
			{
				pj=1;
				printf("%s",nome2);
				printf("\nInforme as coordenadas:\n");
				printf("Linha:");
				scanf("%d",&i);
				printf("Coluna:");
				scanf("%d",&j);
                if((i==' ')&&(j==' '))
                {
                    pj=0;
                }
				else if((i>3)&&(j>3))
				{
					pj=0;
				}
				else
				{
				    pj=0;
				}
			}
			system("cls");
		}
		if(jogo[i-1][j-1]==' ')//atribuidor de X e O na tabela
		{
        	if(l%2==0)
            jogo[i-1][j-1]=O;
            else
            jogo[i-1][j-1]=X;
            l++;
        }
        if((jogo[0][0]==O && jogo[0][1]==O && jogo[0][2]==O)||(jogo[1][0]==O && jogo[1][1]==O && jogo[1][2]==O)||//casos em q o jogador 1 ganha
           (jogo[2][0]==O && jogo[2][1]==O && jogo[2][2]==O)||(jogo[0][0]==O && jogo[1][0]==O && jogo[2][0]==O)||
           (jogo[0][1]==O && jogo[1][1]==O && jogo[2][1]==O)||(jogo[0][2]==O && jogo[1][2]==O && jogo[2][2]==O)||
           (jogo[0][0]==O && jogo[1][1]==O && jogo[2][2]==O)||(jogo[0][2]==O && jogo[1][1]==O && jogo[2][0]==O))
        {
            printf("\n\t\t\t      %s - GANHOU!!!\n\n",nome1);
            system("pause>null");
            break;
        }
        if((jogo[0][0]==X && jogo[0][1]==X && jogo[0][2]==X)||(jogo[1][0]==X && jogo[1][1]==X && jogo[1][2]==X)||//casos em q o jogador 2 ganha
           (jogo[2][0]==X && jogo[2][1]==X && jogo[2][2]==X)||(jogo[0][0]==X && jogo[1][0]==X && jogo[2][0]==X)||
           (jogo[0][1]==X && jogo[1][1]==X && jogo[2][1]==X)||(jogo[0][2]==X && jogo[1][2]==X && jogo[2][2]==X)||
           (jogo[0][0]==X && jogo[1][1]==X && jogo[2][2]==X)||(jogo[0][2]==X && jogo[1][1]==X && jogo[2][0]==X))
        {
            printf("\n\t\t\t      %s - GANHOU!!!\n\n",nome2);
            system("pause>null");
            break;
        }
        if(l==9)//empate
        {
            printf("\n\t\t\t      PARTIDA EMPATADA");
            system("pause>null");
            break;
        }
    }
	menu_final();
}
void menu_final()
{
	int i;
    printf("\n\n\n\t\t\t   1 - Para Jogar Novamente\n");
    printf("\n\n\n\t\t\t   2 - Para Voltar ao Menu\n");
    printf("\n\n\n\t\t\t   3 - Para Fechar o Jogo\n");
	scanf("%i",&i);
	if(i==1)
    {
        system("cls");
        jogodavelha();
    }
	if(i==2)
	{
        system("cls");
        main();
    }
    if(i==3)
    {
        exit(3);
    }
    if(i>2)
    {
        system("cls");
        menu_final();
    }
}
void menu()
{
    int o;

    printf("\t\t\t\t  JOGO DA VELHA\n\n");
    printf("\t\t\t\t  1 - Para Jogar\n");
    printf("\t\t\t\t  2 - Como Jogar\n");
    printf("\t\t\t\t  3 - Sair\n");
    scanf("%i",&o);
    if(o==1)
    {
        system("cls");
        jogodavelha();
    }
    if(o==2)
    {
        printf("\nPara jogar basta informar a posicao que voce deseja marcar:\n\n");
        printf("\t\t\t1,1 | 1,2 | 1,3\n");
        printf("\t\t\t----|-----|----\n");
        printf("\t\t\t2,1 | 2,2 | 2,3\n");
        printf("\t\t\t----|-----|----\n");
        printf("\t\t\t3,1 | 3,2 | 3,3\n");
        system("pause>null");
        system("cls");
        main();
    }
    if(o==3)
    {
        exit(3);
    }
    if(o>3)
    {
        system("cls");
        menu();
    }
}
