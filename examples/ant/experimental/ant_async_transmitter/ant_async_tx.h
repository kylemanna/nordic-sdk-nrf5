/*
This software is subject to the license described in the License.txt file
included with this software distribution. You may not use this file except in compliance
with this license.

Copyright (c) Dynastream Innovations Inc. 2015
All rights reserved.
*/

#ifndef ANT_ASYNC_TX_H__
#define ANT_ASYNC_TX_H__

#include <stdint.h>
#include "ant_stack_handler_types.h"
#include "bsp.h"


/**@brief Function for configuring an asynchronous transmitter
 *
 * @param[in] timer_prescaler   Value of the app timer prescaler
 */
void ant_async_tx_setup(uint32_t timer_prescaler);


/**@brief Handles BSP events.
 *
 * @param[in] evt   BSP event.
 */
void ant_async_tx_bsp_evt_handler(bsp_event_t evt);


/**@brief Handle ANT events
 * @param[in] p_ant_evt A pointer to the received ANT event to handle.
 */
void ant_async_tx_event_handler(ant_evt_t * p_ant_evt);

#endif // ANT_ASYNC_TX_H__
