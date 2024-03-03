#include<stdio.h>
#include<stdlib.h>
void buildtable(char value[3][3]);
void win(char value[3][3]);
int randplayer();
int flag = 0;
void part1()
{
    system("cls");
    int counter = 0;
    int i = 0;
    int j = 0;
    char player1 = 'X';
    char player2 = 'O';
    char value[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    buildtable(value);
    while(counter<9)
    {
    if(counter%2 == 0)
    {
        printf("Player 1: ");
        scanf("%d",&i);
        switch(i)
        {
            case 1:if(value[0][0] != 'X' && value[0][0] != 'O'){value[0][0] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 2:if(value[0][1] != 'X' && value[0][1] != 'O'){value[0][1] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 3:if(value[0][2] != 'X' && value[0][2] != 'O'){value[0][2] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 4:if(value[1][0] != 'X' && value[1][0] != 'O'){value[1][0] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 5:if(value[1][1] != 'X' && value[1][1] != 'O'){value[1][1] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 6:if(value[1][2] != 'X' && value[1][2] != 'O'){value[1][2] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 7:if(value[2][0] != 'X' && value[2][0] != 'O'){value[2][0] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 8:if(value[2][1] != 'X' && value[2][1] != 'O'){value[2][1] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 9:if(value[2][2] != 'X' && value[2][2] != 'O'){value[2][2] = player1;break;}
            else{system("cls");buildtable(value);continue;break;}
            default:system("cls");buildtable(value);continue;break;
        }
    }
    else
    {   
        j = randplayer();
        switch(j)
        {
            case 1:if(value[0][0] != 'X' && value[0][0] != 'O'){value[0][0] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 2:if(value[0][1] != 'X' && value[0][1] != 'O'){value[0][1] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 3:if(value[0][2] != 'X' && value[0][2] != 'O'){value[0][2] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 4:if(value[1][0] != 'X' && value[1][0] != 'O'){value[1][0] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 5:if(value[1][1] != 'X' && value[1][1] != 'O'){value[1][1] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 6:if(value[1][2] != 'X' && value[1][2] != 'O'){value[1][2] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 7:if(value[2][0] != 'X' && value[2][0] != 'O'){value[2][0] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 8:if(value[2][1] != 'X' && value[2][1] != 'O'){value[2][1] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            case 9:if(value[2][2] != 'X' && value[2][2] != 'O'){value[2][2] = player2;break;}
            else{system("cls");buildtable(value);continue;break;}
            default:system("cls");buildtable(value);continue;break;
        }
    }
    win(value);
    system("cls");
    buildtable(value);
    if(flag == 1)
    {
        printf("Player 1 wins\n");
        break;
    }
    else if(flag == 2)
    {
        printf("Player 2 wins\n");
        break;
    }
    counter++;
    }
    if(flag == 0)
    {
        printf("Match is draw\n");
    } 
}
void buildtable(char value[3][3])
{
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n",value[0][0],value[0][1],value[0][2]);
    printf("       |       |       \n");
    printf("------- ------- -------\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n",value[1][0],value[1][1],value[1][2]);
    printf("       |       |       \n");
    printf("------- ------- -------\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n",value[2][0],value[2][1],value[2][2]);
    printf("       |       |       \n");
}
void win(char value[3][3])
{
    
    if(value[0][0]==value[0][1] && value[0][1]==value[0][2])
    {
        if(value[0][0] =='X')
        {
            flag = 1;
        }
        else
        {
            flag = 2;
        }
    }
    else if(value[1][0]==value[1][1] && value[1][1]==value[1][2])
    {
        if(value[1][0] =='X')
        {
            flag = 1;
        }
        else
        {
            flag = 2;
        }
    }
    else if(value[2][0]==value[2][1] && value[2][1]==value[2][2])
    {
        if(value[2][0] =='X')
        {
            flag = 1;
        }
        else
        {
            flag = 2;
        }
    }
    else if(value[0][0]==value[1][0] && value[1][0]==value[2][0])
    {
        if(value[0][0] =='X')
        {
            flag = 1;
        }
        else
        {
            flag = 2;
        }
    }
    else if(value[0][1]==value[1][1] && value[1][1]==value[2][1])
    {
        if(value[0][1] =='X')
        {
            flag = 1;
        }
        else
        {
            flag = 2;
        }
    }
    else if(value[0][2]==value[1][2] && value[1][2]==value[2][2])
    {
        if(value[0][2] =='X')
        {
            flag = 1;
        }
        else
        {
            flag = 2;
        }
    }
    else if(value[0][0]==value[1][1]&&value[1][1]==value[2][2])
    {
        if(value[0][0]=='X')
        {
            flag = 1;
        }
        else
        {
            flag = 2;
        }
    }
    else if(value[0][2]==value[1][1]&&value[1][1]==value[2][0])
    {
        if(value[0][2]=='X')
        {
            flag = 1;
        }
        else
        {
            flag = 2;
        }
    }
    else
    {
        flag = 0;
    }
}
int randplayer()
{
    int a;
    a = (rand()%9)+1;
    return a;
}