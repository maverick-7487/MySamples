Commands to generate a dynamic library.

With gcc compiler: 

Use the flag -c to stop compilation before the assembly level. 
Use the -fPIC flag to generate Position Independent Code.
Compile all the files with .c extension.

gcc -c -fPIC  *.c
mkdir obj
mv *.o obj

Generate the shared object (dynamic library) from all the files with .o extension.

mkdir lib
gcc -shared -o lib/libmf.so obj/*.o

Try the command nm to explore the list of names of the dynamic library.

nm mf/lib/libmf.so
