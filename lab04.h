#ifndef LAB04_H
#define LAB04_H

/**
 * @file lab04.h
 * @author Kathryn Rodgers
 */

/**
 * Returns the maximum value in arr
 *
 * @param arr  an array of (possibly negative) integers
 * @param size  the length of arr
 * @return  the largest value in the array
 */
int findMax(const int arr[], size_t size);


/**
 * Returns the largest multiple of mult found in arr
 *
 * @param arr  an array of (possibly negative) integers
 * @param size  the length of arr
 * @param mult  the number the max should be a multiple of
 * @return  largest multiple of mult in the array or NAN(0.0/0.0) if none exists
 */
double maxMult(int arr[], size_t size, int mult);


/**
 * Determines if there are two values in arr that sum to target
 *
 * @param arr    an array of (possibly negative) doubles
 * @param size   the length of arr
 * @param target  the value of the desired sum
 *
 * @return true if two values in the array sum to target; false otherwise
 *
 */
bool canAdd(double arr[], size_t size, double target);


/**
 * Determines if the string toFind is a substring of word
 *
 * @param word  the string to search through
 * @param toFind  the substring to look for
 *
 * @return  true if toFind is a substring of word; false otherwise or if toFind is empty
 */
bool isSubString(const std::string& word, const std::string& toFind);

#endif
