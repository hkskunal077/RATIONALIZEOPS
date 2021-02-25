#ifndef RATIONALIZE_OPS_INCLUDE
#define RATIONALIZE_OPS_INCLUDE

/*The function takes a double precision number, and returns its composition in terms
of possible fractions that can generate back that number, we can set the precision and the number of iteration to vary the scale of accuracy to which we need to rationalize. */
int* rationalize(double num);

/*Actual testing function*/
void test_rationalize(double);

#endif

