#include "calc.h"

int calc(char* initial, char* x, double* res) {
  StackNode lexeme[256] = {0};
  double xVal = 1;

  int answer = getLexemsArr(initial, lexeme);
  if (answer == XCOMING) {
    answer = readX(x, &xVal);
  }
  if (answer == CORRECT) {
    *res = calculating(lexeme, xVal);
  }
  return (answer);
}

double calculating(StackNode* lexeme, double x) {
  StackNode* numbers = NULL;
  StackNode* signs = NULL;
  dijkstraLogic(&numbers, &signs, lexeme, x);
  while (signs) {
    operation(&numbers, &signs, signs->what);
  }
  double k = numbers->value;
  freeStack(numbers);
  freeStack(signs);
  return k;
}

void dijkstraLogic(StackNode** numbers, StackNode** signs, StackNode* lexeme,
                   double x) {
  int bracket = 0;
  for (int i = 0; lexeme[i].what != INITIA; ++i) {
    if (lexeme[i].what == X) {
      /* Икс */
      *numbers = pushStackNode(*numbers);
      fillFields(*numbers, NUMBER, NUMB, x);
    }
    if (lexeme[i].what == MINUS_X) {
      /* -Икс */
      *numbers = pushStackNode(*numbers);
      fillFields(*numbers, NUMBER, NUMB, -1 * x);
    }
    if (lexeme[i].what == NUMBER) {
      /* Число */
      *numbers = pushStackNode(*numbers);
      fillFields(*numbers, NUMBER, NUMB, lexeme[i].value);
    } else if (lexeme[i].priority > 0) {
      /* Операция */
      if (bracket == 1) {
        *signs = pushStackNode(*signs);
        fillFields(*signs, lexeme[i].what, lexeme[i].priority, 0);
        bracket = 0;
      } else {
        int pos = checkPriority(*signs, lexeme[i].priority);
        if (pos == -1) {
          *signs = pushStackNode(*signs);
          fillFields(*signs, lexeme[i].what, lexeme[i].priority, 0);
        } else if (pos >= 0) {
          operation(numbers, signs, (*signs)->what);
          *signs = pushStackNode(*signs);
          fillFields(*signs, lexeme[i].what, lexeme[i].priority, 0);
        }
      }
    } else if (lexeme[i].what == BRACKET_O) {
      /* Открывающая скобка */
      *signs = pushStackNode(*signs);
      fillFields(*signs, BRACKET_O, 0, 0);
      bracket = 1;
    } else if (lexeme[i].what == BRACKET_C) {
      /* Закрывающая скобка */
      while ((*signs)->what != BRACKET_O) {
        operation(numbers, signs, (*signs)->what);
      }
      *signs = popStackNode(*signs); /* удалили BRACKET_O */
      bracket = 0;
    }
  }
}

void operation(StackNode** number, StackNode** signs, int oper) {
  switch (oper) {
    case PLUS: {
      double a = 0, b = 0;
      twoElements(number, &a, &b);
      fillFields(*number, NUMBER, NUMB, a + b);
      *signs = popStackNode(*signs);
      break;
    }
    case MINUS: {
      double a = 0, b = 0;
      twoElements(number, &a, &b);
      fillFields(*number, NUMBER, NUMB, a - b);
      *signs = popStackNode(*signs);
      break;
    }
    case DIV: {
      double a = 0, b = 0;
      twoElements(number, &a, &b);
      fillFields(*number, NUMBER, NUMB, a / b);
      *signs = popStackNode(*signs);
      break;
    }
    case MOD: {
      double a = 0, b = 0;
      twoElements(number, &a, &b);
      fillFields(*number, NUMBER, NUMB, fmod(a, b));
      *signs = popStackNode(*signs);
      break;
    }
    case MULT: {
      double a = 0, b = 0;
      twoElements(number, &a, &b);
      fillFields(*number, NUMBER, NUMB, a * b);
      *signs = popStackNode(*signs);
      break;
    }
    case POW: {
      double a = 0, b = 0;
      twoElements(number, &a, &b);
      fillFields(*number, NUMBER, NUMB, pow(a, b));
      *signs = popStackNode(*signs);
      break;
    }
    case SIN: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, sin(a));
      *signs = popStackNode(*signs);
      break;
    }
    case COS: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, cos(a));
      *signs = popStackNode(*signs);
      break;
    }
    case TAN: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, tan(a));
      *signs = popStackNode(*signs);
      break;
    }
    case ACOS: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, acos(a));
      *signs = popStackNode(*signs);
      break;
    }
    case ASIN: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, asin(a));
      *signs = popStackNode(*signs);
      break;
    }
    case ATAN: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, atan(a));
      *signs = popStackNode(*signs);
      break;
    }
    case SQRT: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, sqrt(a));
      *signs = popStackNode(*signs);
      break;
    }
    case LN: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, log(a));
      *signs = popStackNode(*signs);
      break;
    }
    case LOG: {
      double a = 0;
      oneElement(number, &a);
      fillFields(*number, NUMBER, NUMB, log10(a));
      *signs = popStackNode(*signs);
      break;
    }
    default:
      break;
  }
  return;
}

void twoElements(StackNode** number, double* a, double* b) {
  if (*number) *b = (*number)->value;
  *number = popStackNode(*number);
  if (*number) *a = (*number)->value;
  *number = popStackNode(*number);
  *number = pushStackNode(*number);
  return;
}

void fillFields(StackNode* number, int what, int priority, double value) {
  number->what = what;
  number->priority = priority;
  number->value = value;
  return;
}

void oneElement(StackNode** number, double* a) {
  *a = (*number)->value;
  *number = popStackNode(*number);
  *number = pushStackNode(*number);
  return;
}

int checkPriority(StackNode* signs, int priority) {
  int answer = -1;
  int counter = 0;
  StackNode* i = NULL;
  for (i = signs; i && answer == -1; i = i->next, ++counter) {
    if (i->what == BRACKET_O || i->what == BRACKET_C) {
      break;
    }
    if (i->priority >= priority) {
      answer = counter;
    }
  }
  return (answer);
}
