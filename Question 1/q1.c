//
//  Created by Mostafa Adel on 5/8/2023.
//
# include <stdio.h>
# include <stdlib.h>

typedef enum {
    ADD,
    SUB,
    MUL,
    FIBO
}TypeTag;

typedef struct {
 
 TypeTag type;
 int value;

}Node;

Node* createNode(TypeTag type,int value)
{
 Node* node=(Node*)malloc(sizeof(Node));
 if (node==NULL)
 {
  printf("Error in allocating memory\n");
  exit(1);
 }

 node->type=type;
 node->value=value;
 return node;
}

Node *add(int a,int b)
{
 return createNode(ADD,a+b);
}

Node *sub(int a,int b)
{
 return createNode(SUB,b-a);
}

Node *mul(int a,int b)
{
 return createNode(MUL,a*b);
}

Node *fibo(int a,int b)
{
 a = abs(a);
 if(a==0)
  return createNode(FIBO,0);
 else if(a==1)
  return createNode(FIBO,1);
 else
 {
  int f0 = 0;
  int f1 = 1;
  int f2 = 1;
  int i;
  for(i=2;i<a;i++)
  {
   f2=f0+f1;
   f0=f1;
   f1=f2;
  }
  return createNode(FIBO,f2);
 }
}

Node* (*makefunc(TypeTag type))(int,int)
{
 switch(type)
 {
  case ADD:
   return &add;
  case SUB:
   return &sub;
  case MUL:
   return &mul;
  case FIBO:
   return &fibo;
  default:
   printf("Error in type\n");
   exit(1);
 }
}

int main()
{
 
 Node *add = (*makefunc(ADD))(10,6);
 Node *mul = (*makefunc(MUL))(5,4);
 Node *sub = (*makefunc(SUB))(mul->value,add->value);
 Node *fibo = (*makefunc(FIBO))(sub->value,0);

 printf("OUTPUT:\n");
 printf("add = %d\n",add->value);
 printf("mul = %d\n",mul->value);
 printf("sub = %d\n",sub->value);
 printf("fibo = %d\n",fibo->value);


 return 0;

}
