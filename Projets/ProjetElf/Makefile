CC=gcc
CFLAGS= -g -Wall -Werror -c



main: main.o  Header.o TableauSections.o ContenuSection.o TableauSymboles.o TableReimplantation.o bibliotheque.o renumerotationSection.o
	$(CC) -g -o $@ $^ -lm

test: test.o
	$(CC) -g -o $@ $^ -lm

clear:
	rm -r *.o main
	
%.o: %.c
	$(CC) $(CFLAGS) $<

Header.o:projet.h
TableauSections.o:projet.h
ContenuSection.o:projet.h
TableauSymboles.o:projet.h
TableReimplantation.o:projet.h
bibliotheque.o: projet.h
renumerotationSection.o: projet.h

main.o:projet.h
