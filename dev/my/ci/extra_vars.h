// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

    const unsigned char *extra_enem_cells[] = {
        //extra_sprite_17_a, extra_sprite_18_a
		extra_sprite_17_a, extra_sprite_18_a, extra_sprite_19_a, extra_sprite_20_a, 
		extra_sprite_21_a, extra_sprite_22_a, sprite_15_a, sprite_16_a
		//, extra_sprite_23_a, extra_sprite_24_a
    };

	// Cadena con el texto a escribir con scroll.
	// Se modifica la fi¡unción 'select_joyfunc' de 'engine.h'
	uchar gGraCadena[] = "                  BEETHOVEN: FUR ELISE  /  BACH: INVENTION NO. 13  /  BEETHOVEN: SYMPHONY9 4 ODE TO JOY PIANO SOLO  /  FUNERAL MARCH ";
	uchar gGraCadena2[33];
	uchar gGraStrCont, gGraCont;
	uchar gGraStrTam;

#ifdef GRA_COLORES
	uchar n, n2; 
#endif

    //const unsigned char decos_10 [] = { 0x06, 22, 0x07, 22, 0xC7, 30, 0x08, 22, 0xC8, 31, 0xff };
    //const unsigned char decos_14 [] = { 0xE6, 22, 0x27, 30, 0xE7, 22, 0x28, 31, 0xE8, 22, 0xff };

