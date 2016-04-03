CLEAN = clean
RMFLAGS = -rf
EXE = lut
# TODO : ajouter tous les headers (.h)
#



INTE = header/Symbole.h header/Lexer.h header/P.h header/Ins.h header/InsEcrire.h header/InsAffecter.h header/InsLire.h header/Id.h header/Val.h header/Exp.h header/ExpBin.h header/ExpAdd.h header/ExpSub.h header/ExpMult.h header/ExpDiv.h header/Decl.h header/AnalyseStatique.h header/EtatIdStatique.h header/Automate.h header/ExpUnaire.h header/Vids.h header/Cids.h $(wildcard header/Etat*.h)
REAL = $(INTE:.h=.cpp) main.cpp
OBJ = $(REAL:.cpp=.o)

CPP_FILES = $(wildcard src/*.cpp)
OBJ_FILES = $(addprefix bin/,$(notdir $(CPP_FILES:.cpp=.o)))
INT_FILES = $(addprefix header/,$(notdir $(CPP_FILES:.cpp=.h))) 

CPPFLAGS = -Wall -ansi #-DMAP
COMP = g++
LINK = g++
LIBS =
EDLFLAGS =
RM = rm
ECHO = echo
CP = cp
CD = cd
TESTPATH = Tests/
MKTEST = ./mktest.sh

all: $(EXE)
	echo $(OBJ)

test: 	$(EXE)
	$(CP) $(EXE) $(TESTPATH)
	$(CD) $(TESTPATH) && $(MKTEST)

$(EXE): $(OBJ_FILES)
	$(ECHO) "EdL de $(EXE)"
	$(LINK) -o $(EXE) $(OBJ_FILES) $(LIBS)

bin/%.o: src/%.cpp
	$(ECHO) "Compilation de <$<>"
	$(COMP) -o $@ -c $< $(CPPFLAGS)

.PHONY: $(CLEAN) mrproper

$(CLEAN):
	$(RM) $(RMFLAGS) $(EXE) $(OBJ_FILES) core

mrproper: $(CLEAN)
	$(RM) $(RMFLAGS) $(EXE)
