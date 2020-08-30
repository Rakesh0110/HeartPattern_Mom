#include<stdio.h>
#include<string.h>

int main()
{ int i,j,c=5,d=5;
char e[100];
for(i=1;i<=3;i++)
{printf("     ");
for(j=i;j<=3;j++)
printf(" ");
for(j=1;j<=c;j++)
printf("*");
for(j=1;j<=d;j++)
printf(" ");
d=d-2;
for(j=1;j<=c;j++)
printf("*");
c=c+2;
printf("\n");
}
c=19;
for(i=1;i<=10;i++)
{printf("     ");
for(j=1;j<=i;j++)
printf(" ");
for(j=1;j<=c;j++)
printf("*");

c=c-2;
printf("\n");
}
printf("\n");
for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{if(j==1||j==10||((i==j||i+j==11)&&(i<=5)))
printf("*");
else
printf(" ");
}
printf(" ");
for(j=1;j<=10;j++)
{if(i==1||i==10||j==1||j==10)
printf("*");
else
printf(" ");
}
printf(" ");
for(j=1;j<=10;j++)
{if(j==1||j==10||((i==j||i+j==11)&&(i<=5)))
printf("*");
else
printf(" ");
}
printf("\n");

}
printf("\n");
c=5;
d=5;
for(i=1;i<=3;i++)
{printf("     ");
for(j=i;j<=3;j++)
printf(" ");
for(j=1;j<=c;j++)
printf("*");
for(j=1;j<=d;j++)
printf(" ");
d=d-2;
for(j=1;j<=c;j++)
printf("*");
c=c+2;
printf("\n");
}
c=19;
for(i=1;i<=10;i++)
{printf("     ");
for(j=1;j<=i;j++)
printf(" ");
for(j=1;j<=c;j++)
printf("*");

c=c-2;
printf("\n");
}

return 0;
}





 
