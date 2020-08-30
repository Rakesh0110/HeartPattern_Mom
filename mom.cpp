#include<iostream>
#include<string.h>
using namespace std;
int main()
{ int i,j,c=5,d=5;
char e[100];
for(i=1;i<=3;i++)
{cout<<"     ";
for(j=i;j<=3;j++)
cout<<" ";
for(j=1;j<=c;j++)
cout<<"*";
for(j=1;j<=d;j++)
cout<<" ";
d=d-2;
for(j=1;j<=c;j++)
cout<<"*";
c=c+2;
cout<<endl;
}
c=19;
for(i=1;i<=10;i++)
{cout<<"     ";
for(j=1;j<=i;j++)
cout<<" ";
for(j=1;j<=c;j++)
cout<<"*";

c=c-2;
cout<<endl;
}
cout<<endl;
for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{if(j==1||j==10||((i==j||i+j==11)&&(i<=5)))
cout<<"*";
else
cout<<" ";
}
cout<<" ";
for(j=1;j<=10;j++)
{if(i==1||i==10||j==1||j==10)
cout<<"*";
else
cout<<" ";
}
cout<<" ";
for(j=1;j<=10;j++)
{if(j==1||j==10||((i==j||i+j==11)&&(i<=5)))
cout<<"*";
else
cout<<" ";
}
cout<<"\n";

}
cout<<endl;
c=5;
d=5;
for(i=1;i<=3;i++)
{cout<<"     ";
for(j=i;j<=3;j++)
cout<<" ";
for(j=1;j<=c;j++)
cout<<"*";
for(j=1;j<=d;j++)
cout<<" ";
d=d-2;
for(j=1;j<=c;j++)
cout<<"*";
c=c+2;
cout<<endl;
}
c=19;
for(i=1;i<=10;i++)
{cout<<"     ";
for(j=1;j<=i;j++)
cout<<" ";
for(j=1;j<=c;j++)
cout<<"*";

c=c-2;
cout<<endl;
}

return 0;
}





 
