#pragma once
#include "main.h"
#include "usbd_hid.h"

#define USB_HID_SCAN_NEXT 0x01
#define USB_HID_SCAN_PREV 0x02
#define USB_HID_STOP 0x04
#define USB_HID_EJECT 0x08
#define USB_HID_PAUSE 0x10
#define USB_HID_MUTE 0x20
#define USB_HID_VOL_UP 0x40
#define USB_HID_VOL_DEC 0x80

extern USBD_HandleTypeDef hUsbDeviceFS;

typedef struct
{
  uint8_t id;
  uint8_t MODIFIER;
  uint8_t RESERVED;
  uint8_t KEYCODE1;
  uint8_t KEYCODE2;
  uint8_t KEYCODE3;
  uint8_t KEYCODE4;
  uint8_t KEYCODE5;
  uint8_t KEYCODE6;
} subKeyBoard;

typedef struct
{
  uint8_t id;  // Report ID
  uint8_t key; // Key
} mediaHID_t;

void typeOnKeyboard(char cmd[]);
void keyPressRelease(uint8_t MODIFIER, uint8_t KEYCODE);
void pressMediaKey(uint8_t key);