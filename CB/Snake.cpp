#include <iostream>
#include <conio.h>
using namespace std;
bool gameOver;
const int width = 50;
const int height = 20;
int x, y, fruitx, fruity, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup()
{
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruity = rand() % height;
	fruitx = rand() % width;
}

void Draw(
){
	system("cls");//To clear consol
	for (int i = 0; i < width+1; i++) {
		cout << '#';
	}
	cout << endl;
	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			if (i==x && j==y){
				cout<<"O";
			}
			else if (i==fruitx&& j==fruity){
				cout<<"+";
			}
			else if (i == 0 ) {
				cout << "|!";
			}
			// else if (i == ) {
			// 	cout << "!";
			// }
			else if (i == width - 1) {
				cout << '|';
			}
			else if (i == width - 2) {
				cout << "!";
			}
			else {
				cout << " ";
			}

		}
		cout << endl;
	}
	for (int i = 0; i < width+1; i++) {
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
	if (_kbhit()){
		switch(_getch()){
		case 'w':
			break;
		case 'a':
			break;
		case 'c':
			break;
		case 's':
			break;
		case 'x':
			break;
		}
	}
}

void Logic()
{
	switch(dir){
		
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
		// Sleep(10)
	}
	return 0;
}
