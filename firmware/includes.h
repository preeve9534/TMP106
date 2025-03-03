/**********************************************************************
 * module-libraries.inc
 *
 * The contents of this file are included into the body of the host
 * firmware after the inclusion of the core libraries and should be
 * used to include libraries that are required for implementation of a
 * particular module application.
 *
 * For the NOP100 module this file is intentionally empty.
 */

 #include <ArduinoQueue.h>
 #include <DallasTemperature.h>
 #include <ModuleConfiguration.h>
 #include <OneWire.h>
 #include <ProcessQueue.h>
 #include "OneWireAddressTable.h"
