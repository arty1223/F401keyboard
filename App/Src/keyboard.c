#include "keyboard.h"

void typeOnKeyboard(char cmd[])
{
  subKeyBoard keyBoardHIDsub = {0,};
  keyBoardHIDsub.id = 1;

  for (int i = 0; i < (int)strlen(cmd); i++)
  {
    char charToType = cmd[i];    
    uint8_t KEYCODE = 0x00;
    uint8_t MODIFIER = 0x00;

    switch (charToType)
    {
    case 'A':
      KEYCODE = 0x04;
      MODIFIER = 0x02;
      break;
    case 'B':
      KEYCODE = 0x05;
      MODIFIER = 0x02;
      break;
    case 'C':
      KEYCODE = 0x06;
      MODIFIER = 0x02;
      break;
    case 'D':
      KEYCODE = 0x07;
      MODIFIER = 0x02;
      break;
    case 'E':
      KEYCODE = 0x08;
      MODIFIER = 0x02;
      break;
    case 'F':
      KEYCODE = 0x09;
      MODIFIER = 0x02;
      break;
    case 'G':
      KEYCODE = 0x0A;
      MODIFIER = 0x02;
      break;
    case 'H':
      KEYCODE = 0x0B;
      MODIFIER = 0x02;
      break;
    case 'I':
      KEYCODE = 0x0C;
      MODIFIER = 0x02;
      break;
    case 'J':
      KEYCODE = 0x0D;
      MODIFIER = 0x02;
      break;
    case 'K':
      KEYCODE = 0x0E;
      MODIFIER = 0x02;
      break;
    case 'L':
      KEYCODE = 0x0F;
      MODIFIER = 0x02;
      break;
    case 'M':
      KEYCODE = 0x10;
      MODIFIER = 0x02;
      break;
    case 'N':
      KEYCODE = 0x11;
      MODIFIER = 0x02;
      break;
    case 'O':
      KEYCODE = 0x12;
      MODIFIER = 0x02;
      break;
    case 'P':
      KEYCODE = 0x13;
      MODIFIER = 0x02;
      break;
    case 'Q':
      KEYCODE = 0x14;
      MODIFIER = 0x02;
      break;
    case 'R':
      KEYCODE = 0x15;
      MODIFIER = 0x02;
      break;
    case 'S':
      KEYCODE = 0x16;
      MODIFIER = 0x02;
      break;
    case 'T':
      KEYCODE = 0x17;
      MODIFIER = 0x02;
      break;
    case 'U':
      KEYCODE = 0x18;
      MODIFIER = 0x02;
      break;
    case 'V':
      KEYCODE = 0x19;
      MODIFIER = 0x02;
      break;
    case 'W':
      KEYCODE = 0x1A;
      MODIFIER = 0x02;
      break;
    case 'X':
      KEYCODE = 0x1B;
      MODIFIER = 0x02;
      break;
    case 'Y':
      KEYCODE = 0x1C;
      MODIFIER = 0x02;
      break;
    case 'Z':
      KEYCODE = 0x1D;
      MODIFIER = 0x02;
      break;
    case 'a':
      KEYCODE = 0x04;
      break;
    case 'b':
      KEYCODE = 0x05;
      break;
    case 'c':
      KEYCODE = 0x06;
      break;
    case 'd':
      KEYCODE = 0x07;
      break;
    case 'e':
      KEYCODE = 0x08;
      break;
    case 'f':
      KEYCODE = 0x09;
      break;
    case 'g':
      KEYCODE = 0x0A;
      break;
    case 'h':
      KEYCODE = 0x0B;
      break;
    case 'i':
      KEYCODE = 0x0C;
      break;
    case 'j':
      KEYCODE = 0x0D;
      break;
    case 'k':
      KEYCODE = 0x0E;
      break;
    case 'l':
      KEYCODE = 0x0F;
      break;
    case 'm':
      KEYCODE = 0x10;
      break;
    case 'n':
      KEYCODE = 0x11;
      break;
    case 'o':
      KEYCODE = 0x12;
      break;
    case 'p':
      KEYCODE = 0x13;
      break;
    case 'q':
      KEYCODE = 0x14;
      break;
    case 'r':
      KEYCODE = 0x15;
      break;
    case 's':
      KEYCODE = 0x16;
      break;
    case 't':
      KEYCODE = 0x17;
      break;
    case 'u':
      KEYCODE = 0x18;
      break;
    case 'v':
      KEYCODE = 0x19;
      break;
    case 'w':
      KEYCODE = 0x1A;
      break;
    case 'x':
      KEYCODE = 0x1B;
      break;
    case 'y':
      KEYCODE = 0x1C;
      break;
    case 'z':
      KEYCODE = 0x1D;
      break;
    case '1':
      KEYCODE = 0x1E;
      break;
    case '2':
      KEYCODE = 0x1F;
      break;
    case '3':
      KEYCODE = 0x20;
      break;
    case '4':
      KEYCODE = 0x21;
      break;
    case '5':
      KEYCODE = 0x22;
      break;
    case '6':
      KEYCODE = 0x23;
      break;
    case '7':
      KEYCODE = 0x24;
      break;
    case '8':
      KEYCODE = 0x25;
      break;
    case '9':
      KEYCODE = 0x26;
      break;
    case '0':
      KEYCODE = 0x27;
      break;
    case ' ':
      KEYCODE = 0x2C;
      break;
    case '-':
      KEYCODE = 0x2D;
      break;
    case ';':
      KEYCODE = 0x33;
      break; // semi-colon
    case ':':
      KEYCODE = 0x33;
      MODIFIER = 0x02;
      break; // colon
    case '\'':
      KEYCODE = 0x34;
      break; // single quote
    case '\"':
      KEYCODE = 0x34;
      MODIFIER = 0x02;
      break; // double quote
    case '/':
      KEYCODE = 0x38;
      break; // slash
    case '?':
      KEYCODE = 0x24;
      MODIFIER = 0x02;
      break; // question mark
    case '.':
      KEYCODE = 0x37;
      break; // dot
    default:
      KEYCODE = 0x00;
      break; // Default case for undefined characters
    }

    keyBoardHIDsub.MODIFIER = MODIFIER; // To press shift key
    keyBoardHIDsub.KEYCODE1 = KEYCODE;

    USBD_HID_SendReport(&hUsbDeviceFS, (uint8_t *)&keyBoardHIDsub, (uint16_t)sizeof(keyBoardHIDsub));
    HAL_Delay(20);

    keyBoardHIDsub.MODIFIER = 0x00;
    keyBoardHIDsub.KEYCODE1 = 0x00;

    USBD_HID_SendReport(&hUsbDeviceFS, (uint8_t *)&keyBoardHIDsub, (uint16_t)sizeof(keyBoardHIDsub));
    HAL_Delay(20);
  }
}

void keyPressRelease(uint8_t MODIFIER, uint8_t KEYCODE)
{
  subKeyBoard keyBoardHIDsub = {0,};

  keyBoardHIDsub.id = 1;
  keyBoardHIDsub.MODIFIER = MODIFIER; // To press shift key
  keyBoardHIDsub.KEYCODE1 = KEYCODE;

  USBD_HID_SendReport(&hUsbDeviceFS, (uint8_t *)&keyBoardHIDsub, (uint16_t)sizeof(keyBoardHIDsub));
  HAL_Delay(20);

  keyBoardHIDsub.MODIFIER = 0x00;
  keyBoardHIDsub.KEYCODE1 = 0x00;

  USBD_HID_SendReport(&hUsbDeviceFS, (uint8_t *)&keyBoardHIDsub, (uint16_t)sizeof(keyBoardHIDsub));
  HAL_Delay(20);  
}

void pressMediaKey(uint8_t key){
    mediaHID_t mediaHID;
    mediaHID.id = 2;
    mediaHID.key = key;
    USBD_HID_SendReport(&hUsbDeviceFS, (uint8_t *)&mediaHID, sizeof(mediaHID_t));
    HAL_Delay(20);
    mediaHID.key = 0;
    USBD_HID_SendReport(&hUsbDeviceFS, (uint8_t *)&mediaHID, sizeof(mediaHID_t));
    HAL_Delay(20);
}