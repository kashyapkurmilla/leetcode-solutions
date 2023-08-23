struct Stack {
    int data[999999] ;
    int top;
};

void initStack(struct Stack *stack) {
    stack->top = -1;
}


void push(struct Stack *stack, int val) {
    stack->top++;
    stack->data[stack->top] = val;
}


int pop(struct Stack *stack) {
    int val = stack->data[stack->top];
    stack->top--;
    return val;
}


int top(struct Stack *stack) {
    return stack->data[stack->top];
}


int longestValidParentheses(char* s) {
    int maxlen = 0;  
    struct Stack stack;
    initStack(&stack);
    push(&stack, -1);

    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        if (s[i] == '(') {
            push(&stack, i);
        } else {
            pop(&stack);
            if (stack.top == -1) {
                push(&stack, i);
            } else {
               if (maxlen > i-top(&stack))
                {
                    maxlen=maxlen;
                }
                else{
                    maxlen = i- top(&stack);
                }
                
            }
        }
    }
    return maxlen;
}