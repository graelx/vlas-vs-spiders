// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins


//-----------------------------------------------------------------------------
// Nombre: ()
// Descripción:
//
// Entrada:   gGraCadena: La cadena completa terminada en 0.
//			  gGraStrCont: Posición de la primera letra de la subcadena.
//			  _t: Tamaño de la subcadena.
// Salida:    _gp_gen: Con la subcadena correspondiente.
//-----------------------------------------------------------------------------
void SubString(void) {
	uchar i = 0;

	while (i < _t) {
		//_gp_gen[i] = gGraCadena[gGraStrCont+i];//-1
		gGraCadena2[i] = gGraCadena[gGraStrCont+i];//-1
		i++;
   }
   gGraCadena2[i] = '\0';
   _gp_gen = gGraCadena2;
	
}


#ifdef GRA_COLORES
// Color para el Jugador.
void PlayerColour(struct sp_CS *cs)  
{ 
	   /*if (n == 0) // Se rellena de arriba a abajo y de izquierda 
	   			   // a derecha, incluyendo partes vacias del sprite
	        cs->colour = INK_BLACK | PAPER_WHITE; 
	   else if (n == 1) 
	        cs->colour = INK_BLUE | PAPER_BLACK; 
	   else if (n == 2)*/
		 cs->colour = INK_RED | PAPER_GREEN;
	   /*else if (n == 3)
		 cs->colour = INK_YELLOW | PAPER_BLACK;
	   else if (n == 4)
		 cs->colour = INK_GREEN | PAPER_WHITE;
	   else 
	         cs->colour = TRANSPARENT; 
	   if (n > 5) 
	         cs->graphic = sp_NullSprPtr; 
	   n++; */
	   return; 
}

// Color para los enemigos.
void EnemsColour(struct sp_CS *cs)  
{ 
	   /*if (n2 == 0) // Se rellena de arriba a abajo y de izquierda 
	   			   // a derecha, incluyendo partes vacias del sprite
	        cs->colour = INK_BLACK | PAPER_WHITE; 
	   else if (n2 == 1) 
	        cs->colour = INK_BLUE | PAPER_BLACK; 
	   else if (n2 == 2)
		 cs->colour = INK_RED | PAPER_GREEN;
	   else if (n2 == 3)
		 cs->colour = INK_YELLOW | PAPER_BLACK;
	   else if (n2 == 4)*/
		 cs->colour = INK_GREEN | PAPER_WHITE;
	   /*else 
	         cs->colour = TRANSPARENT; 
	   if (n2 > 5) 
	         cs->graphic = sp_NullSprPtr; 
	   n2++; */
	   return; 
}
#endif



