//////////////////////////////////////////////////////////////////////////
// Include and defines
//////////////////////////////////////////////////////////////////////////
#include "clock.h"

void ClocksInit(void)
{
	PORT->Group[0].PINCFG[28].bit.PMUXEN = 1;
	PORT->Group[0].PMUX[14].bit.PMUXE = 0x7;	
	PORT->Group[0].PINCFG[16].bit.PMUXEN = 1;
	PORT->Group[0].PMUX[8].bit.PMUXE = 0x7;	
	PORT->Group[0].PINCFG[15].bit.PMUXEN = 1;
	PORT->Group[0].PMUX[7].bit.PMUXO = 0x7;
		
	SYSCTRL->XOSC32K.bit.XTALEN = 1;
	SYSCTRL->XOSC32K.bit.EN32K = 1;
	SYSCTRL->XOSC32K.bit.ENABLE = 1;
	
	GCLK->GENDIV.reg = GCLK_GENDIV_ID(1) | GCLK_GENDIV_DIV(1);
	GCLK->GENCTRL.reg = GCLK_GENCTRL_ID(1) | GCLK_GENCTRL_SRC_XOSC32K | GCLK_GENCTRL_OE | GCLK_GENCTRL_GENEN;
	
	SYSCTRL->OSC8M.bit.PRESC = 0x00;  // divide by 1 
	SYSCTRL->OSC8M.bit.ENABLE = 1;
	
	//GCLK->GENCTRL.reg = GCLK_GENCTRL_ID(0) | GCLK_GENCTRL_SRC_OSC8M | GCLK_GENCTRL_OE | GCLK_GENCTRL_GENEN;	
	GCLK->GENCTRL.reg = (0xffc0e0f0 & GCLK->GENCTRL.reg) | 0x00090600; // on register level. Check datasheet bro
	

} 