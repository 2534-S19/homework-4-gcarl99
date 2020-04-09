/*
 * homework4.h
 *
 *  Created on:
 *      Author:
 */

#ifndef HOMEWORK4_H_
#define HOMEWORK4_H_

// This function initializes the board by turning off the Watchdog Timer.
void initBoard();
bool charFSM(char rChar);

// TODO: Define any constants that are local to homework.c using #define
#define PRESCALAR 19
#define FIRST_MOD_REG 8
#define SECOND_MOD_REG 0x55
#define NO_CHAR 0xFF

#endif /* HOMEWORK4_H_ */
