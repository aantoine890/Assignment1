/*
 * Copyright (C) NHR@FAU, University Erlangen-Nuremberg.
 * All rights reserved.
 * Use of this source code is governed by a MIT-style
 * license that can be found in the LICENSE file.
 */
#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "affinity.h"
#include "allocate.h"
#include "timing.h"

int main(int argc, char** argv) {
	char hostname[1024];
    	gethostname(hostname, sizeof(hostname)); 
	
	if(argc > 1){
		printf("Hello %s ! Running on %s\n", argv[1], hostname);
	} else {
        	printf("Hello World ! Running on %s\n", hostname);
        }

	return 0;
 }
