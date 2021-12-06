// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

	#ifdef USE_INTER_TECLAS
		flags[INTER_TECLAS_ID] = 0;		// Desactivamos el intercambio.
	#endif

	//flags[1] = 0; // Flag de contador de daño. Cada ? se hace uno de daño.
    /*_gp_gen = 0;

    switch (n_pant) {
        case 10:
            _gp_gen = decos_10; break;
        case 14:
            _gp_gen = decos_14; break;
    }

    if (_gp_gen) draw_decorations ();*/

	// Cambiamos el valor del primer peldaño de la escalera de 8 a 4
    switch (n_pant) {
        case 6:
            map_attr[COORDS(4,8)] = 4;
            map_attr[COORDS(10,3)] = 4;
        case 7:
            map_attr[COORDS(5,8)] = 4;
        case 8:
            map_attr[COORDS(10,8)] = 4;
            map_attr[COORDS(4,3)] = 4;
        case 11:
            map_attr[COORDS(2,8)] = 4;
            /*map_attr[COORDS(3,7)] = 8;
            map_attr[COORDS(4,6)] = 8;
            map_attr[COORDS(5,5)] = 8;
            map_attr[COORDS(6,4)] = 8;*/
			break;
        case 12:
            map_attr[COORDS(6,8)] = 4;
            map_attr[COORDS(10,3)] = 4;
			break;
        case 13:
            map_attr[COORDS(10,8)] = 4;
            map_attr[COORDS(4,3)] = 4;
    }

	/*if (n_pant == 28) {
		p_objs = 9;//10;//
	}*/

