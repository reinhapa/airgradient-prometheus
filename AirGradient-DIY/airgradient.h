// Optional.
const char* deviceId = "";

// Hardware options for AirGradient DIY sensor.
const bool hasPM = true;
const bool hasCO2 = true;
const bool hasSHT = true;

// WiFi and IP connection info.
const char* ssid = "PleaseChangeMe";
const char* password = "PleaseChangeMe";
const int port = 9926;

// Uncomment the line below to configure a static IP address.
//#define staticip
#ifdef staticip
IPAddress static_ip(192, 168, 0, 0);
IPAddress gateway(192, 168, 0, 0);
IPAddress subnet(255, 255, 255, 0);
#endif
