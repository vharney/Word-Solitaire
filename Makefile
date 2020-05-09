FLAGS = -pedantic-errors -std=c++11

random_letter.o: random_letter.cpp random_letter.h
	g++ $(FLAGS) -c $<

help.o: help.cpp help.h
	g++ $(FLAGS) -c $<

game_over.o: game_over.cpp game_over.h
	g++ $(FLAGS) -c $<

start.o: start.cpp start.h help.h check_progress.h set_empty.h random_letter.h load_progress.h
	g++ $(FLAGS) -c $<

save_row.o: save_row.cpp save_row.h
	g++ $(FLAGS) -c $<

quit.o: quit.cpp quit.h
	g++ $(FLAGS) -c $<

check_progress.o: check_progress.cpp check_progress.h
	g++ $(FLAGS) -c $<

load_progress.o: load_progress.cpp load_progress.h
	g++ $(FLAGS) -c $<

save_progress.o: save_progress.cpp save_progress.h save_row.h
	g++ $(FLAGS) -c $<

score_calculator.o: score_calculator.cpp score_calculator.h
	g++ $(FLAGS) -c $<

check_word.o: check_word.cpp check_word.h
	g++ $(FLAGS) -c $<

print_board.o: print_board.cpp print_board.h
	g++ $(FLAGS) -c $<

set_empty.o: set_empty.cpp set_empty.h
	g++ $(FLAGS) -c $<

mistake_adder.o: mistake_adder.cpp mistake_adder.h
	g++ $(FLAGS) -c $<

play_game.o: play_game.cpp play_game.h random_letter.h print_board.h help.h check_word.h score_calculator.h mistake_adder.h set_empty.h save_progress.h quit.h
	g++ $(FLAGS) -c $<

word_solitaire_main.o: word_solitaire_main.cpp random_letter.h start.h game_over.h set_empty.h play_game.h
	g++ $(FLAGS) -c $<

word_solitaire: random_letter.o word_solitaire_main.o print_board.o start.o help.o check_word.o score_calculator.o mistake_adder.o game_over.o set_empty.o save_row.o save_progress.o quit.o check_progress.o load_progress.o play_game.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f random_letter.o word_solitaire_main.o print_board.o start.o help.o check_word.o score_calculator.o mistake_adder.o game_over.o set_empty.o save_row.o save_progress.o quit.o check_progress.o load_progress.o play_game.o

.PHONY: clean