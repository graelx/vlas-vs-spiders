// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

	if ((_en_t == 1) || (en_an_state[enit] != 0)) {//
		//if ((_en_mx < 0) || (_en_my < 0)) {
		if (_en_my > 0) {
			en_an_next_frame[enit] = extra_enem_cells[en_an_base_frame[enit] + en_an_frame[enit]];
		}/**/
	}
	/*if ((_en_t == 2) || (en_an_state[enit] != 0)) {//
		//if ((_en_mx < 0) || (_en_my < 0)) {
		if (_en_mx > 0) {
			en_an_next_frame[enit] = extra_enem_cells[en_an_base_frame[enit] + en_an_frame[enit]];
		}
	}*/
	if ((_en_t == 3) || (_en_t == 2) || (en_an_state[enit] != 0)) {
		//if ((_en_mx < 0) || (_en_my < 0)) {
		if (_en_mx > 0) {// || (_en_my > 0))
			en_an_next_frame[enit] = extra_enem_cells[en_an_base_frame[enit] + en_an_frame[enit]];
		}/**/
	}
	/*if ((_en_t == 3) || (_en_t == 2) || (_en_t == 1) || (en_an_state[enit] != 0)) {//
		//if ((_en_mx < 0) || (_en_my < 0)) {
		if ((_en_mx > 0) || (_en_my > 0)) {
			en_an_next_frame[enit] = extra_enem_cells[en_an_base_frame[enit] + en_an_frame[enit]];
		}
	}*/
