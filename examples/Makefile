all: prnttest.bas

%.bas: %.txt
	petcat -w3 -o $@ -- $^

clean:
	rm -f *.bas
