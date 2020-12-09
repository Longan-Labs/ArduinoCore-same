#include <same51_can.h>

SAME51_CAN can(0);

void setup()
{
    uint8_t ret;
    ret = can.begin(MCP_ANY, CAN_500KBPS, MCP_8MHZ);
    if (ret == CAN_OK) {
        Serial.println("CAN Initialized Successfully!");
    } else {
        Serial.println("Error Initializing CAN...");
    }    
}

byte buf[8] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07};

void loop()
{     
    uint8_t ret = can.sendMsgBuf(0x100, 0, 8, buf);
    if (ret == CAN_OK) {
      Serial.println("Message Sent Successfully!");
    } else {
      Serial.println("Error Sending Message...");
    }
    delay(100);
}
