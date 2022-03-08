#include "DMXfunc.h"

void dmxtopin(int* ArrConst, int* ArrPin, int dmx, int* temp) {
	for (int i = 0; i <= 9; i++) {
		if (dmx == ArrConst[i] && dmx != 512) {
			ArrPin[i] = 1;
			break;
		}
		else if (dmx < ArrConst[i] && i > 0) {
			ArrPin[i - 1] = 1;
			*temp = ArrConst[i - 1];
			for (int j = i - 2; j >= 0; j--) {
				if (*temp + ArrConst[j] == dmx) {
					ArrPin[j] = 1;
					break;
				}
				else if (*temp + ArrConst[j] < dmx) {
					ArrPin[j] = 1;
					*temp = *temp + ArrConst[j];

				}
			}
			break;
		}
	}
}

void pintodmx(int* ArrPin, int* ArrConst, int* dmx) {
	for (int i = 0; i < 9; i++) {
		if (ArrPin[i] == 1)
			*dmx = *dmx + ArrConst[i];
	}
}

void counter(int* num, int ch, int* addr, int* un) {
	*addr = *addr + ch;
	if (*addr > 512) {
		++*un;
		*addr = 1;
	}
	++*num;
}
