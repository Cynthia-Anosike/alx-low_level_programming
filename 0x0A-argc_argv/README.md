C- argv, argc
	ARGUMENT TO MAIN:For those writing programs which will run in a hosted env, arguments to main provide a useful opportunity to give parameter to programs. Typically, this facility is used to direct way the program goes about its task. The declaration of main is; int main(int argc, char *argv[]);
	This indicates that main is a function returning an integer.
There are at least two argument to main; argc and argv. The former is the count of argument supplied to the program, while the later is the array to pointers to the strings which is the arguments.
Use the _attributes_((unused)) for unsed variable.
