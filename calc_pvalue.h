/*
 * calc_pvalue.h
 *
 *     Created on: 2016/11/21
 *         Author: Tsukasa Fukunaga
 */

#ifndef CALC_PVALUE_H
#define CALC_PVALUE_H

#define TEST_W_SIZE 13
#define TEST_LENGTH_SIZE 6

static int w_array[TEST_W_SIZE] = {20,30,40,50,60,70,80,90,100,150,200,250,300};
static double eta_array[TEST_W_SIZE] = {1.487,1.225,1.113,1.038,0.991,0.958,0.939,0.928,0.914,0.877,0.862,0.849,0.841};
static double mu_array[TEST_LENGTH_SIZE][TEST_W_SIZE] = {{8.89, 7.58, 7.00,6.66,6.44,6.32,6.22,6.15,6.11,5.98,5.88,0.0,0.0}, //length=200
						  {10.03, 8.48, 7.78,7.41,7.15,6.99,6.87,6.79,6.75,6.60,6.52,6.47,6.42}, //length=300
						  {10.85, 9.11, 8.36,7.93,7.66,7.48,7.35,7.27,7.21,7.02,6.93,6.88,6.86}, //length=400
						  {12.07,10.12, 9.22,8.71,8.40,8.19,8.05,7.96,7.88,7.68,7.57,7.51,7.45}, //length=600
						  {12.94,10.79, 9.83,9.29,8.94,8.72,8.57,8.46,8.38,8.15,8.05,7.96,7.91}, //length=800
						  {13.58,11.32,10.34,9.74,9.36,9.13,8.96,8.85,8.76,8.51,8.38,8.29,8.24}}; //length=1000
  
static double lnMN_array[TEST_LENGTH_SIZE] = {10.59,11.40,11.98,12.79,13.37,13.82};

#endif
