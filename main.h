#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> /* for perror*/
#include <stdlib.h> /*for exit(), malloc()*/
#include <unistd.h>/**
		     * for access(), chdir(), close(),
		     * dup2(), exit(), fork(), getcwd(), isatty(), kill(),
		     */
#include <string.h>/*for strock()*/
#include <sys/types.h>/*for pid_t*/
#include <sys/wait.h>/*for waitpid()*/
#include <fcntl.h>
#include <errno.h>/*for errno*/
#include <time.h>

#define BUFFER_SIZE 1024

void _exec(char *cmd);
void _stripSpace(char *str);
void handlePath(char *cmd);
void print_error_message(const char *command);
int execute_command(char **args);
void _executecmd(char *command);
void _myEnviron(char **envp);
void _quitShell(void);
int _strcmp(const char *s1, const char *s2);
int _strlen(char *str);
void _clear(void);
void _changeDir(char *path);
extern char **environ;
void executeEnv(void);


#endif
