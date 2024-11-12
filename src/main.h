#ifndef _main_H
#define _main_H


void setupWebInterface(void);
void getFlashValues(void);
void setFlashValues(void);
void buttonWordClockReset(Control* sender, int type, void* param);
void call_langauge_select(Control* sender, int type) ;
void ClearDisplay(void);
void ShowIPaddress(void);
void numbers(int wert, int segment);
int getDigit(int number, int pos);
void buttonRestart(Control* sender, int type, void* param);
void buttonWiFiReset(Control* sender, int type, void* param);
void buttonUpdate(Control* sender, int type, void* param);
void ResetTextLEDs(uint32_t color);
void setLEDcol(int ledNrFrom, int ledNrTo, uint32_t color);
int getPairedLED(int ledNumber);
void switchNightMode(Control* sender, int value);
void switchSingleMinutes(Control* sender, int value);
void switchRandomColor(Control* sender, int value);
void switchShowIP(Control* sender, int value);
void switchWiFiReConnect(Control* sender, int value);
void switchStartupText(Control* sender, int value);
void getRGBTIME(String hexvalue);
void getRGBBACK(String hexvalue);
int hexcolorToInt(char upper, char lower);
void colCallTIME(Control* sender, int type);
void colCallBACK(Control* sender, int type);
void sliderBrightnessDay(Control* sender, int type);
void sliderBrightnessNight(Control* sender, int type);
void call_day_time_start(Control* sender, int type);
void call_day_time_stop(Control* sender, int type);
String IpAddress2String(const IPAddress& ipAddress);
void switchOffline(Control* sender, int value);
void switchOMhints(Control* sender, int value);
void SetOfflineHourOffset(Control* sender, int type);
void SetMyTimeZone(Control* sender, int type);
void SetMyTimeServer(Control* sender, int type);
void getTimeCallback(Control* sender, int type);
void timeCallback(Control* sender, int type);
void checkforNightMode(void);
void update_display(void);
void show_time(int hours, int minutes);
void showMinutes(int minutes);
void back_color(void);
void setLED(int ledNrFrom, int ledNrTo, int switchOn);
void configNTPTime(void);
void setTimezone(String timezone);
void initTime(String timezone);
void printLocalTime(void);
void setTime(int yr, int month, int mday, int hr, int minute, int sec, int isDst);
void handleLEDupdate(void);
void callStartText(void);
void SetWLAN(uint32_t color);
String ScanWiFi(void);
void CaptivePortalSetup(void);
void WIFI_SETUP(void);
void setupOTAupate(void);
void OfflinePotalSetup(void);
void ShowOfflineIPaddress(void);
String getValue(String data, char separator, int index);
void DrawPixelX(int row, int colum, uint32_t c1, uint32_t c2);
void DrawLine(int startrow, int startcolum, int endrow, int endcolum, uint32_t c);
void DrawPixel(int row, int colum, uint32_t c);
void DrawLineX(int startrow, int startcolum, int endrow, int endcolum, uint32_t c1, uint32_t c2);
void showtext(char letter, int wait, uint32_t c);
void WiFi_Lost(void);






#endif