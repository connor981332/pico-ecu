default_target: all

all: build deploy

build: ecu.c
	mkdir -p build
	export PICO_SDK_PATH=../pico-sdk
	cmake -B build
	make -C build

deploy:
	openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg -c "program build/pico_ecu.elf verify reset exit"