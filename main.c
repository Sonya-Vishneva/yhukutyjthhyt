#include <stdio.h>
#include <stdlib.h>
#define n 3
#define m 4
void main()
{
int array[n][m],i,j;
int k=0, k1=0;
printf("vvedite elementi matrici\n");
for( i = 0; i < n; i++ )
{
for( j = 0; j < m; j++ )
{
printf("array[%d][%d]=",i,j);
scanf("%d",&array[i][j]);
}
}
for (j=0; j<m; j++)
{
for (i=0; i<n; i++)
{
if (array[i][j]==0)
{
k1++;
}
}
if (!k1)
{
k++;
}
k1=0;
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf( "%d ", array[ i ][ j ] );
printf( "\n" );
}
printf( "Kolichestvo=%d\n",k);
return 0;
}
