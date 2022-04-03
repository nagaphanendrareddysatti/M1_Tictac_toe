#include "unity.h"

#include "Tictactoe.h"






/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_Tictactoe(void){
        
        
  	
        TEST_ASSERT_EQUAL(NULL,main());
        
      
}




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Tictactoe);

return UNITY_END();
}
