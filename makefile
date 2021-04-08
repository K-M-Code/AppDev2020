OBJ = score.o eval.o classify.o output.o getscore.o
APPNAME = score

$(APPNAME) : $(OBJ)		# For Linking
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c			# Compiling Rule for each .c file in the folder
	gcc -c -o $@ $<

clean :
	rm $(OBJ) $(APPNAME)
