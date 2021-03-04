#include <cstdint>

/*  TivaWare includes */

// Driverlib
#include "driverlib/sysctl.h"
#include "driverlib/debug.h"
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"
#include "driverlib/gpio.h"
#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/uart.h"


// Utils
#include "utils/uartstdio.h"

// System clock rate, 120 MHz
#define SYSTEM_CLOCK    120000000U

uint32_t clk_rate_hz;

class UART_d{
private:
public:
};

int main(void)
{
//    UART_d A;

    // Initialize system clock to 120 MHz
    clk_rate_hz = MAP_SysCtlClockFreqSet(
                    (SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN |
                     SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480),
                     SYSTEM_CLOCK);
    ASSERT(clk_rate_hz == SYSTEM_CLOCK);

    return 0;
}
