CLEAN = clean
RMFLAGS = -rf
EXE = Lutin
# TODO : ajouter tous les headers (.h)
#
INTE = Symbole.h Lexer.h P.h Ins.h InsEcrire.h InsAffecter.h InsLire.h Id.h Val.h Exp.h ExpBin.h ExpAdd.h ExpSub.h ExpMult.h ExpDiv.h Decl.h AnalyseStatique.h EtatIdStatique.h Automate.h ExpUnaire.h Vids.h Cids.h $(wildcard Etat/Etat*.h)
REAL = $(INTE:.h=.cpp) main.cpp
OBJ = $(REAL:.cpp=.o)
CPPFLAGS = -Wall -ansi -DMAP
COMP = g++
LINK = g++
LIBS =
EDLFLAGS =
RM = rm
ECHO = echo

all: $(EXE)

$(EXE): $(OBJ)
	$(ECHO) "EdL de $(EXE)"
	$(LINK) -o $(EXE) $(OBJ) $(LIBS)

%.o: %.cpp %.h
	$(ECHO) "Compilation de <$<>"
	$(COMP) -o $@ -c $< $(CPPFLAGS)

Etat/%.o : Etat/%.cpp Etat/%.h
	$(ECHO) "Compilatin de <$<>"
	$(COMP) -o $@ -c $< $(CPPFLAGS)

.PHONY: $(CLEAN) mrproper

$(CLEAN):
	$(RM) $(RMFLAGS) $(OBJ) core

mrproper: $(CLEAN)
	$(RM) $(RMFLAGS) $(EXE)
