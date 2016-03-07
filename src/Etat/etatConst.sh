for i in {1..50} 
	do rm -f Etat"$i".*
	   cp Etat0.cpp Etat"$i".cpp
	   cp Etat0.h Etat"$i".h
	   sed -i "s/Etat0/Etat$i/g" Etat"$i".*
done
