#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main() {
  int x, removed_value;
  printf("Write your Tests for your linked list implementation\n");
  list_t *mylist;
  mylist = list_alloc();

  // PASSED START
  printf("------------------------\n");
  printf("Testing list_add_to_front, initial list: %s\n",listToString(mylist));
  list_remove_from_back(mylist);
  printf("Testing list_remove_from_back, edge case (empty list): %s\n",listToString(mylist));
  printf("The list length is %d\n", list_length(mylist));
  list_add_to_front(mylist, 10);
  list_add_to_front(mylist, 20);
  list_add_to_front(mylist, 30);
  list_add_to_front(mylist, 40);
  list_add_to_front(mylist, 50);
  list_add_to_front(mylist, 60);
  list_add_to_front(mylist, 70);
  list_add_to_front(mylist, 80);
  list_add_to_front(mylist, 90);
  list_add_to_front(mylist, 100);
  printf("Testing list_add_to_front, final list: %s\n",listToString(mylist));
  printf("The list length is %d\n", list_length(mylist));

  // if(strcmp("100->90->80->70->60->50->40->30->20->10->NULL",listToString(mylist)) != 0)
  // {
  //       printf("list_add_to_front : FAILED\n");
  // }

  printf("------------------------\n");
  list_add_at_index(mylist, 110, 0); // test adding element at the front of the list
  printf("Testing list_add_at_index value 110, edge case index 0 (beginning of list): %s\n",listToString(mylist));

  list_add_at_index(mylist, 110, 11); // test adding element at the end of the list
  printf("Testing list_add_at_index value 110, edge case index 11 (end of the list): %s\n",listToString(mylist));
  
  list_add_at_index(mylist, 110, 100); // test adding element at index way too big
  printf("Testing list_add_at_index value 110, edge case index 100 (out of bounds): %s\n",listToString(mylist));
  
  list_add_at_index(mylist, 110, 5); // test adding element at the middle of the list
  printf("Testing list_add_at_index value 110, normal case index 5: %s\n",listToString(mylist));

  printf("------------------------\n");
  removed_value = list_remove_from_back(mylist);
  printf("Testing list_remove_from_back: %s\nRemoved node value: %d\n",listToString(mylist), removed_value);
  
  removed_value = list_remove_at_index(mylist, 3);
  printf("Testing list_remove_at_index(mylist, 3): %s\nRemoved node value: %d\n",listToString(mylist), removed_value);


  printf("------------------------\n");
  printf("Testing list_is_in(mylist, -1): %d\n",list_is_in(mylist, -1));
  printf("Testing list_is_in(mylist, 1000): %d\n",list_is_in(mylist, 1000));
  printf("Testing list_is_in(mylist, 110): %d\n",list_is_in(mylist, 110));
  printf("Testing list_is_in(mylist, 100): %d\n",list_is_in(mylist, 100));
  printf("Testing list_is_in(mylist, 90): %d\n",list_is_in(mylist, 90));
  printf("Testing list_is_in(mylist, 80): %d\n",list_is_in(mylist, 80));
  printf("Testing list_is_in(mylist, 70): %d\n",list_is_in(mylist, 70));
  printf("Testing list_is_in(mylist, 60): %d\n",list_is_in(mylist, 60));
  printf("Testing list_is_in(mylist, 50): %d\n",list_is_in(mylist, 50));
  printf("Testing list_is_in(mylist, 40): %d\n",list_is_in(mylist, 40));
  printf("Testing list_is_in(mylist, 30): %d\n",list_is_in(mylist, 30));
  printf("Testing list_is_in(mylist, 20): %d\n",list_is_in(mylist, 20));
  printf("Testing list_is_in(mylist, 10): %d\n",list_is_in(mylist, 10));
  list_print(mylist);

  printf("------------------------\n");
  printf("The list length is %d\n", list_length(mylist));
  printf("Testing list_get_elem_at(mylist, 0): %d\n",list_get_elem_at(mylist, 0));
  printf("Testing list_get_elem_at(mylist, 1): %d\n",list_get_elem_at(mylist, 1));
  printf("Testing list_get_elem_at(mylist, 5): %d\n",list_get_elem_at(mylist, 5));
  printf("Testing list_get_elem_at(mylist, 11): %d\n",list_get_elem_at(mylist, 11));
  printf("Testing list_get_elem_at(mylist, 10): %d\n",list_get_elem_at(mylist, 10));
  printf("Testing list_get_elem_at(mylist, 9): %d\n",list_get_elem_at(mylist, 9));
  printf("Testing list_get_elem_at(mylist, 8): %d\n",list_get_elem_at(mylist, 8));
  printf("Testing list_get_elem_at(mylist, -3): %d\n",list_get_elem_at(mylist, -3));
  printf("Testing list_get_elem_at(mylist, 100): %d\n",list_get_elem_at(mylist, 100));


  printf("------------------------\n");
  printf("Testing list_get_index_of(mylist, -1): %d\n",list_get_index_of(mylist, -1));
  printf("Testing list_get_index_of(mylist, 1000): %d\n",list_get_index_of(mylist, 1000));
  printf("Testing list_get_index_of(mylist, 110): %d\n",list_get_index_of(mylist, 110));
  printf("Testing list_get_index_of(mylist, 100): %d\n",list_get_index_of(mylist, 100));
  printf("Testing list_get_index_of(mylist, 90): %d\n",list_get_index_of(mylist, 90));
  printf("Testing list_get_index_of(mylist, 80): %d\n",list_get_index_of(mylist, 80));
  printf("Testing list_get_index_of(mylist, 70): %d\n",list_get_index_of(mylist, 70));
  printf("Testing list_get_index_of(mylist, 60): %d\n",list_get_index_of(mylist, 60));
  printf("Testing list_get_index_of(mylist, 50): %d\n",list_get_index_of(mylist, 50));
  printf("Testing list_get_index_of(mylist, 40): %d\n",list_get_index_of(mylist, 40));
  printf("Testing list_get_index_of(mylist, 30): %d\n",list_get_index_of(mylist, 30));
  printf("Testing list_get_index_of(mylist, 20): %d\n",list_get_index_of(mylist, 20));
  printf("Testing list_get_index_of(mylist, 10): %d\n",list_get_index_of(mylist, 10));

  // PASSED END
  // if(strcmp("100->90->70->60->50->40->30->20->10->NULL",listToString(mylist)) != 0)
  // {
  //       printf("list_remove_at_index : FAILED\n");
  // }

  // list_remove_at_index(mylist, 20);
  // list_print(mylist);
  // list_remove_at_index(mylist, 1);
  // list_print(mylist);
  // list_remove_at_index(mylist, 6);
  // list_print(mylist);

  // if(strcmp("90->70->60->50->40->20->10->NULL",listToString(mylist)) != 0)
  // {
  //       printf("list_remove_at_index : FAILED\n");
  // }
  

  // printf("The list length is %d\n", list_length(mylist));

  // list_add_to_back(mylist, 39);
  // list_print(mylist);
  // list_add_to_back(mylist, 18);
  // list_add_to_back(mylist, 42);
  // list_add_to_back(mylist, 190);
  // list_print(mylist);
  // list_free(mylist);
  // list_print(mylist);

  // list_add_to_front(mylist, 81);
  // list_add_to_back(mylist, 4);
  // list_add_to_front(mylist, 308);
  // list_add_to_back(mylist, 70);
  // list_add_to_front(mylist, 290);
  // list_print(mylist);
  // printf("The list length is %d\n", list_length(mylist));
  
  // list_add_at_index(mylist, 21, 1);
  // list_add_at_index(mylist, 65, 0);
  // list_add_at_index(mylist, 10, 8);
  // list_print(mylist);
  // list_add_at_index(mylist, 10, 7);
  // list_print(mylist);

  // list_remove_from_back(mylist);
  // list_print(mylist);
  // list_remove_from_front(mylist);
  // list_print(mylist);
  // list_remove_at_index(mylist, 3);
  // list_print(mylist);

  // printf("Is %d in the list?: %d\n", 21, list_is_in(mylist, 21));
  // printf("Value at %d in the list?: %d\n", 3, list_get_elem_at(mylist, 3));
  // printf("Value at %d in the list?: %d\n", 5, list_get_elem_at(mylist, 5));
  // printf("Value at %d in the list?: %d\n", 0, list_get_elem_at(mylist, 0));
  // printf("Value at %d in the list?: %d\n", -2, list_get_elem_at(mylist, -2));
  // printf("Value at %d in the list?: %d\n", 12, list_get_elem_at(mylist, 12));
  // printf("Value at %d in the list?: %d\n", 7, list_get_elem_at(mylist, 7));
  // printf("Index of %d?: %d\n", 70, list_get_index_of(mylist, 70));
  // printf("Index of %d?: %d\n", 20, list_get_index_of(mylist, 20));
  // printf("Index of %d?: %d\n", 0, list_get_index_of(mylist, 0));
  // printf("Index of %d?: %d\n", 10, list_get_index_of(mylist, 10));
  // printf("Index of %d?: %d\n", 90, list_get_index_of(mylist, 90));
  // printf("Index of %d?: %d\n", 81, list_get_index_of(mylist, 81));
  
  // list_free(mylist);
  // list_add_at_index(mylist, -1, -1);
  // list_print(mylist);
  // list_add_at_index(mylist, -1, -1);
  // list_print(mylist);
  // list_add_at_index(mylist, 10, 0);
  // list_print(mylist);
  // list_add_at_index(mylist, 20, 1);
  // list_print(mylist);
  // list_free(mylist);
  // printf("The list length is %d\n", list_length(mylist));
  // list_print(mylist);

  // list_remove_from_back(mylist);
  // list_remove_from_front(mylist);
  // list_remove_at_index(mylist, -3);
  // list_remove_at_index(mylist, 0);
  // list_remove_at_index(mylist, 2);
  // list_add_to_front(mylist, 10);
  // list_add_to_front(mylist, 20);
  // list_add_to_front(mylist, 30);
  // list_add_to_front(mylist, 40);
  // list_add_to_front(mylist, 60);
  // list_add_at_index(mylist, 50, 1);
  // list_add_at_index(mylist, 0, 6);
  // list_add_at_index(mylist, 70, 0);
  // list_add_at_index(mylist, 80, 12);
  // list_print(mylist);

  // list_free(mylist);
  // list_free(mylist);
  // list_add_to_back(mylist, 100);
  // list_print(mylist);
  // list_remove_from_front(mylist);
  // list_print(mylist);
  // list_add_to_back(mylist, 13);  
  // list_print(mylist);
  // list_remove_from_back(mylist);
  // list_print(mylist);

  // list_add_to_front(mylist, 10);
  // list_add_to_front(mylist, 20);
  // list_add_to_front(mylist, 30);
  // list_add_to_front(mylist, 40);
  // list_add_to_front(mylist, 60);
  // list_print(mylist);
  // list_remove_at_index(mylist, 0);
  // list_print(mylist);
  // list_remove_at_index(mylist, -2);
  // list_print(mylist);
  // list_remove_at_index(mylist, 7);
  // list_print(mylist);
  // list_remove_at_index(mylist, 4);
  // list_print(mylist);

  // list_free(mylist);
  // list_print(mylist);
  // list_remove_at_index(mylist, 0);
  // list_print(mylist);
  // list_add_to_front(mylist, 60);
  // list_print(mylist);
  // list_remove_at_index(mylist, 1);
  // list_print(mylist);
  // list_add_to_front(mylist, 80);
  // list_print(mylist);
  // list_remove_at_index(mylist, 0);
  // list_print(mylist);

  // printf("Is %d in the list?: %d\n", 60, list_is_in(mylist, 60));
  // list_add_to_back(mylist, 50);
  // list_add_to_back(mylist, 60);
  // list_add_to_back(mylist, 70);
  // list_add_to_back(mylist, 80);
  // list_add_to_back(mylist, 90);
  // list_print(mylist);
  // printf("Is %d in the list?: %d\n", 30, list_is_in(mylist, 30));
  // printf("Is %d in the list?: %d\n", 60, list_is_in(mylist, 60));
  // printf("Is %d in the list?: %d\n", 80, list_is_in(mylist, 80));
  // list_add_to_back(mylist, 70);
  // list_print(mylist);
  // printf("Is %d in the list?: %d\n", 70, list_is_in(mylist, 70));
  
  // printf("The list length is %d\n", list_length(mylist));
  // printf("Value at %d in the list?: %d\n", -4, list_get_elem_at(mylist, -4));
  // printf("Value at %d in the list?: %d\n", 10, list_get_elem_at(mylist, 10));
  // printf("Value at %d in the list?: %d\n", 6, list_get_elem_at(mylist, 6));
  // printf("Value at %d in the list?: %d\n", 5, list_get_elem_at(mylist, 5));
  // printf("Value at %d in the list?: %d\n", 0, list_get_elem_at(mylist, 0));
  // list_free(mylist);
  // list_print(mylist);
  // printf("Value at %d in the list?: %d\n", 0, list_get_elem_at(mylist, 0));
  // list_remove_at_index(mylist, 0);
  // printf("Is %d in the list?: %d\n", 21, list_is_in(mylist, 21));
  // printf("Index of %d?: %d\n", 21, list_get_index_of(mylist, 21));
  // list_add_to_front(mylist, 10);
  // list_add_to_front(mylist, 20);
  // list_add_to_front(mylist, 30);
  // list_add_to_front(mylist, 40);
  // list_add_to_front(mylist, 50);
  // list_print(mylist);
  // printf("Index of %d?: %d\n", 50, list_get_index_of(mylist, 50));
  // printf("Index of %d?: %d\n", 81, list_get_index_of(mylist, 81));
  // printf("Index of %d?: %d\n", 10, list_get_index_of(mylist, 10));
  // printf("Index of %d?: %d\n", 30, list_get_index_of(mylist, 30));
  // list_add_to_front(mylist, 60);
  // list_print(mylist);
  // printf("Index of %d?: %d\n", 50, list_get_index_of(mylist, 50));
  // printf("Index of %d?: %d\n", 60, list_get_index_of(mylist, 60));
  // list_add_to_front(mylist, 10);
  // list_print(mylist);
  // printf("Index of %d?: %d\n", 10, list_get_index_of(mylist, 10));
  // list_add_to_back(mylist, 40);
  // list_print(mylist);
  // printf("Index of %d?: %d\n", 40, list_get_index_of(mylist, 40));

  printf("------------------------\n");
  list_free(mylist);
  printf("Testing list_free: %s\n",listToString(mylist));
  return 0;
}