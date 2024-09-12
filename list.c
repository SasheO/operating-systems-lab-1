// list/list.c
//
// Implementation for linked list.
//
// Author: Mezisashe Ojuba

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include "list.h"

/* Functions for allocating and freeing lists. By using only these functions,
 * the user should be able to allocate and free all the memory required for
 * this linked list library. */
list_t *list_alloc(){
  list_t *l = 0;
  return l;
};

void list_free(list_t *l){
  list_t *t = l;
  while (true){ // iterate until no more nodes
    if (!t){
      return;
    }

    t = l;
    l = l->next; // go to the next node in the list

    delete t; // delete previous node
    t = nullptr; 
  }
};

/* Prints the list in some format. */
void list_print(list_t *l){
  printf("[ ");
    list_t *t = l;
    while (true){ // iterate until no more nodes
    if (!t){
      break;
    }

    printf("%d ", l->value);
    t = t->next; // go to the next node in the list

  }
  printf("]");
};

/* Returns the length of the list. */
int list_length(list_t *l){
    int len = 0;
    list_t *t = l;
    while (true){ // iterate until no more nodes
    if (!l){
     return len;
    }
    t = t->next; // go to the next node in the list

  }
};

/* Methods for adding to the list. */
void list_add_to_back(list_t *l, elem value){
};

void list_add_to_front(list_t *l, elem value){


};
void list_add_at_index(list_t *l, elem value, int index){

};  // adds to end of list if out of bounds

/* Methods for removing from the list. Returns the removed element, or -1 for empty list */
elem list_remove_from_back(list_t *l){

};
elem list_remove_from_front(list_t *l){

};
elem list_remove_at_index(list_t *l, int index){

};

/* Checks to see if the given element exists in the list. */
bool list_is_in(list_t *l, elem value){

};

/* Returns the element at the given index, or -1 if empty or out of bounds */
elem list_get_elem_at(list_t *l, int index){

};

/* Returns the index at which the given element appears, or -1 if not found */
int list_get_index_of(list_t *l, elem value){

};

