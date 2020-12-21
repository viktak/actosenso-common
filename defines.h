#ifndef COMMON_DEFINES

#define COMMON_DEFINES

#define ADMIN_USERNAME "admin"
#define ADMIN_PASSWORD "admin"

//  Home coordinates
#define LATITUDE 37.9908997
#define LONGITUDE 23.70332

#define DEBUG_WIFI_SSID "Trabant"
#define DEBUG_WIFI_PASSWORD "Tal@lm@ny8191!"

#define DEBUG_MQTT_SERVER "192.168.1.99"


#define WIFI_CONNECTION_TIMEOUT 60
#define ACCESS_POINT_TIMEOUT 300000

#define OTA_BLINKING_RATE 3

#define DEFAULT_PASSWORD "esp12345678"
#define DEFAULT_MQTT_SERVER "test.mosquitto.org"
#define DEFAULT_MQTT_PORT 1883
#define DEFAULT_MQTT_TOPIC  "vnode"
#define DEFAULT_HEARTBEAT_INTERVAL 300
#define NODE_DEFAULT_FRIENDLY_NAME "vNode"

#define NTP_REFRESH_INTERVAL 2592000

#define BUTTON_DEBOUNCE_DELAY  500         //  ms delay for button press
#define BUTTON_LONG_PRESS_TRESHOLD 2000   //  ms after which button press is considered LONG_PRESS

#define DST_TIMEZONE_OFFSET 3    // Day Light Saving Time offset
#define  ST_TIMEZONE_OFFSET 2    // Standard Time offset

#endif