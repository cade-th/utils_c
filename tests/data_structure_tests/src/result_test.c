#include "../include/result_test.h"
#include <stdio.h>
#include <stdlib.h>

error get_val(int input) {
    error function_error;
    int truth = 0;

    if (input == truth) {
        function_error.ok = 1; 
        ERROR_RETURN(function_error,int,0);

    }
    else {
        if (input == 1) {
            function_error.type = error_1;
            ERROR_RETURN(function_error,int,1);
        }
        if (input == 2) {
            function_error.type = error_2;
            ERROR_RETURN(function_error,int,2);
        }
        if (input == 3) {
            function_error.type = error_3;
            ERROR_RETURN(function_error,int,3);
        }
    }
    function_error.type = error_4;
    ERROR_RETURN(function_error,int,4);
}

void test_result(void) {
    error test_error = get_val(5);    

    if(test_error.ok) {
        printf("Test Success: value %d\n", UNWRAP(int,test_error));
    }
    else {
        printf("Test Failed:\n");
        switch (test_error.type) {
            case error_1 :
                printf("Error 1 with value %d\n", UNWRAP(int,test_error));
                break;
            case error_2 :
                printf("Error 2 with value %d\n", UNWRAP(int,test_error));
                break;
            case error_3 :
                printf("Error 3 with value %d\n", UNWRAP(int,test_error));
            case error_4 :
                printf("Error 4 with value %d\n", UNWRAP(int,test_error));
        };
    }
}
