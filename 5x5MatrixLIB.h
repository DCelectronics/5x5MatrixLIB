#ifndef MatrixLIB_h
#define MatrixLIB_h

#include "Arduino.h"

class MatrixLIB {
  private:
    int m_clock, m_data, m_load;
  public:
    MatrixLIB(int clock, int data, int load)
      : m_clock(clock)
      , m_data(data)
      , m_load(load) {}
	void begin();//begin the code and clear previous data 
	void clear();//cler the display 
	void writeCharacter(int digit,char whatCharacter);//wite the character to the digit individually  
	void writeStringScrolling(String text, int speed);//scroll text,delay is the moving delay between digit
	void setBrightness(int percent);//set the brightness of the display 
	void setPowerdownMode(boolean on);//Pwer saving mode of the display 
	void setLampTest(boolean on);//Test the display lamp
	void drawBitmap(int digit, const char data[]);// draw 5x5 bitmap image on an specified digit
	void drawBitmapPgm(int digit, const char data[]);// draw 5x5 progmem's bitmap image on an specified digit
	void bitbang(unsigned char code);//send the hex or binary to the display (SPI-like)
};
#endif
