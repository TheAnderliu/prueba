#include "stdafx.h"



CFantasma::CFantasma(int _x, int _y, int _dx, int _dy, int _color, char _car)
{

	x = _x;
	y = _y;
	dx = _dx;
	dy = _dy;
	color = _color;
	car = _car;
}


CFantasma::~CFantasma()
{
}


void CFantasma::Mostrar(){
	Console::SetCursorPosition(x, y);
	Console::ForegroundColor = ConsoleColor(color);
	cout << car;
}

void CFantasma::Borrar(){
	Console::SetCursorPosition(x, y);
	cout << " ";
}

void CFantasma::Mover(){
	//Para los fantasmas de movimiento horizontal
	if (x + dx >= 120||x+dx<=0){ dx *= -1; }

	//Para el movimiento de los fantasmas verticales
	if (y + dy >= 30){ y = 0; }

	x += dx;
	y += dy;
	
}