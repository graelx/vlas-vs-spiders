// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// Copyright Copyleft (c) 2021-2021 GRA. Todos los derechos reservados
// inter_teclas.h - Intercambia las teclas pulsadas.

/* Incluir en el fichero 'game_loop.h' las siguientes líneas:

		#ifdef USE_INTER_TECLAS
			#include "my/ci/inter_teclas.h"
		#endif

 Hay que colocarla despues de la línea:

		pad0 = (joyfunc) (&keys);

 que se encuantra en la linea 110 aproximadamente.


En el fichero 'config.h' poner al final lo suguiente:

// ============================================================================
// G.R.A. Config
// ============================================================================
#define USE_INTER_TECLAS		// Si definido, usa el intercambio de teclas.
#define INTER_VERTICAL			// Intercambia las teclas arriba/abajo.
#define INTER_HORIZONTAL		// Intercambia las teclas izquierda/derecha.


*/
/* masks for joystick functions
#define sp_FIRE           0x80
#define sp_RIGHT          0x08
#define sp_LEFT           0x04
#define sp_DOWN           0x02
#define sp_UP             0x01

0 -> Pulsada
1 -> No pulsada

F x x x R L D U
*/
	//unsigned char gra_cad[32];
//INTER_TECLAS_ID
	unsigned char gra_pad0, gra_pad1, gra_pad2;

	/*sprintf(gra_cad,"%xd", pad0);
	for (_x=0; _x<32; _x++) {
		if (gra_cad[_x] != 0) {
			gra_cad[_x] = gra_cad[_x]+32;
		}
	}*/
	if (flags[INTER_TECLAS_ID] == 1) {

		//_x = 5; _y=1; _t = 7;
		//_gp_gen = gra_cad;
		//print_str();
		if (pad0 != 0xff) {
			/* //_t = (pad0 & 0x0F);
			//print_number2();
			//_x = 10; _y=1;*/
		#ifdef INTER_VERTICAL
			gra_pad0 = pad0 & ~(sp_DOWN | sp_UP);	// Abajo y arriba
			gra_pad1 = (pad0 & sp_DOWN) >> 1;//;
			gra_pad2 = (pad0 & sp_UP) << 1;//;
			pad0 = gra_pad0 | gra_pad1 | gra_pad2;//& !(gra_pad1 | gra_pad2);	// Abajo y arriba
		#endif
			/*pad0 = gra_pad0;*/
			/*_t = (gra_pad1);// & 0x0F
			print_number2();

			_x = 20; _y=1;
			_t = (gra_pad0 & 0x0F);
			print_number2();

			_x = 15; _y=1;
			_t = (gra_pad2);// & 0x0F
			print_number2();

			_x = 15; _y=1;*/
		#ifdef INTER_HORIZONTAL
			gra_pad0 = pad0 & ~(sp_RIGHT | sp_LEFT);	// Derecha e izquierda
			gra_pad1 = (pad0 & sp_RIGHT) >> 1;//;
			gra_pad2 = (pad0 & sp_LEFT) << 1;
			pad0 = gra_pad0 | gra_pad1 | gra_pad2;	// Derecha e izquierda
		#endif
			/* //pad0 = gra_pad0
			//_t = (gra_pad1 & 0x0F);
			//print_number2();;*/
		}
	}

