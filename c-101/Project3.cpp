#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *inptr, *outptr;

int main( )
{
    int a, b, c;
    float s, area;

    inptr = fopen("proj3in.dat", "r");
    outptr = fopen("proj3out.dat", "w");

    while((fscanf(inptr,"%d  %d %d", &a, &b, &c)) !=EOF)
    {
        fprintf(outptr, "\n\n%d     %d      %d\n" , a , b , c );
        {
            if (a + b > c && b + c > a && a + c > b)
            {
                  s = (1.0 / 2.0) * ( a + b + c);
                  area = sqrt((s * (s - a) * (s - b) * (s - c)));
                  fprintf(outptr,"\nThis forms a triangle\n");
                  fprintf(outptr,"\nThe area of this triangle is:   %f\n",area);
                  if (a != b & b != c & c !=a)
                  {
                       fprintf(outptr,"\nThis is a scalene triangle\n");
                  }
                  else
                      fprintf(outptr,"\nThis is not a scalene triangle\n");
                      if (a * a + b * b == c * c  ||  b * b + c * c == a * a  ||  c * c + a * a == b * b)
                           {
                                fprintf(outptr,"\nThis is a right triangle\n");
                           }
                      else
                          fprintf(outptr,"\nThis is not a right triangle\n");
            }
            else
                 fprintf(outptr,"\nThis is not a triangle\n");
        }
    }

    return 0;
}
