//
//  utf8_encoder.c
//  C_Language_Tests
//
//  Created by Mathieu Delehaye on 6/20/20.
//  Copyright © 2020 Mathieu Delehaye. All rights reserved.
//

#include "utf8_encoder.h"

void utf8Encode(unsigned int codePoint, unsigned char * encodedHexBytes) {
    
    const int encodedHexBytesSize = 4;
    memset(encodedHexBytes, 0, encodedHexBytesSize * sizeof(*encodedHexBytes));
  
	// check range to find byte number 
	if (codePoint <= 0x7f) {
//		printf("1 output byte\n");
		encodedHexBytes[0] = (unsigned char) codePoint & 0x7f;
		
    }
    else if (codePoint <= 0x7ff) {
//		printf("2 output byte\n");
		encodedHexBytes[1] = (unsigned char) (0xc0 | (codePoint >> 6));
		encodedHexBytes[0] = (unsigned char) (0x80 | (codePoint & 0x3f));
    }
    else if (codePoint <= 0xffff) {
//		printf("3 output byte\n");
		encodedHexBytes[2] = (unsigned char) (0xe0 | (codePoint >> 12));
		encodedHexBytes[1] = (unsigned char) (0x80 | ((codePoint >> 6) & 0x3f));
		encodedHexBytes[0] = (unsigned char) (0x80 | (codePoint & 0x3f));
    }
    else if (codePoint <= 0x1fffff) {
//		printf("4 output byte\n");
		encodedHexBytes[3] = (unsigned char) (0xf0 | (codePoint >> 18));
		encodedHexBytes[2] = (unsigned char) (0x80 | ((codePoint >> 12) & 0x3f));
		encodedHexBytes[1] = (unsigned char) (0x80 | ((codePoint >> 6) & 0x3f));
		encodedHexBytes[0] = (unsigned char) (0x80 | (codePoint &0x3f));
    }
    else {
        // invalid codePoint
    }
}

