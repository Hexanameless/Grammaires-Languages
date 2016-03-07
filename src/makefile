CLEAN = efface
RMFLAGS = -f
EXE = Lutin
INTE = main.h Lexer.h Symbole.h Etat/Etat.h Automate.h
REAL = $(INTE:.h=.cpp)
OBJ = $(INTE:.h=.o)
CPPFLAGS = -Wall -ansi -DMAP
COMP = g++
LINK = g++
LIBS =
EDLFLAGS =
RM = rm
ECHO = echo

.PHONY : $(CLEAN)

$(EXE): $(OBJ)
	echo "EdL de $(EXE)"
	$(LINK) -o $(EXE) $(OBJ) $(LIBS)

%.o: %.cpp
	$(ECHO) "Compilation de <$<>"
	$(COMP) $(CPPFLAGS) -c $<

#-------------------------------CA MARCHE PAS MAIS JE SAIS PAS POUQRUOI
#Etat.o: Automate.cpp Symbole.cpp
#Automate.o: Automate.h
#Lexer.o: Lexer.h
#Symbole.o: Symbole.h
#Vids.o: Vids.h

$(CLEAN):
	$(RM) $(RMFLAGS) $(OBJ) $(EXE) core
