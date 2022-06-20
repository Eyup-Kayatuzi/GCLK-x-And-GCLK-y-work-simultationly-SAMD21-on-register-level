//////////////////////////////////////////////////////////////////////////
// Include and defines
//////////////////////////////////////////////////////////////////////////
#include "app.h"
#include "clock.h"

void AppInit(void)
{
	ClocksInit();
	
	// Assign LED0 as OUTPUT
	//REG_PORT_DIR0 = LED0_PIN_MASK;
	
	// Set LED0 OFF
	//REG_PORT_OUTCLR0 = LED0_PIN_MASK;
	//PORT->Group[LED0_PORT].PINCFG[LED0_PIN_NUMBER].bit.DRVSTR = 1;

	

} // AppInit()

void AppRun(void)
{
	while(1)
	{
		// Set the drive strength to strong
		
		
		// Turn the LED on PA17 ON
		//REG_PORT_OUTSET0 = LED0_PIN_MASK;
		//REG_PORT_OUTCLR0 = LED0_PIN_MASK;
	}

} // Apprun()

