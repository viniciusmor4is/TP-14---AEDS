#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, h, t, x, y, i, j;
    scanf("%d", &n);
    while (n>=0) {
    h=sqrt(n);
    t=h*h;

    if (h%2==1)
    {
        x=h/2;
        y=h-x;


        for (i=0; i<h; i++)
        {

            if (n==(h*h)+i)
                break;
            t++;
            x--;
        }
        for (j=t; j<n; j++)
        {
            if (n==(h*h))
                break;

            y--;

        }

    }

    else
    {
        x=(h/2)*(-1);
        y=x;

         for (i=0; i<h; i++)
        {

            if (n==(h*h)+i)
                break;
            t++;
            x++;
        }
        for (j=t; j<n; j++)
        {
            if (n==(h*h))
                break;

            y++;

    }


    }

     printf("Coordenada do ponto %d: (%d,%d)\n", n ,x, y);
     scanf("%d", &n);
    }

    return 0;
}
