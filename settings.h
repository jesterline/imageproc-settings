/*
 * File:   settings.h
 * Author: ronf
 *
 * Created on December 24, 2014, 3:39 PM
 */

#ifndef SETTINGS_H
#define	SETTINGS_H

#define IDENT_STR "BIOMIMETICS-ROACH;AMS-ENC;"

/////// Radio settings ///////
#define RADIO_CHANNEL		0x0F
#define RADIO_SRC_ADDR 		0x2104
#define RADIO_PAN_ID            0x2171

#define RADIO_TXPQ_MAX_SIZE   10
#define RADIO_RXPQ_MAX_SIZE   10


//Telemetry type setup
#define TELEM_TYPE vrTelemStruct_t
#define TELEM_INCLUDE "vr_telem.h"
#define TELEMPACKFUNC(x) vrTelemGetData(x)

    // specific to robot
#define AMS_ENC_OFFSET_0 9509
#define AMS_ENC_OFFSET_1 6568

#endif	/* SETTINGS_H */
