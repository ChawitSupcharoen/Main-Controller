/*
 * subroutine.h
 *
 *  Created on: May 4, 2024
 *      Author: User
 */

#ifndef INC_SUBROUTINE_H_
#define INC_SUBROUTINE_H_

int updateLED(uint8_t* ledVal, TIM_HandleTypeDef* htim, uint32_t timCH);
int retractX();

#endif /* INC_SUBROUTINE_H_ */
