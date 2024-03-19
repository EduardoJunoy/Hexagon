#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define T 49
#define S 7
#define O 0

//FUNCIÓN PARA IMPRIMIR TABLERO
void imprimir_tablero(int *tablero)
{
    printf("        %d        \n      %d   %d      \n        %d        \n  %d   %d   %d   %d  \n%d   %d   %d   %d   %d\n  %d           %d  \n%d   %d   %d   %d   %d\n  %d   %d   %d   %d  \n        %d        \n  %d   %d   %d   %d  \n%d   %d   %d   %d   %d\n  %d           %d  \n%d   %d   %d   %d   %d\n  %d   %d   %d   %d  \n        %d        \n      %d   %d      \n        %d        \n", tablero[8], tablero[7], tablero[9], tablero[11], tablero[1], tablero[10], tablero[12], tablero[15], tablero[0], tablero[2], tablero[13], tablero[14], tablero[16], tablero[4], tablero[18], tablero[3], tablero[5], tablero[29], tablero[17], tablero[19], tablero[6], tablero[28], tablero[30], tablero[20], tablero[32], tablero[22], tablero[31], tablero[33], tablero[36], tablero[21], tablero[23], tablero[34], tablero[35], tablero[37], tablero[25], tablero[39], tablero[24], tablero[26], tablero[43], tablero[38], tablero[40], tablero[27], tablero[42], tablero[44], tablero[41], tablero[46], tablero[45], tablero[47], tablero[48]);

    /*ANTERIOR FUNCIÓN:
    int i;

    for ( i = 0; i < T; i++)
    {
        printf("%d ", tablero[i]);
        if ((i+1)%7==O && i!=0) printf("\n");        
    }*/
}

//FUNCION PARA ESCANEAR UN NÚMERO Y COMPROBAR QUE ESTÁ DENTRO DE UN INTERVALO
int escanear_comprobar(int *x, int y)
{
    scanf("%d", x);

    for (;(*x)<O || (*x)>=y;)
    {
        printf("Debe ser un numero del 0 al %d:\n", y-1);
        scanf("%d", x);
    }
    return *x;
}

int main(){
    int i, j, k, x, y, *tablero;

//RESERVA DINÁMICA DE MEMORIA
    tablero = (int*)calloc(T, sizeof(int));
    if (tablero==NULL)
    {
        printf("Ha habido un error en la reselva dinamica de memoria.\n");
    }

//PRIMERA FICHA
    do
    {
        printf("Bienvenido a HEXAGON. En que posicion quiere poner la primera ficha?:\n");
        escanear_comprobar(&x,T);
        tablero[x]=-1;
        imprimir_tablero(tablero);

    } while (x<O || x>=T);

//COLOCACIÓN DE FICHAS
    for (i = 0; i < T; i++)
    {
        /*//REGIONES
        for (j = 0; i < S; j++)
        {
            if (tablero[j+0]!=0&&tablero[j+1]!=0&&tablero[j+2]!=0&&tablero[j+3]!=0&&tablero[j+4]!=0&&tablero[j+5]!=0&&tablero[j+6]!=0)
            {
                if (tablero[j+0]+tablero[j+1]+tablero[j+2]+tablero[j+3]+tablero[j+4]+tablero[j+5]+tablero[j+6] > 0)
                {
                    for (k = 0; k < S; k++)
                    {
                        tablero[j]=1;
                    }
                }
                else if (tablero[j+0]+tablero[j+1]+tablero[j+2]+tablero[j+3]+tablero[j+4]+tablero[j+5]+tablero[j+6] < 0)
                {
                    for (k = 0; k < S; k++)
                    {
                        tablero[j]=-1;
                    }
                }
            }
        }
        
        //ANILLO 1
        if (tablero[5]!=0 && tablero[6]!=0 && tablero[28]!=0 && tablero[31]!=0 && tablero[23]!=0 && tablero[22]!=0)
        {
            if (tablero[5]+tablero[6]+tablero[28]+tablero[31]+tablero[23]+tablero[22] > 0)
            {
                tablero[5]=1;
                tablero[6]=1;
                tablero[28]=1;
                tablero[31]=1;
                tablero[23]=1;
                tablero[22]=1;
            }
            else if (tablero[5]+tablero[6]+tablero[28]+tablero[31]+tablero[23]+tablero[22] < 0)
            {
                tablero[5]=-1;
                tablero[6]=-1;
                tablero[28]=-1;
                tablero[31]=-1;
                tablero[23]=-1;
                tablero[22]=-1;
            }
            imprimir_tablero(tablero);
        }
        //ANILLO 2
        else if (tablero[2]!=0 && tablero[5]!=0 && tablero[10]!=0 && tablero[13]!=0 && tablero[28]!=0 && tablero[29]!=0)
        {
            if (tablero[2]+tablero[5]+tablero[10]+tablero[13]+tablero[28]+tablero[29] > 0)
            {
                tablero[2]=1;
                tablero[5]=1;
                tablero[10]=1;
                tablero[13]=1;
                tablero[28]=1;
                tablero[29]=1;
            }
            else if (tablero[2]+tablero[5]+tablero[10]+tablero[13]+tablero[28]+tablero[29] < 0)
            {
                tablero[2]=-1;
                tablero[5]=-1;
                tablero[10]=-1;
                tablero[13]=-1;
                tablero[28]=-1;
                tablero[29]=-1;
            }
            imprimir_tablero(tablero);
        }
        //ANILLO 3
        else if (tablero[12]!=0 && tablero[13]!=0 && tablero[14]!=0 && tablero[17]!=0 && tablero[29]!=0 && tablero[30]!=0)
        {
            if (tablero[12]+tablero[13]+tablero[14]+tablero[17]+tablero[29]+tablero[30] > 0)
            {
                tablero[12]=1;
                tablero[13]=1;
                tablero[14]=1;
                tablero[17]=1;
                tablero[29]=1;
                tablero[30]=1;
            }
            else if (tablero[12]+tablero[13]+tablero[14]+tablero[17]+tablero[29]+tablero[30] < 0)
            {
                tablero[12]=-1;
                tablero[13]=-1;
                tablero[14]=-1;
                tablero[17]=-1;
                tablero[29]=-1;
                tablero[30]=-1;
            }
            imprimir_tablero(tablero);
        }
        //ANILLO 4
        else if (tablero[17]!=0 && tablero[20]!=0 && tablero[30]!=0 && tablero[33]!=0 && tablero[35]!=0 && tablero[36]!=0)
        {
            if (tablero[17]+tablero[20]+tablero[30]+tablero[33]+tablero[35]+tablero[36] > 0)
            {
                tablero[17]=1;
                tablero[20]=1;
                tablero[30]=1;
                tablero[33]=1;
                tablero[35]=1;
                tablero[36]=1;
            }
            else if (tablero[17]+tablero[20]+tablero[30]+tablero[33]+tablero[35]+tablero[36] < 0)
            {
                tablero[17]=-1;
                tablero[20]=-1;
                tablero[30]=-1;
                tablero[33]=-1;
                tablero[35]=-1;
                tablero[36]=-1;
            }
            imprimir_tablero(tablero);
        }
        //ANILLO 5
        else if (tablero[33]!=0 && tablero[34]!=0 && tablero[35]!=0 && tablero[38]!=0 && tablero[43]!=0 && tablero[44]!=0)
        {
            if (tablero[33]+tablero[34]+tablero[35]+tablero[38]+tablero[43]+tablero[44] > 0)
            {
                tablero[33]=1;
                tablero[34]=1;
                tablero[35]=1;
                tablero[38]=1;
                tablero[43]=1;
                tablero[44]=1;
            }
            else if (tablero[33]+tablero[34]+tablero[35]+tablero[38]+tablero[43]+tablero[44] < 0)
            {
                tablero[33]=-1;
                tablero[34]=-1;
                tablero[35]=-1;
                tablero[38]=-1;
                tablero[43]=-1;
                tablero[44]=-1;
            }
            imprimir_tablero(tablero);
        }
        //ANILLO 6
        else if (tablero[23]!=0 && tablero[26]!=0 && tablero[31]!=0 && tablero[34]!=0 && tablero[42]!=0 && tablero[43]!=0)
        {
            if (tablero[23]+tablero[26]+tablero[31]+tablero[34]+tablero[42]+tablero[43] > 0)
            {
                tablero[23]=1;
                tablero[25]=1;
                tablero[31]=1;
                tablero[34]=1;
                tablero[42]=1;
                tablero[43]=1;
            }
            else if (tablero[23]+tablero[26]+tablero[31]+tablero[34]+tablero[42]+tablero[43] < 0)
            {
                tablero[23]=-1;
                tablero[25]=-1;
                tablero[31]=-1;
                tablero[34]=-1;
                tablero[42]=-1;
                tablero[43]=-1;
            }
            imprimir_tablero(tablero);
        }*/
        
        do
        {
            printf("Cambio de turno. En que casilla vas a poner tu ficha?(del 0 al 6):\n");        
            escanear_comprobar(&y,S);
        } while (y<O || y>=S);
    
        x=(x%7)*7+y;
    
        if (tablero[x]==0)
        {
            tablero[x]=pow((-1), i);
            imprimir_tablero(tablero);
            x=(x%7)*7+y;
        }
        else
        {
            printf("Esa casilla ya está cogida, prueba otra mirando mejor el tablero:\n");
            imprimir_tablero(tablero);
            i--;
        }
    }

// LIBERAR MEMORIA DINAMICA
    free(tablero);

    return 0;
}
