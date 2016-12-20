//
//  ui.h
//  a2bejwld
//
//  Created by Jeremy Rand on 2016-07-20.
//  Copyright © 2016 Jeremy Rand. All rights reserved.
//

#ifndef __a2bejwld__ui__
#define __a2bejwld__ui__


#include <stdbool.h>


// API

extern void initUI(void);

extern bool soundEnabled(void);
extern bool mockingBoardEnabled(void);

extern void printInstructions(void);

extern void playGame(void);


#endif /* defined(__a2bejwld__ui__) */
