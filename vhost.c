#include<stdio.h> 
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#if defined(__WIN32) || defined(__WIN64)
	const char* path = "C:\\xampp\\apache\\conf\\extra\\httpd-vhosts.conf";
	const char* pathHosts = "C:\\Windows\\System32\\drivers\\etc\\hosts";
#else 
#ifdef __linux
	const char* path = "/mnt/c/xampp/apache/conf/extra/httpd-vhosts.conf";
	const char* pathHosts = "/mnt/c/Windows/System32/drivers/etc/hosts";
#endif
#endif

int main(int argc, char **argv) {

FILE *pVhosts, *pHosts;
char ch, buffer[100], buffer1[100];
pVhosts = fopen(path, "a");
pHosts = fopen(pathHosts, "a");

if (pVhosts == NULL || pHosts == NULL) {
	perror("Erorr reading file");
	exit(EXIT_FAILURE);
}

printf("ServerName: ");
scanf("%s",buffer);
printf("DocumentRoot: ");
scanf("%s", buffer1);

char srvrName[1000];
strcpy(srvrName, buffer);
strcat(srvrName, ".local");
char *folder = strcat(buffer1, "\"");

char str[1000] = "\n\n<VirtualHost *:80>\n ServerAdmin dominik@roudny.eu\n DocumentRoot \"C:/xampp/htdocs/";
strcat(str,folder);

char str1[1000] = "\n ServerName ";
char *srv = strcat(buffer, ".local");
strcat(str1, srv);

char str2[1000] = "\n ErrorLog \"logs/";
char *errorLogs = strcat(buffer, ".log\"");
strcat(str2, errorLogs);

strcat(str, str1);
strcat(str, str2);
strcat(str, "\n</VirtualHost>");

fwrite(str, 1, strlen(str), pVhosts);

char hostsStr[1000] = "\n127.0.0.1 "; 
fwrite(strcat(hostsStr, srvrName), 1, strlen(hostsStr) + strlen(srvrName), pHosts);

fclose(pVhosts);
fclose(pHosts);
printf("\nVhost created\n");
	
return 0;
}
