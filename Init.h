#include "Config.h"
#include "Motor.h"

/* init three motor */
Motor motor1(MOTOR1_EN_PIN, MOTOR1_DIR_PIN, MOTOR1_PUL_PIN, MOTOR_PUL_WAITTIME);
Motor motor2(MOTOR1_EN_PIN, MOTOR1_DIR_PIN, MOTOR1_PUL_PIN, MOTOR_PUL_WAITTIME);
Motor motor3(MOTOR1_EN_PIN, MOTOR1_DIR_PIN, MOTOR1_PUL_PIN, MOTOR_PUL_WAITTIME);