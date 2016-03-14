default :
	g++ -o compilateur src/main.cpp

%.o : %.cpp %.h
	g++ -c 
