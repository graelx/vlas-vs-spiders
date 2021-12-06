// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

	#ifdef GRA_MUSICA_EN_JUEGO
		flags[GRA_MUSICA_ID] = 1;		// Ponemos activa la musica en el juego.
		flags[GRA_MUSICA_ID2] = 0;		// Ponemos tecla soltada.
	#endif

	#ifdef USE_INTER_TECLAS
		flags[INTER_TECLAS_ID] = 0;		// Desactivamos el intercambio.
	#endif

	#ifdef GRA_COLORES
		n = n2 = 0;
	#endif
