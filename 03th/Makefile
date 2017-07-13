
person: main.o dog.o person.o
	g++ -o $@ $^

%.o : %.c
	g++ -c -o $@ $<

clean:
	rm -rf *.o person
