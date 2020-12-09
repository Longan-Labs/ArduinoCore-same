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

void loop()
{
    uint8_t ret;
    uint32_t id;
    uint8_t len;
    uint8_t buf[8];
    uint8_t i;
      
    ret = can.readMsgBuf(&id, &len, buf);
    if (ret == CAN_OK) {
        Serial.print("Got a message from: ");
        Serial.print(id);
        Serial.print("  Length: ");
        Serial.print(len);
        Serial.print("  Data: ");
        for (i = 0; i < len; i++) {
            Serial.print(buf[i], HEX);
        }
        Serial.println("");
    }
}
