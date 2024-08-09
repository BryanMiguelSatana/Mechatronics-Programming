#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define v 21
#define h 65
#define n 100

typedef struct
{
    int x, y;
    int modx, mody;
    char imagen;
}snk;

typedef struct
{
    int x, y;
}frt;

snk snake [n];
frt fruta;

void inicio( int *tam, char campo[v][h]);
void intro_campo(char campo[v][h]);
void intro_datos(char campo[v][h], int tam);
void draw(char campo[v][h]);
void loop(char[v][h], int tam);
void input(char campo[v][h], int *tam, int *muerto);
void update(char campo[v][h], int tam);
void intro_datos2(char campo[v][h], int tam);
void intro_datos2(char campo[v][h], int tam);

int main()
{
    int tam;
    char campo[v][h];

    inicio(&tam, campo);
    loop(campo, tam);

    system("pause");
    return 0;
}

void inicio( int *tam, char campo[v][h])
{
    int i;
    snake[0].x = 32;
    snake[0].y = 10;

    *tam = 2;

    srand(time(NULL));

    do
    {
        fruta.x = rand() % (h-1);
        fruta.y = rand() % (v-1);
    }while((fruta.x == 0) || (fruta.y ==0));

    for(i=0; i< *tam; i++)
        {
            snake[i].modx = 1;
            snake[i].mody = 0;
        }

        intro_campo(campo);
        intro_datos(campo, *tam);
}

void intro_campo(char campo[v][h])
{
    int i, j;

    for(i=0; i< v; i++)
    {
        for(j=0; j<h; j++)
        {
            if(i == 0 || i == (v-1))
               {
                   campo[i][j] = '-';
               }
            else
                if(j == 0 || j == (h-1))
                {
                    campo [i][j] = '|';
                }
                else
                {
                    campo[i][j] = ' ';
                }
        }
    }
}

void intro_datos(char campo[v][h], int tam)
{
    int i;

    for(i=1; i < tam; i++)
    {
        snake[i].x = snake[i-1].x-1;
        snake[i].y = snake[i-1].y;

        snake[i].imagen = 'x';
    }

    snake[0].imagen = 'O';

    for(i=0; i < tam; i++)
    {
        campo[snake[i].y][snake[i].x] = snake[i].imagen;
    }
    campo[fruta.y][fruta.x] = '%';
}

void draw(char campo[v][h])
{
    int i, j;

    for(i=0; i< v; i++)
    {
        for(j=0; j<h; j++)
        {
            printf("%c", campo[i][j]);
        }
        printf("\n");
    }
}

void loop(char campo[v][h], int tam)
{
    int muerto = 0;

    do
    {
        system("cls");
        draw(campo);
        input(campo, &tam, &muerto);
        update(campo, tam);
    }while(muerto == 0);
}

void input(char campo[v][h], int *tam, int *muerto)
{
    int i;
    char key;

    if(snake[0].x == 0 || snake[0].x == (h-1) || snake[0].y == 0 || snake[0].y == (v-1))
    {
        *muerto = 1;
    }

    for(i=1; (i < *tam) && (*muerto == 0); i++)
    {
        if((snake[0].x == snake[i].x) && (snake[0].y == snake[i].y))
        {
            *muerto = 1;
        }
    }
    if((snake[0].x == fruta.x) && (snake[0].y == fruta.y))
    {
        *tam += 1;
        snake[*tam -1].imagen = 'x';

        do
        {
            fruta.x = rand() % (h-1);
            fruta.y = rand() % ((v-1));
        }
        while((fruta.x == 0) || (fruta.y ==0));
    }

    if(*muerto == 0)
    {
        if(kbhit() == 1)
        {
            key = getch();

            if((key == 's') && (snake[0].mody != -1))
            {
                snake[0].modx = 0;
                snake[0].mody = 1;
            }

            if((key == 'w') && (snake[0].mody != 1))
            {
                snake[0].modx = 0;
                snake[0].mody = -1;
            }
            if((key == 'a') && (snake[0].modx != 1))
            {
                snake[0].modx = -1;
                snake[0].mody = 0;
            }
            if((key == 'd') && (snake[0].modx != -1))
            {
                snake[0].modx = 1;
                snake[0].mody = 0;
            }
        }
    }
}

void update(char campo[v][h], int tam)
{
    intro_campo(campo);

    intro_datos2(campo, tam);
}

void intro_datos2(char campo[v][h], int tam)
{
    int i;

    for(i = (tam-1); i > 0; i--)
    {
        snake[i].x = snake[i-1].x;
        snake[i].y = snake[i-1].y;
    }

    snake[0].x += snake[0].modx;
    snake[0].y += snake[0].mody;

    for(i = 0; i < tam; i++)
    {
        campo[snake[i].y][snake[i].x] = snake[i].imagen;
    }

    campo[fruta.y][fruta.x] = '%';
}
