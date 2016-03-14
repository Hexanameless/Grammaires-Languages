CLEAN = clean
RMFLAGS = -rf
EXE = Lutin
# TODO : ajouter tous les headers (.h)
INTE = Automate.h Lexer.h Symbole.h Etat/Etat.h P.h Ins.h InsEcrire.h InsAffecter.h InsLire.h Id.h Val.h
REAL = $(INTE:.h=.cpp) main.cpp
OBJ = $(REAL:.cpp=.o)
CPPFLAGS = -Wall -ansi -DMAP
COMP = g++
LINK = g++
LIBS =
EDLFLAGS =
RM = rm
ECHO = echo

all: $(EXE) $(CLEAN)

$(EXE): $(OBJ)
	$(ECHO) "EdL de $(EXE)"
	$(LINK) -o $(EXE) $(OBJ) $(LIBS)

%.o: %.cpp
	$(ECHO) "Compilation de <$<>"
	$(COMP) -o $@ -c $< $(CPPFLAGS)

.PHONY: $(CLEAN) mrproper

$(CLEAN):
	$(RM) $(RMFLAGS) $(OBJ) $(EXE) core

mrproper: $(CLEAN)
	$(RM) $(RMFLAGS) $(EXEC)
