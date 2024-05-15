// 1. Input signal number and a process id from user. Send given signal to the given process using kill() syscall.



#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
int main() {
  int pid = 0,sig_no = 0, ret;
  printf("Enter pid and signal number\n");
  scanf("%d %d",&pid,&sig_no);
  ret = kill(pid,sig_no);
  if(ret == 0)
  printf("Successful execution\n");
  else
  printf("execution failed\n");
  return 0;
}
