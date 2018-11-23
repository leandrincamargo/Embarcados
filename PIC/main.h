#include <16F628A.h>
#device ADC=10
#use delay(crystal=12MHz)
#use rs232(baud=9600,xmit=PIN_B3,rcv=PIN_B1,bits=8)

