//BY: Matheus Nascimento  Data:11/11/14
#include<stdio.h>
#include<stdlib.h>
#define lin 3
#define col 3
int menu_instrucoes();
int jogodavelha();
int vs_maqui();
int menufinal();
int maqui();
main()
{
      menu();
      jogodavelha();
}
int jogodavelha()
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
				printf("%s",nome1);
				printf("\nInforme as coordenadas:\n");
				printf("Linha:");
				scanf("%d",&i);
				printf("Coluna:");
				scanf("%d",&j);
				if(jogo[i-1][j-1]==' ')
                {
                    jogo[i-1][j-1]=O;
                    l++;
                    pj=0;
                }
				else
				{
					pj=1;
				}
			}
			system("cls");

		}
		else//menu segundo jogador
		{
			pj=1;
			while(pj==1)
			{
				printf("%s",nome2);
				printf("\nInforme as coordenadas:\n");
				printf("Linha:");
				scanf("%d",&i);
				printf("Coluna:");
				scanf("%d",&j);
				if(jogo[i-1][j-1]==' ')
                {
                    jogo[i-1][j-1]=X;
                    l++;
                    pj=0;
                }
				else
				{
				    pj=1;
				}
			}
			system("cls");
		}
        if((jogo[0][0]==O && jogo[0][1]==O && jogo[0][2]==O)||(jogo[1][0]==O && jogo[1][1]==O && jogo[1][2]==O)||//casos em q o jogador 1 ganha
           (jogo[2][0]==O && jogo[2][1]==O && jogo[2][2]==O)||(jogo[0][0]==O && jogo[1][0]==O && jogo[2][0]==O)||
           (jogo[0][1]==O && jogo[1][1]==O && jogo[2][1]==O)||(jogo[0][2]==O && jogo[1][2]==O && jogo[2][2]==O)||
           (jogo[0][0]==O && jogo[1][1]==O && jogo[2][2]==O)||(jogo[0][2]==O && jogo[1][1]==O && jogo[2][0]==O))
        {
            printf("\n\t\t\t      %s  - GANHOU!!!\n\n",nome1);
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
	menufinal();
}
int vs_maqui()
{
    int i,j,l=0,pj;
	char jogo[lin][col];
	char O='O',X='X';
	char nome[21];
	for(i=0;i<lin;i++)//atribui ' ' em cada espaço da matriz
	{
        for(j=0;j<col;j++)
        {
			jogo[i][j]=' ';
		}
	}
    printf("\n\t\t\tPlayer - Informe o seu nome: ");//nomes
	scanf("%s",nome);
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
        if (l==0||l==2||l==4||l==6||l==8)//jogadas do jogador
		{
			pj=1;
			while(pj==1)
			{
				printf("%s",nome);
				printf("\nInforme as coordenadas:\n");
				printf("Linha:");
				scanf("%d",&i);
				printf("Coluna:");
				scanf("%d",&j);
				if(jogo[i-1][j-1]==' ')
                {
                    jogo[i-1][j-1]=O;
                    l++;
                    pj=0;
                }
				else
				{
					pj=1;
				}
			}
            system("cls");
		}
		else//jogadas do computador
        {
            if(l==1)
            {

                if(jogo[0][0]==O||jogo[0][2]==O||jogo[2][2]==O||jogo[2][0]==O)
                {
                    jogo[1][1]=X;
                    l++;
                }
                else
                {
                    jogo[0][0]=X;
                    l++;
                }
                system("cls");
            }
            else if(l==3||l==5||l==7||l==9)
            {
                //PARA GANHAR
                if((jogo[0][0]==X)&&(jogo[0][2]==X)&&(jogo[0][1]==' '))
                {
                    jogo[0][1]=X;
                    l++;
                }
                else if((jogo[0][0]==X)&&(jogo[0][1]==X)&&(jogo[0][2]==' '))
                {
                    jogo[0][2]=X;
                    l++;
                }
                else if((jogo[0][2]==X)&&(jogo[0][1]==X)&&(jogo[0][0]==' '))
                {
                    jogo[0][0]=X;
                    l++;
                }
                else if((jogo[0][0]==X)&&(jogo[2][0]==X)&&(jogo[1][0]==' '))
                {
                    jogo[1][0]=X;
                    l++;
                }
                else if((jogo[0][0]==X)&&(jogo[1][0]==X)&&(jogo[2][0]==' '))
                {
                    jogo[2][0]=X;
                    l++;
                }
                else if((jogo[1][0]==X)&&(jogo[2][0]==X)&&(jogo[0][0]==' '))
                {
                    jogo[0][0]=X;
                    l++;
                }
                else if((jogo[2][0]==X)&&(jogo[2][2]==X)&&(jogo[2][1]==' '))
                {
                    jogo[2][1]=X;
                    l++;
                }
                else if((jogo[2][0]==X)&&(jogo[2][1]==X)&&(jogo[2][2]==' '))
                {
                    jogo[2][2]=X;
                    l++;
                }
                else if((jogo[2][1]==X)&&(jogo[2][2]==X)&&(jogo[2][0]==' '))
                {
                    jogo[2][0]=X;
                    l++;
                }
                else if((jogo[2][2]==X)&&(jogo[0][2]==X)&&(jogo[1][2]==' '))
                {
                    jogo[1][2]=X;
                    l++;
                }
                else if((jogo[2][2]==X)&&(jogo[1][2]==X)&&(jogo[0][2]==' '))
                {
                    jogo[0][2]=X;
                    l++;
                }
                else if((jogo[1][2]==X)&&(jogo[0][2]==X)&&(jogo[2][2]==' '))
                {
                    jogo[2][2]=X;
                    l++;
                }
                else if((jogo[0][1]==X)&&(jogo[2][1]==X)&&(jogo[1][1]==' '))
                {
                    jogo[1][1]=X;
                    l++;
                }
                else if((jogo[0][1]==X)&&(jogo[1][1]==X)&&(jogo[2][1]==' '))
                {
                    jogo[2][1]=X;
                    l++;
                }
                else if((jogo[1][1]==X)&&(jogo[2][1]==X)&&(jogo[0][1]==' '))
                {
                    jogo[0][1]=X;
                    l++;
                }
                else if((jogo[1][0]==X)&&(jogo[1][2]==X)&&(jogo[1][1]==' '))
                {
                    jogo[1][1]=X;
                    l++;
                }
                else if((jogo[1][0]==X)&&(jogo[1][1]==X)&&(jogo[1][2]==' '))
                {
                    jogo[1][2]=X;
                    l++;
                }
                else if((jogo[1][1]==X)&&(jogo[1][2]==X)&&(jogo[1][0]==' '))
                {
                    jogo[1][0]=X;
                    l++;
                }
                else if((jogo[0][0]==X)&&(jogo[2][2]==X)&&(jogo[1][1]==' '))
                {
                    jogo[1][1]=X;
                    l++;
                }
                else if((jogo[0][0]==X)&&(jogo[1][1]==X)&&(jogo[2][2]==' '))
                {
                    jogo[2][2]=X;
                    l++;
                }
                else if((jogo[1][1]==X)&&(jogo[2][2]==X)&&(jogo[0][0]==' '))
                {
                    jogo[0][0]=X;
                    l++;
                }
                else if((jogo[0][2]==X)&&(jogo[2][0]==X)&&(jogo[1][1]==' '))
                {
                    jogo[1][1]=X;
                    l++;
                }
                else if((jogo[0][2]==X)&&(jogo[1][1]==X)&&(jogo[2][0]==' '))
                {
                    jogo[2][0]=X;
                    l++;
                }
                else if((jogo[2][0]==X)&&(jogo[1][1]==X)&&(jogo[0][2]==' '))
                {
                    jogo[0][2]=X;
                    l++;
                }
                //PARA ATRAPALHAR
                else if((jogo[0][0]==O)&&(jogo[0][2]==O)&&(jogo[0][1]==' '))
                {
                    jogo[0][1]=X;
                    l++;
                }
                else if((jogo[0][0]==O)&&(jogo[0][1]==O)&&(jogo[0][2]==' '))
                {
                    jogo[0][2]=X;
                    l++;
                }
                else if((jogo[0][2]==O)&&(jogo[0][1]==O)&&(jogo[0][0]==' '))
                {
                    jogo[0][0]=X;
                    l++;
                }
                else if((jogo[0][0]==O)&&(jogo[2][0]==O)&&(jogo[1][0]==' '))
                {
                    jogo[1][0]=X;
                    l++;
                }
                else if((jogo[0][0]==O)&&(jogo[1][0]==O)&&(jogo[2][0]==' '))
                {
                    jogo[2][0]=X;
                    l++;
                }
                else if((jogo[1][0]==O)&&(jogo[2][0]==O)&&(jogo[0][0]==' '))
                {
                    jogo[0][0]=X;
                    l++;
                }
                else if((jogo[2][0]==O)&&(jogo[2][2]==O)&&(jogo[2][1]==' '))
                {
                    jogo[2][1]=X;
                    l++;
                }
                else if((jogo[2][0]==O)&&(jogo[2][1]==O)&&(jogo[2][2]==' '))
                {
                    jogo[2][2]=X;
                    l++;
                }
                else if((jogo[2][1]==O)&&(jogo[2][2]==O)&&(jogo[2][0]==' '))
                {
                    jogo[2][0]=X;
                    l++;
                }
                else if((jogo[2][2]==O)&&(jogo[0][2]==O)&&(jogo[1][2]==' '))
                {
                    jogo[1][2]=X;
                    l++;
                }
                else if((jogo[2][2]==O)&&(jogo[1][2]==O)&&(jogo[0][2]==' '))
                {
                    jogo[0][2]=X;
                    l++;
                }
                else if((jogo[1][2]==O)&&(jogo[0][2]==O)&&(jogo[2][2]==' '))
                {
                    jogo[2][2]=X;
                    l++;
                }
                else if((jogo[0][1]==O)&&(jogo[2][1]==O)&&(jogo[1][1]==' '))
                {
                    jogo[1][1]=X;
                    l++;
                }
                else if((jogo[0][1]==O)&&(jogo[1][1]==O)&&(jogo[2][1]==' '))
                {
                    jogo[2][1]=X;
                    l++;
                }
                else if((jogo[1][1]==O)&&(jogo[2][1]==O)&&(jogo[0][1]==' '))
                {
                    jogo[0][1]=X;
                    l++;
                }
                else if((jogo[1][0]==O)&&(jogo[1][2]==O)&&(jogo[1][1]==' '))
                {
                    jogo[1][1]=X;
                    l++;
                }
                else if((jogo[1][0]==O)&&(jogo[1][1]==O)&&(jogo[1][2]==' '))
                {
                    jogo[1][2]=X;
                    l++;
                }
                else if((jogo[1][1]==O)&&(jogo[1][2]==O)&&(jogo[1][0]==' '))
                {
                    jogo[1][0]=X;
                    l++;
                }
                else if((jogo[0][0]==O)&&(jogo[2][2]==O)&&(jogo[1][1]==' '))
                {
                    jogo[1][1]=X;
                    l++;
                }
                else if((jogo[0][0]==O)&&(jogo[1][1]==O)&&(jogo[2][2]==' '))
                {
                    jogo[2][2]=X;
                    l++;
                }
                else if((jogo[1][1]==O)&&(jogo[2][2]==O)&&(jogo[0][0]==' '))
                {
                    jogo[0][0]=X;
                    l++;
                }
                else if((jogo[0][2]==O)&&(jogo[2][0]==O)&&(jogo[1][1]==' '))
                {
                    jogo[1][1]=X;
                    l++;
                }
                else if((jogo[0][2]==O)&&(jogo[1][1]==O)&&(jogo[2][0]==' '))
                {
                    jogo[2][0]=X;
                    l++;
                }
                else if((jogo[2][0]==O)&&(jogo[1][1]==O)&&(jogo[0][2]==' '))
                {
                    jogo[0][2]=X;
                    l++;
                }
                //PARA PREENCHER
                else
                {
                    if(jogo[0][0]==' ')
                    {
                        jogo[0][0]=X;
                        l++;
                    }
                    else if(jogo[0][2]==' ')
                    {
                        jogo[0][2]=X;
                        l++;
                    }
                    else if(jogo[2][0]==' ')
                    {
                        jogo[2][0]=X;
                        l++;
                    }
                    else if(jogo[2][2]==' ')
                    {
                        jogo[2][2]=X;
                        l++;
                    }
                }
                system("cls");
            }
        }
        if((jogo[0][0]==O && jogo[0][1]==O && jogo[0][2]==O)||(jogo[1][0]==O && jogo[1][1]==O && jogo[1][2]==O)||//casos em q o jogador ganha
           (jogo[2][0]==O && jogo[2][1]==O && jogo[2][2]==O)||(jogo[0][0]==O && jogo[1][0]==O && jogo[2][0]==O)||
           (jogo[0][1]==O && jogo[1][1]==O && jogo[2][1]==O)||(jogo[0][2]==O && jogo[1][2]==O && jogo[2][2]==O)||
           (jogo[0][0]==O && jogo[1][1]==O && jogo[2][2]==O)||(jogo[0][2]==O && jogo[1][1]==O && jogo[2][0]==O))
        {
            printf("\n\t\t\t         %s - GANHOU!!!\n\n",nome);
            system("pause>null");
            break;
        }
        if((jogo[0][0]==X && jogo[0][1]==X && jogo[0][2]==X)||(jogo[1][0]==X && jogo[1][1]==X && jogo[1][2]==X)||//casos em q o jogador perde
           (jogo[2][0]==X && jogo[2][1]==X && jogo[2][2]==X)||(jogo[0][0]==X && jogo[1][0]==X && jogo[2][0]==X)||
           (jogo[0][1]==X && jogo[1][1]==X && jogo[2][1]==X)||(jogo[0][2]==X && jogo[1][2]==X && jogo[2][2]==X)||
           (jogo[0][0]==X && jogo[1][1]==X && jogo[2][2]==X)||(jogo[0][2]==X && jogo[1][1]==X && jogo[2][0]==X))
        {
            printf("\n\t\t\t         %s - PERDEU!!!\n\n",nome);
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
	menufinal();
}
int menufinal()
{
    int i;
    printf("\n\n\n\t\t\t    1 - Para Jogar - 1 Player\n");
    printf("\n\n\n\t\t\t    2 - Para Jogar - 2 Players\n");
    printf("\n\n\n\t\t\t    3 - Para Voltar ao Menu\n");
    printf("\n\n\n\t\t\t    4 - Para Fechar o Jogo\n");
	scanf("%i",&i);
	if(i==1)
    {
        system("cls");
        vs_maqui();
    }
    else if(i==2)
    {
        system("cls");
        jogodavelha();
    }
	else if(i==3)
	{
        system("cls");
        main();
    }
    else if(i==4)
    {
        exit(4);
    }
    else
    {
        system("cls");
        menufinal();
    }
}
int menu()
{

    int o;

    printf("\n\t\t\t            JOGO DA VELHA\n\n");
    printf("\n\n\n\t\t\t      1 - Para Jogar - 1 Player\n");
    printf("\n\n\n\t\t\t      2 - Para Jogar - 2 Players\n");
    printf("\n\n\n\t\t\t          3 - Como Jogar\n");
    printf("\n\n\n\t\t\t             4 - Sair\n");
    scanf("%i",&o);
    if(o==1)
    {
        system("cls");
        vs_maqui();
    }
    if(o==2)
    {
        system("cls");
        jogodavelha();
    }
    else if(o==3)
    {
        system("cls");
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
    else if(o==4)
    {
        exit(4);
    }
    else
    {
        system("cls");
        menu();
    }
}
