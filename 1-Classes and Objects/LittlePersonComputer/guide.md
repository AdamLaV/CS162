int program2[] = { 901 , 307 , 506 , 207 , 902 , 0 , 10 };
int program2Length = 7 ;
/*Program that tests branch statement
* Should ask for input. If input is 0, prints 1. For any other value, prints 0.
*
* 0: Get input to ACC
* 1: If ACC is 0, set PC to 4 to jump ahead
* 2: Load value from 7 into ACC (load 0 )
* 3: Set PC to 5 to jump ahead
* 4: Load value from 8 into ACC (load 1 )
* 5: Print
* 6: End
* 7: Data Storage (0)
* 8: Data Storage (1)
*/
// 0 1 2 3 4 5 6 7 8
int program3[] = { 901 , 704 , 507 , 605 , 508 , 902 , 000 , 0 , 1 };
int program3Length = 9 ;
//Note : you can test 8XX instruction by changing instruction 1 to 804
//New expected output is 1 for any input >= 0, 0 for any negative input
/*Program that tests branch statements in loop
* Should count down from 10 to 1
*
* 0: Load 10 to ACC
* 1: Print current value
* 2: Subtract value from location 7 (subtract 1)
* 3: If ACC is now 0, set PC to instruction 5
* 4: Set PC to instruction 1
* 5: End
* 6: Data Storage (10)
* 7: Data Storage (1)
*/
// 0 1 2 3 4 5 6 7
int program4[] = { 506 , 902 , 207 , 705 , 601 , 0 , 10 , 1 };
int program4Length = 8 ;

