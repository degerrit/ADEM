///////////////////////////////////////////////////////////////////////////////////////////////////
// I2C GPS NAV registers
///////////////////////////////////////////////////////////////////////////////////////////////////
//
#define I2C_GPS_STATUS_00                            00 //(Read only)
        #define I2C_GPS_STATUS_NEW_DATA       0x01      // New data is available (after every GGA frame)
        #define I2C_GPS_STATUS_2DFIX          0x02      // 2dfix achieved
        #define I2C_GPS_STATUS_3DFIX          0x04      // 3dfix achieved
        #define I2C_GPS_STATUS_WP_REACHED     0x08      // Active waypoint has been reached (not cleared until new waypoint is set)
        #define I2C_GPS_STATUS_NUMSATS        0xF0      // Number of sats in view

#define I2C_GPS_COMMAND                              01 // (write only)
        #define I2C_GPS_COMMAND__1            0x01      
        #define I2C_GPS_COMMAND__2            0x02      
        #define I2C_GPS_COMMAND__3            0x03      
        #define I2C_GPS_COMMAND__4            0x04      
        #define I2C_GPS_COMMAND__5            0x05      
        #define I2C_GPS_COMMAND__6            0x06      
        #define I2C_GPS_COMMAND__7            0x07
        #define I2C_GPS_COMMAND__8            0x08      
        #define I2C_GPS_COMMAND__9            0x09
        #define I2C_GPS_COMMAND__a            0x0a
        #define I2C_GPS_COMMAND__b            0x0b
        #define I2C_GPS_COMMAND__c            0x0c
        #define I2C_GPS_COMMAND__d            0x0d
        #define I2C_GPS_COMMAND__e            0x0e
        #define I2C_GPS_COMMAND__f            0x0f

        
#define I2C_GPS_REG_VERSION                         03   // Version of the I2C_NAV SW uint8_t
#define I2C_GPS_REG_RES2                            04   // reserved for future use (uint8_t)
#define I2C_GPS_REG_RES3                            05   // reserved for future use (uint8_t)
#define I2C_GPS_REG_RES4                            06   // reserved for future use (uint8_t)


#define I2C_GPS_TIME                                07   // UTC Time from GPS in hhmmss.sss * 100 (uint32_t)(unneccesary precision) (Read Only)
#define I2C_GPS_LOCATION                            11   // current location 8 byte (lat, lon) int32_t
#define I2C_GPS_LAT                                 11   // 
#define I2C_GPS_LON                                 15   // 
#define I2C_GPS_ALTITUDE                            19   // GPS altitude in meters (uint16_t)           (Read Only)
#define I2C_GPS_GROUND_SPEED                        23   // GPS ground speed in m/s*100 (uint16_t)      (Read Only)
#define I2C_GPS_GROUND_COURSE			                  27   // GPS ground course (uint16_t)
#define I2C_GPS_FIX_AGE                             31   // GPS fix age 0.001 sec resolution
#define I2C_GPS_RES1                                33   // reserved for future use (uint16_t)




///////////////////////////////////////////////////////////////////////////////////////////////////
// End register definition 
///////////////////////////////////////////////////////////////////////////////////////////////////
