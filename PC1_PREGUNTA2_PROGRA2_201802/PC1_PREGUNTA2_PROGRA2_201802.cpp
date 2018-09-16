// PC1_PREGUNTA2_PROGRA2_201802.cpp: archivo de proyecto principal.

#include "stdafx.h"


int main()
{
	CJuego *obj1 = new CJuego();


	while (1)
	{
		obj1->MostrarTodos();
		_sleep(50);
		obj1->BorrarTodos();
		obj1->MoverTodos();

	}
	_getch();
	return 0; 
}
