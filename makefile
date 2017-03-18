CC=cl
LD=link


change_next_variable:
	$(CC) change_next_variable.cpp /c /Fo"bin/change_next_variable.o" 

bugs:
	$(CC) bugs.cpp bin/change_next_variable.o  /Fo"bin/bugs.o" /Fe"bin/bugs.exe"
#	$(LD) /ASSEMBLYRESOURCE:bin/change_next_variable.o bin/bugs.o  /Fe"bin/bugs.exe"

all:  change_next_variable bugs
