//
//  Created by Mostafa Adel on 5/8/2023.
//
# include <stdio.h>
# include <stdlib.h>

//iterative solution
//time complexity O(n)
//space complexity O(1)
//this solution is the best solution
int fibonnaci1(int a)
{
 int i;
 int f1=0;
 int f2=1;
 int f3=1;

 for(i=2;i<a+1;i++)
 {
  f3=f1+f2;
  f1=f2;
  f2=f3;
 }

 return f3;
}

//recursive solution
//time complexity O(2^n)
//space complexity O(n)
//this solution is the worst solution
int fibonnaci2(int a)
{

 if(a==0)
  return 0;
 else if(a==1)
  return 1;
 else
  return fibonnaci2(a-1)+fibonnaci2(a-2);
}

//recursive solution with memoization
//time complexity O(n)
//space complexity O(n)
//this solution improves the time complexity of the recursive solution
//by preventing the function from calculating the same value more than once
int fibonnaci3( int a )
{
 static int memo[1000]={0};
 if(a==0)
  return 0;
 else if(a==1)
  return 1;
 else if(memo[a]!=0)
  return memo[a];
 else
  return memo[a]=fibonnaci3(a-1)+fibonnaci3(a-2);
}

int main ()
{
 int a;
 printf("Enter the number of the term you want to calculate: ");
 scanf("%d",&a);
 printf("The %dth term of the fibonnaci sequence is: %d\n",a,fibonnaci1(a));
 printf("The %dth term of the fibonnaci sequence is: %d\n",a,fibonnaci2(a));
 printf("The %dth term of the fibonnaci sequence is: %d\n",a,fibonnaci3(a));


 return 0;
}
