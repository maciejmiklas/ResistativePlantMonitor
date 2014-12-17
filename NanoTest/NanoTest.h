// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef NanoTest_H_
#define NanoTest_H_
#include "Arduino.h"
//add your includes for the project NanoTest here


//end of add your includes here
#ifdef __cplusplus
extern "C" {
#endif
void loop();
void setup();
#ifdef __cplusplus
} // extern "C"
#endif

//add your function definitions for the project NanoTest here


void sing(int s);
void buzz(int targetPin, long frequency, long length);

//Do not add code below this line
#endif /* NanoTest_H_ */
