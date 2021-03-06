/**
 * @file header.h
 * @author Shubham Phansekar (shubhamphansekar90@gmail.com)
 * @brief Functions to perform various schemes in Maturity calculator
 * Term Deposit Maturity Amount Calculation
 * Recurring Deposit Calculator
 * Public Provident Fund Calculator
 * 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/**
 * @brief Error values for Maturity amount calculator operations
 * 
 */
// typedef enum error_t {
//     ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
//     ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
//     SUCCESS = 0             /**< Compute operation is successful */
// }error_t;




/**
 * @brief computes maturity of the principal amount for term deposit
 * @param[in] principal Pointer to prinicipal
 * @param[in] rate Pointer to rate
 * @param[in] years Pointer to years
 * @param[out] maturity_amount Pointer to store maturity_amount
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */

double calculate_term_deposit(double principal,double rate,double years);

/**
 * @brief computes maturity of the principal amount for recurring deposit
 * @param[in] principal Pointer to prinicipal
 * @param[in] rate Pointer to rate
 * @param[in] years Pointer to years
 * @param[out] maturity_amount Pointer to store maturity_amount
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */


double calculate_recurring_deposit(double principal,double rate,double years);


/**
 * @brief computes maturity of the principal amount for PPF
 * @param[in] principal Pointer to prinicipal
 * @param[in] rate Pointer to rate
 * @param[in] years Pointer to years
 * @param[out] maturity_amount Pointer to store maturity_amount
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */



double calculate_ppf(double principal,double rate,double years);


/**
 * @brief computes maturity of the principal amount for annual deposit
 * @param[in] principal Pointer to prinicipal
 * @param[in] rate Pointer to rate
 * @param[in] years Pointer to years
 * @param[out] maturity_amount Pointer to store maturity_amount
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */

double calculate_annual_deposit(double principal, double rate, double years);




/**
 * @brief TODO Add the remaining functions
 * 
 */

#endif //HEADER_H