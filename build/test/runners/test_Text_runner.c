/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_textNew_should_create_dynamic_text_properly(void);
extern void test_textNew_should_create_static_text_properly(void);
extern void test_textAssign_should_increase_reference(void);
extern void test_textAssign_should_not_increase_reference(void);
extern void test_textDel_should_delete_dynamic_text(void);
extern void test_textDel_should_not_delete_static_text(void);
extern void test_textDel_should_not_delete_when_reference_not_0(void);
extern void test_textDel_should_not_delete_and_reduce_reference(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_Text.c";
  UnityBegin();
  RUN_TEST(test_textNew_should_create_dynamic_text_properly, 8);
  RUN_TEST(test_textNew_should_create_static_text_properly, 16);
  RUN_TEST(test_textAssign_should_increase_reference, 24);
  RUN_TEST(test_textAssign_should_not_increase_reference, 34);
  RUN_TEST(test_textDel_should_delete_dynamic_text, 44);
  RUN_TEST(test_textDel_should_not_delete_static_text, 52);
  RUN_TEST(test_textDel_should_not_delete_when_reference_not_0, 61);
  RUN_TEST(test_textDel_should_not_delete_and_reduce_reference, 72);

  return (UnityEnd());
}
