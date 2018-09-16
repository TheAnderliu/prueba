#pragma once
class CJuego
{
private:
	CFantasma **ArregloH;
	CFantasma **ArregloV;

public:
	CJuego();
	~CJuego();
	void MostrarTodos();
	void BorrarTodos();
	void MoverTodos();
};

