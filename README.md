
# Word Solitaire
A text based C++ terminal game

Made By:
--------
## 1340-Project (Group 124)
1. Mellisa Hadipranata  (3035663019)
2. Vieri Harney         (3035663368)

Name
----
Word Solitaire

Learning Objectives:
--------------------
To create a program (game) with the following features:
 - Implementing dynamic arrays which size are determined at compilation time and freed before the program terminates to avoid memory leak.
 - Creating data structure using variables of int, string, and booleans to determine the status of the program (when to end and what to show the user), Stored in a user defined struct to improve readability.
 - Learning how to code in different files and using Makefile for effective compilation and execution.
 - Using different types of files as supporting functions and exporting and importing data features using input and output stream.
 - Implementing random functions (rand() and srand()) for adding unpredicted elements to the program.
 - Learning how to collaborate using github.
 

Game Description & Aim of The Game:
-----------------------------------
Create words (minimum 2 letters) from randomly generated letters in the given spaces (rows). The longer the word created, the higher the score will be. The aim of the game is to score as high as you can without making mistakes more than 5 times. This game is a good and fun way to learn English vocabularies.

The player can decide whether to submit words in corresponding rows on every move. The score will be added based on the gap filled. Each gap has its own score.

The player can quit the game and save the progress. They can continue to play the game whenever they feel like it.

Every time the player launches the game, the player can choose whether to continue the game from the last session (from the existing file) or start a new game.

Game Rules:
-----------

When the player submits a wrong word (not in the english dictionary), the mistake counter will increase by 1 (which will be shown in the mistake counter on the top right). 

When the player submits a wrong word in one of the rows, the corresponding row will be cleared.

The game ends when the player submitted more than 5 wrong words (the mistake counter is 5). 

///////////////////////////////////////////////////////PROTOTYPE\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
------------------------------------------------------------------------------------------------------------------------------
Total Score: (score)                                                                            Mistakes: (number of mistakes)
                                                              
Row 1 :  _    _    _    _    _    _    _    _    _    _                                                                   

Row 2 :  _    _    _    _    _    _    _    _    _    _                                                                   

Row 3 :  _    _    _    _    _    _    _    _    _    _                                                                   

Row 4 :  _    _    _    _    _    _    _    _    _    _                                                                   

Row 5 :  _    _    _    _    _    _    _    _    _    _                                                                    
                                                                                                       
                                                                                                      High Score: (high score)  
------------------------------------------------------------------------------------------------------------------------------

Letter: (random letter)  
Enter Command: (user input)
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//////////////////////////////////////////////////////////////////


Functions:
----------
1. Generation of random game sets or events
  - Random letter generator (used to form letter in rows to be submitted)
  
2. Data structures for storing game status
   - Saving game progress (_These Data will be stored in a user defined data type of struct_):
      - Storing mistakes (int variable)
      - Storing unfinished words and/or empty rows (dynamic array of char)
      - Storing score (int variable)
      - Booleans to keep the game looping until player decides to stop playing
      - Storing high score (int)
   - Storing the player's input using string
  
  
3. Dynamic memory management
  - Allocating memory to 5 arrays of size 10 each
  - To store each row in a dynamic array 
  - Freeing the memory allocated before the program is terminated
  
4. File input/output (e.g., for loading/saving game status)
  - When game ends fout to a file containing the high score (high_score.txt) if the high score is beaten
  - fin from the file of high score (high_score.txt) to print the high score in the board
  - The player can quit the game and save the progress to a file (progress.txt)
  - The player can load the progress from last game, fin from progress.txt file
  
5. Program codes in multiple files
   _different functions will be coded in multiple files_
  - random_letter.cpp --> generate random letters, using rand() and srand().
  - word_solitaire_main.cpp --> main function, compilation of different functions to execute the game?
  - print_board.cpp --> print the board containing score, mistakes, rows, and high score.
  - start.cpp --> show the welcome message and the main menu of the game.
  - help.cpp --> show instructions and some useful information of the game
  - check_word.cpp --> check if the submitted word is in the English dictionary.
  - score_calculator.cpp --> calculate the score for each submitted word.
  - mistake_adder.cpp --> add the mistake for each wrong submitted word.
  - game_over.cpp --> show the score, check if high score is beaten, and ask the player whether he wants to play again or not.
  - set_empty.cpp --> empty the row (fill the rows with "\_") after submitting the row or starting a new game. 
  - save_row.cpp --> save the corresponding row to progress.txt
  - save_progress.cpp --> save the game progress to progress.txt (save information such as score, mistakes, counters for each letter in the row, rows, and letter generated) for saving the rows, it calls save_row function. 
  - quit.cpp --> ask player whether he wants to save the current game progress or not.
  - check_progress.cpp --> check whether there is a progress that the previous player saved.
  - load_progress.cpp --> load the information from progress.txt (load information such as score, mistakes, counters for each letter in the row, rows, and letter generated).
  - play_game.cpp --> ask for player command (entering letter to row, submit row, etc.), control the flow of the game.

6. Using .txt files as supporting elements:
  - Storing English dictionary in a directory called DICTIONARY_COMPLETE that consists of .txt files (A_DICT.txt, B_DICT.txt, and so on) based on the first letter to check if the submitted words exist. The .txt files contains words that are in the English dictionary (from 2-10 letters words).
  - high_score.txt (contains the all time high score of the game, which will be imported using file input stream to the game, the .txt will be update using file output stream if a player beat the current high score in the .txt file)
  - progress.txt (saving the progress of game into this txt file using file output stream, this contains the data of the game status. The data can be imported using file input stream to the game so that player can continue their progress)

Compilation and Execution Instructions: _command is in italic_
---------------------------------------
Step 1: (compile all the .cpp into a single executable called word_solitaire)

_make word_solitaire_

Step 2: (clean all the intermediary files)

_make clean_

Step 3: (run the executable file which is the game)

_./word_solitaire_

Citation:
---------
This game was inspired from a mobile game called "Words Out"
