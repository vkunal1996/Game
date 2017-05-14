#include <iostream>
#include<stdlib.h>
#include<stdio.h>
//#include<conio.h>
using namespace std;
void board(char [][3]);
int main()
{
    char temp[][3]={'0','1','2','3','4','5','6','7','8','9'};
    int i;
    static int count;
    


    board(temp);
    do
    {

    ab :cout<<endl<<"\t\tPlayer 1 : ";
    cin>>i;
   // clrscr();
   system("cls");
    count=count+1;
	if(i<=3)
	{
	    if(temp[0][i]=='O'||temp[0][i]=='X')
	    {
	    board(temp);
	    cout<<endl<<"\t\tInvalid Move";
	    count=count-1;

	    goto ab;
	    }
		else
		{
		temp[0][i]='X';
		board(temp);
		}
	}
	else if(i>3&&i<=6)
	{
	 if(temp[1][i-3]=='O'||temp[1][i-3]=='X')
	    {
	    board(temp);
	    cout<<endl<<"\t\tInvalid Move";
	    count=count-1;

	    goto ab;
	    }
		else
		{
		temp[1][i-3]='X';
		board(temp);
		}
	}
	else if(i>6&&i<=9)
	{
	if(temp[2][i-6]=='O'||temp[2][i-6]=='X')
	    {
	    board(temp);
	    cout<<endl<<"\t\tInvalid Move";
	    count=count-1;

	    goto ab;
	    }
		else
		{
		temp[2][i-6]='X';
		board(temp);
		}
	}

	if((temp[0][1]==temp[0][2]&&temp[0][2]==temp[0][3])||(temp[1][1]==temp[1][2]&&temp[1][2]==temp[1][3])||(temp[2][1]==temp[2][2]&&temp[2][2]==temp[2][3])||(temp[0][1]==temp[1][2]&&temp[1][2]==temp[2][3])||(temp[0][3]==temp[1][2]&&temp[1][2]==temp[2][1])||(temp[0][1]==temp[1][1]&&temp[1][1]==temp[2][1])||(temp[0][2]==temp[1][2]&&temp[1][2]==temp[2][2])||(temp[0][3]==temp[1][3]&&temp[1][3]==temp[2][3]))
	{
	    if(temp[0][1]=='X'||temp[1][1]=='X'||temp[2][1]=='X'||temp[0][2]=='X'||temp[0][3]=='X')
	    {
	    cout<<endl<<"\t\tPlayer 1: Won ";
	    break;
	    }

	}

	if(count==9&&(!((temp[0][1]==temp[0][2]&&temp[0][2]==temp[0][3])||(temp[1][1]==temp[1][2]&&temp[1][2]==temp[1][3])||(temp[2][1]==temp[2][2]&&temp[2][2]==temp[2][3])||(temp[0][1]==temp[1][2]&&temp[1][2]==temp[2][3])||(temp[0][3]==temp[1][2]&&temp[1][2]==temp[2][1])||(temp[0][1]==temp[1][1]&&temp[1][1]==temp[2][1])||(temp[0][2]==temp[1][2]&&temp[1][2]==temp[2][2])||(temp[0][3]==temp[1][3]&&temp[1][3]==temp[2][3]))))
	{
	cout<<endl<<"\t\tGame Draw";
	break;
	}

    bc: cout<<endl<<"\t\tPlayer 2 : ";
     cin>>i;
     //clrscr();
     system("cls");
     count=count+1;
      if(i<=3)
	{
	    if(temp[0][i]=='O'||temp[0][i]=='X')
	    {
	    board(temp);
	    cout<<endl<<"\t\tInvalid Move";
	    count=count-1;

	    goto bc;
	    }
		else
		{
		temp[0][i]='O';
		board(temp);
		}
	}
	else if(i>3&&i<=6)
	{
	 if(temp[1][i-3]=='O'||temp[1][i-3]=='X')
	    {
	     board(temp);
	    cout<<endl<<"\t\tInvalid Move";
	    count=count-1;

	    goto bc;
	    }
		else
		{
		temp[1][i-3]='O';
		board(temp);
		}
	}
	else if(i>6&&i<=9)
	{
	if(temp[2][i-6]=='O'||temp[2][i-6]=='X')
	    {
	    board(temp);
	    cout<<endl<<"\t\tInvalid Move";
	    count=count-1;

	    goto bc;
	    }
		else
		{
		temp[2][i-6]='O';
		board(temp);
		}
	}

	if((temp[0][1]==temp[0][2]&&temp[0][2]==temp[0][3])||(temp[1][1]==temp[1][2]&&temp[1][2]==temp[1][3])||(temp[2][1]==temp[2][2]&&temp[2][2]==temp[2][3])||(temp[0][1]==temp[1][2]&&temp[1][2]==temp[2][3])||(temp[0][3]==temp[1][2]&&temp[1][2]==temp[2][1])||(temp[0][1]==temp[1][1]&&temp[1][1]==temp[2][1])||(temp[0][2]==temp[1][2]&&temp[1][2]==temp[2][2])||(temp[0][3]==temp[1][3]&&temp[1][3]==temp[2][3]))
	{
	    if(temp[0][1]=='O'||temp[1][1]=='O'||temp[2][1]=='O'||temp[0][2]=='O'||temp[0][3]=='O')
        {
	    cout<<endl<<"\t\tPlayer 2: Won ";
	    break;
        }

	}

	if(count==9&&(!((temp[0][1]==temp[0][2]&&temp[0][2]==temp[0][3])||(temp[1][1]==temp[1][2]&&temp[1][2]==temp[1][3])||(temp[2][1]==temp[2][2]&&temp[2][2]==temp[2][3])||(temp[0][1]==temp[1][2]&&temp[1][2]==temp[2][3])||(temp[0][3]==temp[1][2]&&temp[1][2]==temp[2][1])||(temp[0][1]==temp[1][1]&&temp[1][1]==temp[2][1])||(temp[0][2]==temp[1][2]&&temp[1][2]==temp[2][2])||(temp[0][3]==temp[1][3]&&temp[1][3]==temp[2][3]))))
	{
	cout<<endl<<"\t\tGame Draw";
	break;
	}



    }while(1);
getchar();
return 0;
}

void board(char temp[][3])
{
    cout<<endl<<"\t|||||||||||||||||||||||||||||||||||||||||||||||||";
    cout<<endl<<"\t|                                               |";
    cout<<endl<<"\t|                                               |";
    cout<<endl<<"\t|                 Tic Tac Toe !                 |";
    cout<<endl<<"\t|                                               |";
    cout<<endl<<"\t|        Player 1: X         Player 2: O        |";
    cout<<endl<<"\t|                                               |";
    cout<<endl<<"\t|             Designed by Kunal Verma           |";
    cout<<endl<<"\t|                                               |";
    cout<<endl<<"\t|                                               |";
    cout<<endl<<"\t|||||||||||||||||||||||||||||||||||||||||||||||||";
    cout<<endl;

    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t     "<<temp[0][1]<<"     |    "<<temp[0][2]<<"   |     "<<temp[0][3]<<"    ";
    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t______________________________";
    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t     "<<temp[1][1]<<"     |    "<<temp[1][2]<<"   |     "<<temp[1][3]<<"    ";
    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t______________________________";
    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t     "<<temp[2][1]<<"     |    "<<temp[2][2]<<"   |     "<<temp[2][3]<<"    ";
    cout<<endl<<"\t\t           |        |         ";
    cout<<endl<<"\t\t           |        |         ";


}


