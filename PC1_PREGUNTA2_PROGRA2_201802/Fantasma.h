#pragma once
class CFantasma
{
private:
	int x, y, dx, dy, color;
	char car;

public:
	CFantasma(int _x, int _y, int _dx, int _dy, int _color, char _car);
	~CFantasma();
	void Mostrar();
	void Borrar();
	void Mover();


};

