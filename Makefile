FLAGS = -pedantic-errors -std=c++11

random_letter.o: random_letter.cpp random_letter.h
	g++ $(FLAGS) -c $<

print_board.o: print_board.cpp print_board.h
	g++ $(FLAGS) -c $<

word_solitaire_main.o: word_solitaire_main.cpp random_letter.h
	g++ $(FLAGS) -c $<

word_solitaire: random_letter.o word_solitaire_main.o print_board.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f random_letter.o word_solitaire_main.o print_board.o

.PHONY: clean