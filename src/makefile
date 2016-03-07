CLEAN = efface
RMFLAGS = -f
EXE = Lutin
INTE = Automate.h Lexer.h Symbole.h Etat.h
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

Automate.o: Automate.cpp Automate.h
Lexer.o: Lexer.cpp Lexer.h
Symbole.o: Symbole.cpp Symbole.h
Etat.o: Etat.cpp Etat.h

$(CLEAN):
	$(RM) $(RMFLAGS) $(OBJ) $(EXE) core
