class mom
{public static void main(String[] a)
{int i,j,c=5,d=5;
for(i=1;i<=3;i++)
{System.out.print("     ");
for(j=i;j<=3;j++)
System.out.print(" ");
for(j=1;j<=c;j++)
System.out.print("*");
for(j=1;j<=d;j++)
System.out.print(" ");
d=d-2;
for(j=1;j<=c;j++)
System.out.print("*");
c=c+2;
System.out.print("\n");
}
c=19;
for(i=1;i<=10;i++)
{System.out.print("     ");
for(j=1;j<=i;j++)
System.out.print(" ");
for(j=1;j<=c;j++)
System.out.print("*");
c=c-2;
System.out.print("\n");
}
System.out.print("\n");
for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{if(j==1||j==10||((i==j||i+j==11)&&(i<=5)))
System.out.print("*");
else
System.out.print(" ");
}
System.out.print(" ");
for(j=1;j<=10;j++)
{if(i==1||i==10||j==1||j==10)
System.out.print("*");
else
System.out.print(" ");
}
System.out.print(" ");
for(j=1;j<=10;j++)
{if(j==1||j==10||((i==j||i+j==11)&&(i<=5)))
System.out.print("*");
else
System.out.print(" ");
}
System.out.print("\n");

}
System.out.print("\n");
c=5;
d=5;
for(i=1;i<=3;i++)
{System.out.print("     ");
for(j=i;j<=3;j++)
System.out.print(" ");
for(j=1;j<=c;j++)
System.out.print("*");
for(j=1;j<=d;j++)
System.out.print(" ");
d=d-2;
for(j=1;j<=c;j++)
System.out.print("*");
c=c+2;
System.out.print("\n");
}
c=19;
for(i=1;i<=10;i++)
{System.out.print("     ");
for(j=1;j<=i;j++)
System.out.print(" ");
for(j=1;j<=c;j++)
System.out.print("*");

c=c-2;
System.out.print("\n");
}
}
}

































