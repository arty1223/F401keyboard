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
    // pressMediaKey(USB_HID_VOL_UP);    
    // keyPressRelease(USB_HID_MODIFIER_LEFT_GUI, 0x19); // ctrl+v
    // HAL_Delay(20);
    // keyPressRelease(0x00, KEY_ENTER);
    HAL_Delay(1000);
}