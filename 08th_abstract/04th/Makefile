
Human : main.o libHuman.so 
	g++ -o $@ $< -L./ -lHuman

%.o : %.cpp
	g++ -fPIC -c -o $@ $<

libHuman.so : Chinese.o English.o Human.o
	g++ -shared -o $@ $^

clean:
	rm -rf *.o Human
