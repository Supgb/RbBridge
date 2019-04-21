#if !defined(_MOTOR_H)
#define _MOTOR_H

#include "bsp.h"

/* 
Definitions of structure description for motor device.
 */
typedef struct
{
    uint16_t max_sp;    // The maximum of speed.
    uint16_t min_sp;    // The minimum of speed.
    uint16_t curr_sp;   // Speed of motor.
    uint8_t  sp_dir;    // Movement direction.
    uint8_t  id;        // Unique id.
    uint8_t  isAct;     // The flag for detecting whether the motor is working.
} __motor_t;


// ------------------ Motor Features API --------------------------
uint8_t motor_update_sp(__motor_t *m, uint16_t sp, uint8_t dir);
uint8_t motor_attach(__motor_t *m);
uint8_t motor_dettach(__motor_t *m);

// ------------------ Motor Control  API --------------------------
uint8_t motor_pid(__motor_t *m);


#endif // _MOTOR_H