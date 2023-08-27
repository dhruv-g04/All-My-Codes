#include <iostream>
using namespace std;

void fibonacci(int n) {
	int a = 0;
	int b = 1;
	int c = a + b;
	printf("%d %d %d ", a, b, c);
	for (int i = 0; i < n - 3; i++) {
		a = b;
		b = c;
		c = a + b;
		cout << c << " ";
	}
}

int fib_ele(int n) {
	int c = 0;
	int a = 0;
	int b = 1;
	if (n = #include <iostream>
#include <conio.h>
#include <windows.h>
	        using namespace std;
	        bool gameOver;
	        const int width = 50;
	        const int height = 20;
	        int lenght = 1;
	        string s = "";
	        int x, y, fruitx, fruity, score, scorex = width, scorey = 0;
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
			fruitx = rand() % width - 1;
			/* code */
		}
	}

	void Draw()
	{
		system("cls"); // To clear consol
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
					// while (lenght)
					// {
					//     s.push_back('o');
					//     lenght--;
					// }
					cout << 'o';
				}

				else if (i == fruitx && j == fruity)
				{
					cout << "+";
				}
				else if (i == 0)
				{
					cout << "|!";
				}
				// else if (i == ) {
				// 	cout << "!";
				// }
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
					cout << " ";
				}
			}
			cout << endl;
		}
		for (int i = 0; i < width + 1; i++)
		{
			cout << '#';
		}
		cout << endl;
		// cout << "####################"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "|!                !|"<<endl;
		// cout << "####################"<<endl;
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
			}
		}
	}

	void Logic()
	{
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
		if (x == fruitx && y == fruity)
		{
			// lenght++;
			// while (fruitx == 0 || fruity == 0)
			// {
			score++;
			fruity = rand() % height;
			fruitx = rand() % width;
			//     /* code */
			// }
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
	    = 1) return 0;
	else if (n == 2) return 1;
	else {
		for (int i = 0; i < n - 2; i++) {
			c = a + b;
			a = b;
			b = c;

		}
		return c;
	}
}

int main() {
	int n;
	cin >> n;
	// for (int j=1;j<=n;j++){
	cout << fib_ele(n + 1) << " ";

// }
	return 0;
}