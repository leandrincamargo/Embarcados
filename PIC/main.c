#include <main.h>
#define LCD_ENABLE_PIN PIN_A0
#define LCD_RS_PIN PIN_A1
#define LCD_RW_PIN PIN_A2
#define LCD_DATA4 PIN_A3
#define LCD_DATA5 PIN_A4
#define LCD_DATA6 PIN_B0
#define LCD_DATA7 PIN_B1

#include <lcd.c>

void main()
{
   lcd_init();

   lcd_putc("\fReady...\n");
   char dados;
   while(TRUE)
   {
      printf(lcd_putc, "Teste");
      dados = getc();
      printf(lcd_putc, "Teste");
      //TODO: User Code
   }

}
