
#include<stdio.h>
#include<linux/kernel.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

#define sjf_preemptive 339

int main()
{
	pid_t pid,pid2;
	pid = fork();
	if(pid>0)
	{
		wait(NULL);
		
			long int s = syscall(sjf_preemptive);
			execlp("./shell2.sh","./shell2.sh",(char*)0);		
					
		
	}
	else
	{

	execlp("./shell.sh","./shell.sh",(char*)0);	
	
	}

	return 0;
}
