/***********************************************************************************
 *                                                                                 *
 * NAME: test.c                                                                    *
 *                                                                                 *
 * AUTHOR: Michael Brockus.                                                        *
 *                                                                                 *
 * CONTACT: <mailto:michael@squidfarts.com>                                        *
 *                                                                                 *
 * PURPOSE:                                                                        *
 *                                                                                 *
 * The majority of the file will be a series of test functions. Test functions     *
 * follow the convention of starting with the word "test_" or "spec_". You don't   *
 * HAVE to name them this way, but it makes it clear what functions are tests for  *
 * other developers.  Also, the automated scripts that come with Unity or Ceedling *
 * will default to looking for test functions to be prefixed this way. Test        *
 * functions take no arguments and return nothing. All test accounting is handled  *
 * internally in Unity.                                                            *
 *                                                                                 *
 * NOTICES:                                                                        *
 *                                                                                 *
 * License: Apache 2.0 :http://www.apache.org/licenses/LICENSE-2.0                 *
 *                                                                                 *
 ***********************************************************************************/
#include <unity.h>
#include "stack.h"

/* Global variables */
SqdStackOf * stack;
char  a = 'A';
int   b = 15;
const char *c = "str";

/*
 *  Prototype functions for setup and teardown.
 */
void setUp(void)
{
    stack = createStack();
}//end of function setUp



void tearDown(void)
{
    ;
}//end of function tearDown


/*
 *  Prototype functions from the external test file.
 */
void test_enstack(void);

void test_enstack(void)
{
    
    pushStack(&stack, &a);
    pushStack(&stack, &b);
    pushStack(&stack, &c);
    
    TEST_ASSERT_NOT_NULL(stack);/* Get from an invalid position */
}//end of test case

// NOTE: Need to add more test cases
