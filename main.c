// Author: Yan Lu yfl5541@psu.edu
// Collaborator: Spoorthi Dhulappanavar sxd5682@psu.edu
// Collaborator: Nicole Giron nqg5259@psu.edu
// Collaborator: Xiaolong Lin xxl5453@psu.edu
// Section: 4
// Breakout: 11
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n == 0){
    return 0;
  }
    else{
      return n + sum_n(n-1);
    }
}
void print_n(const char *s, int n){
  if (n != 0){
    printf("%s\n",s);
    print_n(s, n-1);
  }
}

int main(void){
  int a = atoi(readline("Enter an int: "));
  printf("sum is %d.\n",sum_n(a));
  char *string = readline("Enter a string: ");
  print_n(string,a);
  return 0;
}