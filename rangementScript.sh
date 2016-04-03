: '
mkdir header
mkdir bin
for s in src/*.h src/Etat/*.h
	do 
		echo "Traitement de $s : retrait des ../"
		sed -i "s/\.\.\///g" $s
		echo "Deplacement de $s vers header/"
		mv $s header/
	done

for s in src/*.cpp src/Etat/*.cpp
	do
		echo "Traitement de $s : ajout des ../header dans les inclusions"
		sed -i "s/[A-Z].*\.h/..\/header\/&/g" $s
		echo "Retrait des eventuels ../../header/"
		sed -i "s/\.\.\/\.\.\//..\//g" $s
		echo "Deplacement de $s vers src/"
		mv $s src/
	done
'

for s in src/*.cpp
	do 
		sed -i "s/Etat\///g" $s
	done
