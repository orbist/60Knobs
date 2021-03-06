/*
 * This file contains all the definitions of the constats used throughout the code
 */

#ifndef INC_GUARD_DEFINITIONS
#define INC_GUARD_DEFINITIONS

#include <stdint.h>

//update these when releasing new version
#define MAJOR_VERSION 1
#define MINOR_VERSION 1
#define FIX_VERSION 3

#define FAST_FLASH 300
#define SLOW_FLASH 750
#define PAUSE_FLASH 1500

//reset to factory preset timeout
const uint16_t reset_timeout = 5000;

/*--- EEPROM Format Chuncks ---*/

// change these any time the data structure of a preset changed
// this will trigger reformatting on the next startup
uint8_t sigByteOne = 0xAB;
uint8_t sigByteTwo = 0x3D;
uint8_t sigByteThree = 0x66;


/*---   SYSEX INTERPRETER CONSTANTS   ---*/
const uint8_t BASTL_MANUFACTURER_ID = 48;

enum SysexByteNumber_t {
  MANUFACTURER = 1,
  COMMAND = 2,
  PARAM1 = 3,
  PARAM2 = 4,
  PARAM3 = 5,
  PARAM4 = 6,
  PARAM5 = 7
};

//the numbers associated with every command in the interpreter
enum Command_t {
  SETKNOBASGLOBALCC = 1,
  SETKNOBASBNRPN = 2,
  SETKNOBASUNRPN = 3,
  SETKNOBASDX = 4,
  PRESETSAVE = 5,
  PRESETLOAD = 6,
  DUMPPRESET = 7,
  SYNCKNOBS = 8,
  CHANNELCHANGE = 9,
  RANDOMIZER = 10,
  SETKNOBASCCRANGE = 11,
  SETKNOBASINDEPCCRANGE = 12,
  SETKNOBASINDEPCC = 15,
  DISABLEKNOB = 16,
  INVERTKNOB = 17,
  SETKNOBASENRPN = 18,
  DROPNRPNLSB = 19

};

/*---   Tunable interface behavior   ---*/
const uint8_t KnobSelectThreshold = 2;
//#define CLICKSPEEDMIN 100
//#define CLICKSPEEDMAX 350

/*---   MISC. CONSTANTS   ---*/
const uint8_t NUMBEROFKNOBS = 60;
const uint8_t NUMBEROFPRESETS = 4;

#endif
