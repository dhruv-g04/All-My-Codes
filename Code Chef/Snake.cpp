#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
bool gameOver;
const int width = 50;
const int height = 20;
int lenght = 1;
string s = "";
int x, y, fruitx, fruity, score, scorex = width, scorey = 0;
int tailX[100], tailY[100]; // max lenght =101;
int nTail;                  // lenght of snake
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    while (fruitx <= 0 || fruity <= 0)
    {
        fruity = rand() % height - 1;
        fruitx = rand() % width - 3;
    }
}

void Draw()
{
    system("cls"); // To clear consol
    cout << "                     SNAKE GAME";
    cout << endl;
    cout << endl;
    cout << "              |||||| SCORE = " << score << " ||||||";
    cout << endl;
    for (int i = 0; i < width + 1; i++)
    {
        cout << '#';
    }
    cout << endl;
    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            if (i == x && j == y)
            {
                cout << 'O';
            }

            else if (i == fruitx && j == fruity)
            {
                cout << "+";
            }
            else if (i == 0)
            {
                cout << "|!";
            }
            else if (i == width - 1)
            {
                cout << '|';
            }
            else if (i == width - 2)
            {
                cout << "!";
            }
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (i == tailX[k] && j==tailY[k])
                    {
                        print = true;
                        cout << "o";
                    }
                }
                if (!print)
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    for (int i = 0; i < width + 1; i++)
    {
        cout << '#';
    }
    cout << endl;
}

void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'w':
            dir = UP;
            break;
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            dir = STOP;
            break;
        case 'W':
            dir = UP;
            break;
        case 'A':
            dir = LEFT;
            break;
        case 'D':
            dir = RIGHT;
            break;
        case 'S':
            dir = DOWN;
            break;
        case 'X':
            gameOver = true;
            dir = STOP;
            break;
        }
    }
}

void Logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
    case UP:
        y--;
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case DOWN:
        y++;
        break;

    default:
        break;
    }
    if ((x <= 0) || (x >= width - 2) || (y <= -1) || (y >= height))
    {
        gameOver = true;
    }
    for (int i = 1; i < nTail; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
        {
            gameOver = true;
        }
    }
    if (x == fruitx && y == fruity)
    {

        score += 10;
        fruity = rand() % height;
        fruitx = rand() % width;
        nTail++;
        //     /* code */
    }
}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }
    // cout << fruitx << " " << fruity;
    return 0;
}
