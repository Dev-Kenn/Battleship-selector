#include <stdio.h>
#define p printf
#define s scanf

int main()
{

char letter;
	p("(ABDF) Choose a letter: ");
	s("%c", &letter);

	switch(letter)
	{
	case 'B':
	case 'b':
		p("Ship class: Battleship");
		break;
	case 'A':
	case 'a':
		p("Ship class: Cruiser");
		break;
	case 'D':
	case 'd':
		p("Ship class: Destroyer");
		break;
	case 'F':
	case 'f':
		p("Ship class: 'Frigate");
		break;
	default:
		p("INPUT ERROR");
		break;
	}

	getch();
}
