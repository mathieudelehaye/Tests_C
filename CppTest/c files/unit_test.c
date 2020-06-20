//
//  unit_test.c
//  C_Language_Tests
//
//  Created by Mathieu Delehaye on 6/20/20.
//  Copyright © 2020 Mathieu Delehaye. All rights reserved.
//

#include "unit_test.h"

void runUnitTests() {
//    helloTest();
    utf8EncodeTest();
}

void helloTest() {
    helloWorld();
    helloTo("Mathieu");
}

void utf8EncodeTest() {
    unsigned int codePoint; // test input variable
    const int outputSize = 4;
    unsigned char output[outputSize];  // test output variable
    
    // Test 1
    printf("Test 1 started\n");
    codePoint = 0x24;
    printf("codePoint = %x\n", codePoint);
    utf8Encode(codePoint, output);
    printf("output = ");
    for (int i = outputSize - 1; i >= 0; i--) {
        printf(" %x", output[i]);
    }
    printf("\n");
    if(output[0]==0x24) {
        printf("Test 1 suceeded\n");
    } else {
        printf("Test 1 failed\n");
    }
    printf("\n");
    
    // Test 2
    printf("Test 2 started\n");
    codePoint = 0xA2;
    printf("codePoint = %x\n", codePoint);
    utf8Encode(codePoint, output);
    printf("output = ");
    for (int i = outputSize - 1; i >= 0; i--) {
        printf(" %x", output[i]);
    }
    printf("\n");
    if(output[1]==0xC2&&output[0]==0xA2) {
        printf("Test 2 suceeded\n");
    } else {
        printf("Test 2 failed\n");
    }
    printf("\n");
    
    // Test 3
    printf("Test 3 started\n");
    codePoint = 0x939;
    printf("codePoint = %x\n", codePoint);
    utf8Encode(codePoint, output);
    printf("output = ");
    for (int i = outputSize - 1; i >= 0; i--) {
        printf(" %x", output[i]);
    }
    printf("\n");
    if(output[2]==0xE0&&output[1]==0xA4&&output[0]==0xB9) {
        printf("Test 3 suceeded\n");
    } else {
        printf("Test 3 failed\n");
    }
    printf("\n");
    
    // Test 4
    printf("Test 4 started\n");
    codePoint = 0x20AC;
    printf("codePoint = %x\n", codePoint);
    utf8Encode(codePoint, output);
    printf("output = ");
    for (int i = outputSize - 1; i >= 0; i--) {
        printf(" %x", output[i]);
    }
    printf("\n");
    if(output[2]==0xE2&&output[1]==0x82&&output[0]==0xAC) {
        printf("Test 4 suceeded\n");
    } else {
        printf("Test 4 failed\n");
    }
    printf("\n");
    
    // Test 5
    printf("Test 5 started\n");
    codePoint = 0xD55C;
    printf("codePoint = %x\n", codePoint);
    utf8Encode(codePoint, output);
    printf("output = ");
    for (int i = outputSize - 1; i >= 0; i--) {
        printf(" %x", output[i]);
    }
    printf("\n");
    if(output[2]==0xED&&output[1]==0x95&&output[0]==0x9C) {
        printf("Test 5 suceeded\n");
    } else {
        printf("Test 5 failed\n");
    }
    printf("\n");
    
    // Test 6
    printf("Test 6 started\n");
    codePoint = 0x10348;
    printf("codePoint = %x\n", codePoint);
    utf8Encode(codePoint, output);
    printf("output = ");
    for (int i = outputSize - 1; i >= 0; i--) {
        printf(" %x", output[i]);
    }
    printf("\n");
    if(output[3]==0xF0&&output[2]==0x90&&output[1]==0x8D&&output[0]==0x88) {
        printf("Test 6 suceeded\n");
    } else {
        printf("Test 6 failed\n");
    }
    printf("\n");
}
