#ifndef __MAC_H__
#define __MAC_H__

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "pt.h"

bool
mac_tx_next(uint8_t *data);

bool
mac_rx_next(uint8_t data);

PT_THREAD(mac_tx_start(void));

void
mac_init(void);

void
mac_rx_abort(void);

#endif
