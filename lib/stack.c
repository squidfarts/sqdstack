/***********************************************************************************
 *                                                                                 *
 * NAME: stack.c                                                                   *
 *                                                                                 *
 * AUTHOR: Michael Brockus.                                                        *
 *                                                                                 *
 * CONTACT: <mailto:michael@squidfarts.com>                                        *
 *                                                                                 *
 * PURPOSE:                                                                        *
 *                                                                                 *
 * This file contains function prototypes for this project.  It is where all       *
 * required functions are defined for later use.                                   *
 *                                                                                 *
 * NOTICES:                                                                        *
 *                                                                                 *
 * MIT License                                                                     *
 *                                                                                 *
 * Copyright (c) 2019 Micheal Brockus                                              *
 *                                                                                 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy    *
 * of this software and associated documentation files (the "Software"), to deal   *
 * in the Software without restriction, including without limitation the rights    *
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is           *
 * furnished to do so, subject to the following conditions:                        *
 *                                                                                 *
 * The above copyright notice and this permission notice shall be included in all  *
 * copies or substantial portions of the Software.                                 *
 *                                                                                 *
 * DISCLAIMERS:                                                                    *
 *                                                                                 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR      *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,        *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE     *
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER          *
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,   *
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE   *
 * SOFTWARE.                                                                       *
 *                                                                                 *
 ***********************************************************************************/
#include "stack.h"

/*
 * function to create a stack of given capacity. It initializes size of
 * stack as 0
 *
 */
SqdStackOf * createStack(void)
{
    SqdStackOf * stack = malloc(sizeof(* stack));
    
    stack->_data = NULL;
    stack->_nextPtr = NULL;
    
    return stack;
}

/*
 * Function to add an item to stack.  It increases top by 1
 *
 */
void pushStack(SqdStackOf ** stack, void * data)
{
    SqdStackOf * newCard = createStack();
    
    newCard->_nextPtr = *stack;
    newCard->_data = data;
    *stack = newCard;
}

/*
 * Function to remove an item from stack.  It decreases top by 1
 *
 */
void * popStack(SqdStackOf ** stack)
{
    if (*stack == NULL) return NULL;
    
    SqdStackOf * temp = *stack;
    *stack = (*stack)->_nextPtr;
    void * popped = (*stack)->_data;
    free(temp);
    
    return popped;
}

/*
 * Function to peek at items from stack.  It returns the top value
 *
 */
void * peekStack(SqdStackOf * stack)
{
    if (stack == NULL) return NULL;
    return stack->_data;
}
