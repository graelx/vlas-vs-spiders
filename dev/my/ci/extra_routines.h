// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

	#ifdef USE_INTER_TECLAS
		// Tile LSD
		_t = map_buff[COORDS (p_tx, p_ty)];
		if (_t == INTER_TILE_LSD) {
			//map_buff[COORDS (p_tx, p_ty)] = 0;
			_t = _n = 0;
			_x = p_tx; _y = p_ty;
			update_tile();
			//sp_UpdateNow ();
			flags[INTER_TECLAS_ID] = 1;		// Activamos el intercambio.
		}
	#endif

	/*#ifndef DEACTIVATE_EVIL_TILE
		// Tiles que te matan. 
		// hit_v tiene preferencia sobre hit_h
		_t = map_buff[COORDS (p_tx, p_ty)];
		if ((_t == 3) || (_t == 4) || (_t == 5)) {
			flags[1]++;
			if (flags[1] > 2) {
				p_killme = 4;
				p_kill_amt = 1;
				flags[1] = 0;
				// Parpadea mientra atraviesa la lava
				p_estado = EST_PARP;
				//p_ct_estado = 50;
			}
		} else {
			flags[1] = 0;
			p_estado = EST_NORMAL;
		}
	#endif*/

	//if (bossActivo == 1) {
		//bigBoss_sprite
		//sp_MoveSprAbs(bigBoss_sprite, &_vpClipStruct, 0, 4, 4, 0, 0);
		//sp_MoveSprAbs(sp_player, &_vpClipStruct, p_next_frame - p_current_frame,  12, 12, 0, 0);//bigBoss_sprite//sp_player 
		//sp_UpdateNow();
	/*sp_MoveSprAbs(bigBoss_sprite, &_vpClipStruct, bigBoss_col2-bigBoss_col1, 12,  12+bbx, 0, 0);//bigBoss_sprite//sp_player 
	bbx = -bbx;
	sp_UpdateNow ();*/
	//}



    //if (sp_KeyPressed(KEY_M)) {
    if ((pad0 & sp_FIRE) == 0) {
       // [...]
        if (n_pant == 29 && (p_tx == 7 || p_tx == 6) && p_ty == 8) {
            if (p_objs == 10) {	// Ganar
                success = 1;
                playing = 0;            
            } else {	// Perder
				success = playing = 0;
			}
        }
    }
/**/

// Ending condition
/*if (n_pant == 29 && flags [1]) {
	beep_fx (0);
	success = 1;
	playing = 0;
}

Ganar o perder
Para hacer que el nivel termine satisfactoriamente habrá que...

    success = 1;
    playing = 0;
Para producir un game over inmediato, simplemente:

    success = playing = 0;

Leer los controles
En cada frame leemos los controles y los escribimos en la variable pad0. Los controles pulsados se pueden evaluar mirando los bits que estén a 0. splib2 define una serie de constantes para hacer esto más sencillo:

Constante	Significado
sp_LEFT	izquierda
sp_RIGHT	derecha
sp_UP	arriba
sp_DOWN	abajo
sp_FIRE	disparo
Por ejemplo, para comprobar si se está pulsando 'abajo':

    if ((pad0 & sp_DOWN) == 0) {
        // Estamos pulsando "abajo"
*/
