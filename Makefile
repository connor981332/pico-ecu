deploy:
	openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg -c "program build/pico_ecu.elf verify reset exit"

build: ecu.c
	mkdir -p build
	export PICO_SDK_PATH=../pico-sdk
	cmake .
	make
	cd ..