#include <stdio.h>
#include "../include/GPIO.h"

void toggleGPIO(int *pin, int *state) {
	printf("pin: %d \n", *pin);
	printf("state: %d \n", *state);
	return;
}
