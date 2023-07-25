		/*Simple Shell Project*/


	/*Authors*/

Hannington Kiptoo 
STEPHEN NDARUGA.

	/*Overview*/

This is a group project by Hannington Kiptoo and stephen Ndaruga on the ALX_SE Simple shell project.

	/*Objective*/

The shell project is an implementation of a Unix shell in C programming language. The shell is a command-line interface that allows users to interact with the operating system by entering commands and executing them.

This project aims to provide users with a simple, yet powerful shell that can perform various tasks such as running programs, managing files and directories, and piping commands.

The shell project supports various shell features such as command line editing, history, and tab completion, making it easy for users to navigate and execute commands efficiently. It also includes support for environment variables, path expansion, and signal handling.

The shell project is built using system calls such as `fork()`, `exec()`, and `wait()`, and also makes use of various C library functions such as `strtok()`, `malloc` `getline()` and `free(). It is designed to be portable and can be run on any Unix-like operating system.

Overall, the shell project is a powerful and versatile tool that can be used for various tasks in the command-line environment. Whether you're a system administrator, developer, or power user, this shell implementation provides a reliable and flexible interface to interact with the operating system.

			/*List of allowed functions and system calls*/

access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
