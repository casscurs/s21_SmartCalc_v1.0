#ifndef CALC_H
#define CALC_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CORRECT 1
#define ERROR 0
#define XCOMING -1

typedef struct StackNode {
  int what;
  int priority;
  double value;
  struct StackNode* next;
} StackNode;

typedef enum {
  INITIA = 0,
  NUMBER = 1,
  X = 2,
  PLUS = 3,
  MINUS = 4,
  DIV = 5,
  MOD = 6,
  MULT = 7,
  POW = 8,
  SIN = 9,
  COS = 10,
  TAN = 11,
  ACOS = 12,
  ASIN = 13,
  ATAN = 14,
  SQRT = 15,
  LN = 16,
  LOG = 17,
  BRACKET_O = 18,
  BRACKET_C = 19,
  MINUS_X = 20,
  ADDITION = 21,
  WITHRAWAL = 22,
} what;

typedef enum {
  NUMB = 0,
  ASUB = 1,
  MDM = 2,
  STEP = 3,
  FUNC = 4,
} priority;

/* Функции для работы со stack */

/* Добавление элемента в stack */
StackNode* pushStackNode(StackNode* apex);
/* Удаление элемента с вершины stack */
StackNode* popStackNode(StackNode* apex);
/* Удаление всего stack */
void freeStack(StackNode* apex);
/* Сортировка по приоритету */
void sortStackByPriority(StackNode** apex);

/* Функции валидатора */

/* Проверка введенной строки */
int checker(char* str, char* res);
/* Проверка на введенные символы */
int checkSymbol(char* str);
/* Удаление пробелов и проверка скобок */
int spacesBrackets(const char* str, char* res);
/* Проверка функций кроме mod */
int checkLetters(char* str, int* i, int* flaf, int* point);
/* Проверка знаков */
int checkSigns(const char* str, const int* i, int* point, int* flaf);
/* Счетчик скобок */
void bracketCounter(char c, int* bracket);
/* Проверка для mod */
int checkMod(char* str, int* i, int* flaf, int* point);
/* Проверка поступающего числа */
int check_x(char* str, char* res);
/* Проверка символов в поступающем числе */
int checkSymbol_x(const char* str);

/* Функции для создания массива лексем */

/* Заполнение полей лексем для числа*/
void numbToLexeme(StackNode* lexeme, int* m, char* buf, int* k, int* i,
                  int* unar);
/* Заполнене массива лексем */
int getLexemsArr(char* str, StackNode* lexeme);
/* Заполнение полей лексем */
void fillFunc(StackNode* lexeme, int* pos, int* step, int stepVal, int what,
              int priority);
/* Заполнение полей лексем для символов*/
void signToLexeme(StackNode* lexeme, char* str, int* m, int* i, int* unar,
                  int* checker);
/* Перевод поступившего числа в числовой формат */
void XtoNumb(char* buf, double* value, int* unar);
/* Считывание и проверка поступившего числа */
int readX(char* initial, double* value);

/* Вычислительная часть */

int calc(char* initial, char* x, double* res);
/* Вычислительный блок */
double calculating(StackNode* lexeme, double x);
/* Алгоритм для вычисления */
void dijkstraLogic(StackNode** numbers, StackNode** signs, StackNode* lexeme,
                   double x);
/* Соответствующая математическая операция для лексемы */
void operation(StackNode** number, StackNode** signs, int oper);
/* Достаем значение элементов для операции */
void twoElements(StackNode** number, double* a, double* b);
/* Заполнение полей */
void fillFields(StackNode* number, int what, int priority, double value);
/* Достаем значение элемента для операции */
void oneElement(StackNode** number, double* a);
/* -1 - приоритет входящей выше, чем в лежащей, >=0 - ниже или равен */
int checkPriority(StackNode* signs, int priority);

#endif  // CALC_H