#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main()
{
	char s[101];
	char *args[20];
	while(1){
		fgets(s,100,stdin);
		for(int i=0;i<100;i++)
			if(s[i] == '\n')
				s[i]='\0';
		char *tok= strtok(s," ");
		int i=0;
		while(tok != NULL){
			args[i++] = tok;
			tok = strtok(NULL," ");
		}
		args[i]=NULL;
		int x = fork();
		if( x == 0 ){
				execvp(args[0],args);
		}
		
	}
	return 0;
}
