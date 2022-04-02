#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/binary_info.h"

// THIS IS THE ENGINE CONFIGURATION
#define NUM_CYLINDERS 4
#define FIRING_ORDER {1, 2, 4, 3}
#define DISPLACEMENT_CC 649

double intake_air_velocity = 0;
double intake_air_temperature = 0;
double engine_temperature = 0;
double engine_rpm = 0;
double crank_position = 0;
double pico_temperature = 0;

void read_inputs() {

}

void trigger_events() {
}

int main() {
    stdio_init_all();

    while(1) {
        read_inputs();
        trigger_events();
        printf("Cycle complete\n");
        sleep_ms(10000);
    }
}