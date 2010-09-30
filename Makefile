ARDUINO_DIR=/usr/share/arduino

TARGET=demo
ARDUINO_LIBS=
MCU=atmega168
F_CPU=1000000
ARDUINO_PORT=/dev/arduino
AVRDUDE_ARD_BAUDRATE=19200

include /usr/share/arduino/Arduino.mk
# AVRDUDE_COM_OPTS+=-F
