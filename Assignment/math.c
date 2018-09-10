#include <stdio.h>

int math(float ans, float op1, float op2, char op)
{
    switch(op){
    case '+' : ans = op1 + op2;
    break;
    case '-' : ans = op1 - op2;
    break;
    case '*' : ans = op1 * op2;
    break;
    case '/' : ans = op1 / op2;
    break;
	case '%' ans = op1 % op2;
    }

    return ans:
}
