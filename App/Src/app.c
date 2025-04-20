#include "app.h"
#include "usb_device.h"
#include "usbd_hid.h"
#include "gpio.h"
#include "keyboard.h"



void app_init(void)
{
    HAL_Delay(1000);
}

void app_tick(void)
{
    pressMediaKey(USB_HID_PAUSE);
    typeOnKeyboard("test");
    HAL_Delay(1500);
}