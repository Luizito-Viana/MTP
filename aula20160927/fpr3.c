#include <stdio.h>

void comum(int *veta, int n, int *vetb, int m);

int main()
{
    int k;
    int veta[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(veta)/sizeof(int);
    int vetb[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(vetb)/sizeof(int);
    comum(veta, n, vetb, m);
    return 0;
}
void comum(int *veta, int n, int *vetb, int m)
{
    int i, j = 0;
    for (i=0 ; i<n; i++)
        for (j=0; j<m; j++)
            if(veta[i] == vetb[j])
                printf("%d\n", veta[i]);

}
