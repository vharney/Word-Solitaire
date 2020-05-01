FLAGS = -pedantic-errors -std=c++11

random_letter.o: random_letter.cpp random_letter.h
	g++ $(FLAGS) -c $<

help.o: help.cpp help.h
	g++ $(FLAGS) -c $<

start.o: start.cpp start.h help.o
	g++ $(FLAGS) -c $<

score_calculator.o: score_calculator.cpp score_calculator.h
	g++ $(FLAGS) -c $<

check_word.o: check_word.cpp check_word.h
	g++ $(FLAGS) -c $<

print_board.o: print_board.cpp print_board.h
	g++ $(FLAGS) -c $<

word_solitaire_main.o: word_solitaire_main.cpp random_letter.h check_word.h score_calculator.h
	g++ $(FLAGS) -c $<

word_solitaire: random_letter.o word_solitaire_main.o print_board.o start.o help.o check_word.o score_calculator.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f random_letter.o word_solitaire_main.o print_board.o start.o help.o

.PHONY: clean