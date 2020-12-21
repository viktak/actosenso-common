#ifndef COMMON_ENUMS
#define COMMON_ENUMS

enum EVENTCATEGORIES {
  System,
  Conn,
  MqttMsg,
  NtpTime,
  Reboot,
  Authentication,
  Login,
  PageHandler,
  RefreshSunsetSunrise,
  ReadTemp,
  MqttParamChange,
  TemperatureInterval,
  Hall,
  DSTChange,
  TimeZoneChange,
  IRreceived,
  Lights,
  EntranceLight,
  PwmAutoChange,
  StaircaselightDelay,
  StaircaseLight,
  I2CButtonPressed,
  FriendlyNameChange,
  HeartbeatIntervalChange,
  Relay,
  Clock,
  ArchlightRotaryEncoderDirection
};

// Connection FSM operational states
enum CONNECTION_STATE {
  STATE_CHECK_WIFI_CONNECTION,
  STATE_WIFI_CONNECT,
  STATE_CHECK_INTERNET_CONNECTION,
  STATE_INTERNET_CONNECTED
};

//  Mode operational states
enum OPERATION_MODE{
  DEMO,
  NORMAL,
  OM_OFFLINE,
  OM_WIFI_IR_GATEWAY,
  OM_IR_LEARN
};

#endif