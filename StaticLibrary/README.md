Commands to generate a static library.

With gcc compiler:

Use the flag -c to stop compilation before the assembly level.
Compile all the files with .c extension.

gcc -c *.c
mkdir obj
mv *.o obj
Generate the archive (static library) from all the files with .o extension.

mkdir lib
ar r lib/libmf.a obj/*.o

Try the command nm to explore the list of names of the static library.

nm mf/lib/libmf.a

