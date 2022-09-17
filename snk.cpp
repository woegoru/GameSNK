#include <iostream>
#include <stdlib.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
//snake position
enum eDirection {
	STOP = 0, LEFT, RIGHT, UP, DOWN
};
eDirection dir;

//called at the start of the game to display all the necessary parameters
void Setup() {
	gameOver = true;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

//the function draws a map
void Draw() {
	system("cls"); //clears the field
	//upper border of the field
	for (int i = 0; i < width + 1; i++)
		cout << '#';
	cout << endl;

	//side cells of the field
	for (int i = 0; i < height; i++) 
	{
		//checking the width of each cell
		for (int j = 0; j < width; j++) 
		{
			if (j == 0 || j == width - 1)
				cout << "#";
			cout << " ";
		}
		//automatic transfer to a new row after the end of the row
		cout << endl;
	}

	//the lower border of the field
	for (int i = 0; i < width + 1; i++) 
		cout << '#';
	cout << endl;

}

//a function that tracks user clicks
void Input() {

}

//the function responsible for the logic of the game
void Logic() {

}

int main() {
	Setup();
	while (gameOver) {
		Draw();
		Input();
		Logic();
	}
	return 0;
}