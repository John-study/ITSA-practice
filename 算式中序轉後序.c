#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_SIZE 512

//定義堆疊結構
typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

//初始化堆疊
void initStack(Stack *s){
    s->top=-1;
}

//檢查堆疊是否為空
int isEmpty(Stack *s){
    return s->top==-1;
}

//推入堆疊
void push(Stack *s,char c){
    if(s->top<MAX_SIZE-1){
        s->top++;
        s->data[s->top]=c;
    }
}

//彈出堆疊
char pop(Stack *s){
    if (!isEmpty(s)){
        return s->data[(s->top)--];
    }
    return '\0';
}

//查看堆疊頂部元素
char peek(Stack *s){
    if (!isEmpty(s)){
        return s->data[s->top];
    }
    return '\0';
}

//判斷是否為運算符
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

//運算符的優先級
int precedence(char op){
    switch (op) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        default: return 0;
    }
}

//判斷是否為操作數（數字或變數）
int isOperand(char c){
    return isalnum(c);
}

//將中序轉換為後序
void infixToPostfix(char *infix, char *postfix) {
    Stack stack;
    initStack(&stack);
    int j=0;

    for (int i=0;infix[i]!='\0';i++){
        char c=infix[i];

        if (c==' '){
            continue; // 忽略空格
        }

        if (isOperand(c)){
            //操作數直接加入結果
            while(isOperand(infix[i])||infix[i]=='.') { 
                postfix[j++]=infix[i++];
            }
            postfix[j++]=' ';
            i--; 
        } else if (c =='('){
            // 左括號推入堆疊
            push(&stack,c);
        } else if (c==')'){
            //遇到右括號，彈出直到左括號
            while(!isEmpty(&stack)&&peek(&stack)!='('){
                postfix[j++]=pop(&stack);
                postfix[j++]=' ';
            }
            pop(&stack); //彈出左括號
        } else if(isOperator(c)){
            //運算符處理
            while(!isEmpty(&stack)&&precedence(peek(&stack))>=precedence(c)){
                postfix[j++]=pop(&stack);
                postfix[j++]=' ';
            }
            push(&stack,c);
        }
    }

    //清空堆疊中的運算符
    while(!isEmpty(&stack)){
        postfix[j++]=pop(&stack);
        postfix[j++]= ' ';
    }

    if (j>0 &&postfix[j-1]==' '){
        j--; //移除末尾多餘的空格
    }
    postfix[j] ='\0';
}

int main(){
    char input[513];
    char postfix[MAX_SIZE];

    while(fgets(input,sizeof(input),stdin)!=NULL){
        size_t len=strlen(input);
        if (len>0&&input[len-1]=='\n'){
            input[len-1]='\0';
        }

        if(strlen(input)==0){
            continue; // 忽略空行
        }

        // 轉換中序到後序
        infixToPostfix(input,postfix);

        // 輸出後序表達式
        printf("%s\n",postfix);
    }
}