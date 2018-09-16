#include "stdafx.h"



CJuego::CJuego()
{
	Random f;
	//Creando del arreglo para los fantasmas horizontales
	ArregloH = new CFantasma*[3];
	for (int i = 0; i < 3; i++)
	{
		ArregloH[i] = new CFantasma(f.Next(0, 120), f.Next(0, 25), f.Next(1, 3), 0, 14, 97 + i);
	}





	//Creando el arreglo para los fantasmas verticales
	ArregloV = new CFantasma*[3];
	for (int i = 0; i < 3; i++)
	{
		ArregloV[i] = new CFantasma(f.Next(0, 120), f.Next(0, 25), 0, f.Next(1, 3), 10, 100 + i);
	}


}


CJuego::~CJuego()
{
}


void CJuego::MostrarTodos(){
	for (int i = 0; i < 3; i++)
	{
		ArregloH[i]->Mostrar();
		ArregloV[i]->Mostrar();
	}

}

void CJuego::BorrarTodos(){
	for (int i = 0; i < 3; i++)
	{
		ArregloH[i]->Borrar();
		ArregloV[i]->Borrar();

	}

}

void CJuego::MoverTodos(){
	for (int i = 0; i < 3; i++)
	{
		ArregloH[i]->Mover();
		ArregloV[i]->Mover();

	}

}