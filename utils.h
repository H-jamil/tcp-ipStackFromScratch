/*
 * =====================================================================================
 *
 *       Filename:  utils.h
 *
 *    Description: This file contains the decalaration of all enumerations used in this file
 *
 *        Version:  1.0
 *        Created:  3/10/2020
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author: Jamil Hasibul
 *        Company:  Southern Illinois University Carbondale
 *
 * =====================================================================================

 * =====================================================================================
 */

 #ifndef __UTILS__
 #define __UTILS__

 typedef enum{

   FALSE,
   TRUE
 } bool_t;

 
 #define IS_BIT_SET(n, pos)      ((n & (1 << (pos))) != 0)
 #define TOGGLE_BIT(n, pos)      (n = n ^ (1 << (pos)))
 #define COMPLEMENT(num)         (num = num ^ 0xFFFFFFFF)
 #define UNSET_BIT(n, pos)       (n = n & ((1 << pos) ^ 0xFFFFFFFF))
 #define SET_BIT(n, pos)     (n = n | 1 << pos)

 #endif /* __UTIL__*/
