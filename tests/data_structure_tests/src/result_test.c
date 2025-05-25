#include "../include/result_test.h"
#include <stdio.h>
#include <stdlib.h>

getnum_error get_val(int input) {
    getnum_error error;
    int truth = 0;

    if (input == truth) {
        error.ok = 1; 
        THROW(error,int,0);
    }
    else {
        if (input == 1) {
            error.type = error_1;
            THROW(error,int,1);
        }
        if (input == 2) {
            error.type = error_2;
            THROW(error,char,'?');
        }
        if (input == 3) {
            error.type = error_3;
            THROW(error,int,3);
        }
    }
    error.type = error_4;
    THROW(error,int,4);
}

void test_result(void) {
    getnum_error error = get_val(2);    

    if(error.ok) {
        printf("Test Success: value %d\n", CATCH(int,error));
    }
    else {
        printf("Test Failed:\n");
        switch (error.type) {
            case error_1 :
                printf("getnum_error_t 1 with value %d\n", CATCH(int,error));
                break;
            case error_2 :
                printf("getnum_error_t 2 with value %c\n", CATCH(char,error));
                break;
            case error_3 :
                printf("getnum_error_t 3 with value %d\n", CATCH(int,error));
            case error_4 :
                printf("getnum_error_t 4 with value %d\n", CATCH(int,error));
        };
    }
}
