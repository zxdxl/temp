/* HAL-only entry function */
#include "hal_data.h"
void hal_entry(void)
{

    while (1)
    {
        // g_ioport = instance of io port driver
        g_ioport.p_api->pinWrite(IOPORT_PORT_00_PIN_00, IOPORT_LEVEL_LOW);

        R_BSP_SoftwareDelay(1, BSP_DELAY_UNITS_SECONDS);

        g_ioport.p_api->pinWrite(IOPORT_PORT_00_PIN_00, IOPORT_LEVEL_HIGH);

        R_BSP_SoftwareDelay(1, BSP_DELAY_UNITS_SECONDS);
    }
}
