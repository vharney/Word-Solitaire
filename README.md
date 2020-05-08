# 1340-Project (Group 124)

Members:
--------
1. Mellisa Hadipranata  (3035663019)
2. Vieri Harney         (3035663368)

Name
----
Word Solitaire

Game Description:
-----------------
Create words (minimum 2 letters) from randomly generated letters in the given spaces (rows). The longer the word created, the higher the score will be. The aim of the game is to score as high as you can.

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
  - Random letter generator
  
2. Data structures for storing game status
  - Saving game progress :
      - Storing mistakes
      - Storing unfinished words and/or empty rows
      - Storing score
  - Storing high score
  
3. Dynamic memory management
  - To store each row in a dynamic array [(will be freed when a word is completed)-->?]
  
4. File input/output (e.g., for loading/saving game status)
  - When game ends fout to a file containing the high score (high_score.txt) if the high score is beaten
  - fin from the file of high score (high_score.txt) to print the high score in the board
  - The player can quit the game and save the progress to a file (progress.txt)
  - The player can load the progress from last game, fin from progress.txt file
  
5. Program codes in multiple files
   different functions will be coded in multiple files (i.e function to randomise letter, function to save mistake counter etc.)
  - random_letter.cpp
  - word_solitaire_main.cpp 
  - print_board.cpp 
  - start.cpp 
  - help.cpp 
  - check_word.cpp 
  - score_calculator.cpp 
  - mistake_adder.cpp 
  - game_over.cpp 
  - set_empty.cpp 
  - save_row.cpp 
  - save_progress.cpp 
  - quit.cpp 
  - check_progress.cpp 
  - load_progress.cpp 
  - play_game.cpp

6. Importing dictionary to check if word exist --> ?

Execution Instructions:
----------------------
- To compile all files before starting the game: make word_solitaire


Citation:
---------
This game was inspired from a mobile game called "Words Out"
