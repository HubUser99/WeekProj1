OBJ = main.o circle.o line.o rectangle.o square.o triangle.o intersec.o
DEPS = figures.h

APPNAME = myapp.a

#link rule
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
#compiling rule
%.o : %.c $(DEPS)
	gcc -c -o $@ $<

clean :
	rm $(OBJ) $(APPNAME)

tar :
	tar cf project.tar *

backup :
	scp project.tar e1700698@shell.puv.fi:.
