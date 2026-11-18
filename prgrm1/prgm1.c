#include <stdio.h>
int main()
{
int integer [2][3][2];
int i,j,k;

printf("enter 12 values:\n");

for( i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<2;k++)
{
scanf("%d",&integer[i][j][k]);
}
}
}
printf("\n displaying values:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<2;k++)
{
printf("integer[%d][%d][%d]=%d\n",i,j,k,integer[i][j][k]);
}
}
}
return 0;
}
