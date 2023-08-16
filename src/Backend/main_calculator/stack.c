#include "calc.h"

StackNode* pushStackNode(StackNode* apex) {
  StackNode* item = (StackNode*)calloc(1, sizeof(StackNode));
  if (item) {
    item->what = 0;
    item->priority = 0;
    item->value = 0.0;
    item->next = apex;
  }
  return (item);
}

StackNode* popStackNode(StackNode* apex) {
  if (!apex) return (NULL);
  apex->what = 0;
  apex->priority = 0;
  apex->value = 0.0;
  StackNode* following = apex->next;
  free(apex);
  return (following);
}

void freeStack(StackNode* apex) {
  while (apex) apex = popStackNode(apex);
  return;
}

void sortStackByPriority(StackNode** apex) {
  if (!(*apex) || !((*apex)->next)) {
    return;
  }

  StackNode* sortedStack = NULL;

  while (*apex) {
    StackNode* current = *apex;
    *apex = (*apex)->next;

    if (!sortedStack || current->priority <= sortedStack->priority) {
      /* Входящий меньше, чем лежащий */
      current->next = sortedStack;
      sortedStack = current;
    } else {
      /* Входящий больше, чем лежащий */
      StackNode* temp = sortedStack;

      while (temp->next && current->priority > temp->next->priority) {
        temp = temp->next;
      }

      current->next = temp->next;
      temp->next = current;
    }
  }

  *apex = sortedStack;
  return;
}