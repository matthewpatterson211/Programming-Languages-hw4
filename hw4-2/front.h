/*
 * front.h
 *
 *  Created on: Apr 3, 2019
 *      Author: kangh
 */

#ifndef FRONT_H_
#define FRONT_H_

/* Character classes */
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99

/* Token codes */
#define INT_LIT 10
#define IDENT 11
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26
#define ASSIGN_OP 27
#define SEMICOLON 28

int lex(void);

#endif /* FRONT_H_ */
