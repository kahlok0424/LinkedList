#include "unity.h"
#include "linkedlist.h"
#include "student.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_listInit_ensure_Initialized_to_NULL_and_0(void)
{
    LinkedList list = {
        (Item *)-1,
        (Item *)-1,
        10
    };
    
    listInit(&list);
    
    TEST_ASSERT_NULL(list.head );
    TEST_ASSERT_NULL(list.tail );
    TEST_ASSERT_EQUAL(0,list.len );
}

void test_student_(void){
    
    LinkedList list;
    student ali = {
        "Ali",
        23,
        72.5,
        1.75
    };
    
    Item item = {
        (Item *)-1,
        (void *)&ali
    };
    
    printf("address of item: %p\n" , &item);
    
    listInit(&list);
    ListAdd(&list , &item);
    
    TEST_ASSERT_EQUAL_PTR(&item , list.head );
    TEST_ASSERT_EQUAL_PTR(&item , list.tail );
    TEST_ASSERT_EQUAL(1 , list.len );
    TEST_ASSERT_NULL(item.next);
    
}

void test_listAdd_given_linkedlink_wth_ali_then_add_baba_expect_2_items_in_the_list(void){
    
    LinkedList list;
    list.head = &itemAli;
    list.tail = &itemAli;
    list.len = 1;
    itemAli.next = NULL;
    
    
}