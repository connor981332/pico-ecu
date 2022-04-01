#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/binary_info.h"

int main() {
    //bi_decl(bi_program_description("This is a test binary."));
    //bi_decl(bi_1pin_with_name(LED_PIN, "On-board LED"));

    stdio_init_all();

    while(1) {
        sleep_ms(250);
        puts("Hello world\n");
        puts("This is the beginning of the ECU program\n");
        // comment
    }
}