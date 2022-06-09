#ifndef _MAIN_H_
#define _MAIN_H_

#define MAXCOM 1000
#define MAXLIST 100

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <limits.h>
#include <string.h>

extern char **environ;

void execArg(char **command, char *name);
int _strcmp(char *s1, char *s2);
int storeinput(char *str);
char *_strcpy(char *dest, char *src);
void split_space(char *str, char **command);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
int cpathandexec(char **command, char *name);
int cknowncommand(char **command);
void _puts(char *str);
int _putchar(char c);

#endif
