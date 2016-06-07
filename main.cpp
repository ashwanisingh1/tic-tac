#include <bits/stdc++.h>

using namespace std;

void board(char box[][3]);
int check(char box[][3]);


int main()
{
  char box[3][3];
  int f=1,i,j,flag=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      box[i][j]=(char)(((int)'0')+f);
      //cout<<box[i][j]<<" ";
      f++;
    }
  }
    int moves=0,inp,a,b;

  while(moves!=9)
  {
    board(box);
   if(moves%2==0)
   {
    cout<<"PLAYER 1 move (enter block number) : ";
    cin>>inp;
    if(inp<=3)
    {
    a=0;
    }
    else
    {
    if(inp<=6)
     {
     a=1;
     }
     else
     {
      a=2;
     }
    }
    if(inp%3==0)
    {
     b=2;
    }
    else
    {
    b=(inp%3)-1;
    }
      box[a][b]='X';
    moves++;
   }
   else
   {
    cout<<"PLAYER 2 move (enter block number) : ";
    cin>>inp;
     if(inp<=3)
    {
    a=0;
    }
    else
    {
    if(inp<=6)
     {
     a=1;
     }
     else
     {
      a=2;
     }
    }
    if(inp%3==0)
    {
     b=2;
    }
    else
    {
    b=(inp%3)-1;
    }
      box[a][b]='O';
    moves++;
   }
   if(check(box)==1)
   {
      if(moves%2==0)
      {
       flag=1;
      }
     else
     {
       flag=2;
     }
    break;
   }
  }
board(box);
if(flag==1)
{
cout<<"PLAYER 2 WINS!";
}
else
 {
  if(flag==2)
  {
  cout<<"PLAYER 1 WINS!";
  }
  else
  {
   cout<<"DRAW";
  }
 }
    return 0;
}


void board(char box[][3])
 {
     system("cls");
  cout<<endl<<endl;
cout<<"                   "<<"TIC-TAC TOE";


   cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 ";
     cout<<"  "<<box[0][0]<<" |  "<<box[0][1]<<"  |  "<<box[0][2]<<" "<<endl;
     cout<<"                 ";
     cout<<"____|_____|____"<<endl;
     cout<<"                 ";
     cout<<"  "<<box[1][0]<<" |  "<<box[1][1]<<"  |  "<<box[1][2]<<" "<<endl;
     cout<<"                 ";
     cout<<"____|_____|____"<<endl;
     cout<<"                 ";
     cout<<"  "<<box[2][0]<<" |  "<<box[2][1]<<"  |  "<<box[2][2]<<" "<<endl;
     cout<<"                 ";
     cout<<"    |     |    "<<endl;
      cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                 ";
 }


int check(char box[][3])
 {
     int sum=0,i,j;
   for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
     {
      if(box[i][j]=='X')
      {
       sum++;
      }
     }
     if(sum==3)
     {
    return 1;
     }
     else
     {
     sum=0;
     }
    }
    sum=0;
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
     {
      if(box[j][i]=='X')
      {
       sum++;
      }
     }
     if(sum==3)
     {
    return 1;
     }
     else
     {
     sum=0;
     }
    }

    sum=0;

   for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
     {
      if(box[i][j]=='O')
      {
       sum++;
      }
     }
     if(sum==3)
     {
    return 1;
     }
     else
     {
     sum=0;
     }
    }
     sum=0;
     for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
     {
      if(box[j][i]=='O')
      {
       sum++;
      }
     }
     if(sum==3)
     {
    return 1;
     }
     else
     {
     sum=0;
     }
    }
    sum=0;
     for(i=0;i<3;i++)
     {
       if(box[i][i]=='X')
       {
        sum++;
       }
       if(sum==3)
       {
        return 1;
       }
     }
     sum=0;
    for(i=0;i<3;i++)
     {
       if(box[i][i]=='O')
       {
        sum++;
       }
       if(sum==3)
       {
        return 1;
       }
     }
     sum=0;
     if(box[0][2]=='X'&&box[1][1]=='X'&&box[2][0]=='X')
     {
       return 1;
     }
     if(box[0][2]=='O'&&box[1][1]=='O'&&box[2][0]=='O')
     {
       return 1;
     }
     return 0;
 }
