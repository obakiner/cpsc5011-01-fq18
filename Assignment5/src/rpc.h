#ifndef RPC_H_
#define RPC_H_
#include <string>
using namespace std;

/*
 * Support for Rock Paper Scissors library.
 * This library contains all the game rules:
 * essentially given two choices, which choice wins.
 */

/* is_valid_choice(s)
 * Answers whether the input is a valid choice, i.e.
 * either "rock" or "paper" or "scissors".  In later
 * versions it may support legal abbreviations, case
 * insensitivity, etc.
 */

bool is_valid_choice(string s);

/* who_wins(s1, s2)
 * s1 and s2 must be strings are valid according to
 * is_valid_choice. This function returns 0 if
 * the game is a draw (i.e. s1 == s2), returns 1 if
 * s1 beats s2, and returns 2 if s2 beats s1.  The function
 * should return -1 if either of the arguments is invalid
*/

int who_wins(string s1, string s2);

/* s must be a string that is valid according to is_valid_choice.
 * Returns either "rock", "paper, or "scissors" – the
 * choice that would beat the input string.  It should
 * return the empty string if the argument is not one
 * of the three valid strings.
 */

string winning_choice_for(string s);

#endif /* RPC_H_ */
