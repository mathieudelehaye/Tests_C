//
//  hello.c
//  C_Language_Tests
//
//  Created by Mathieu Delehaye on 6/20/20.
//  Copyright © 2020 Mathieu Delehaye. All rights reserved.
//

#include "hello.h"

int helloWorld() {
   // printf() displays the string inside quotation
   printf("Hello, World!\n");
   return 0;
}

int helloTo(char * name) {
   // printf() displays the string inside quotation
   printf("Hello, %s!\n", name);
   return 0;
}

void hello2() {
    printf("hello");
}
