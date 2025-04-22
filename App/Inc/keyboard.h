#pragma once
#include "main.h"
#include "usbd_hid.h"
#include "keycodes.h"

extern USBD_HandleTypeDef hUsbDeviceFS;

typedef struct
{
  uint8_t ID;
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
  uint8_t ID;  // Report ID
  uint8_t KEYCODE; // Key
} mediaHID_t;

void typeOnKeyboard(char cmd[]);
void keyPressRelease(uint8_t MODIFIER, uint8_t KEYCODE);
void pressMediaKey(uint8_t key);