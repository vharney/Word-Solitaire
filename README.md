# 1340-Project

Members:
--------
1. Mellisa Hadipranata  (3035663019)
2. Vieri Harney         (3035663368)


Game Description:
-----------------
To add randomly generated letters into words in the given spaces (rows). The longer the word you create the higher the score you will earn. The aim of the game is to score as high as you can.

The player can decide whether to submit words in corresponding rows after every move. The score will be added based on the gap filled, the score for every gap is shown above the 1st row.

When a player submitted a wrong word (not in the english dictionary), the player will get a mistake counter which will be shown in the mistake counter on the top right. When the player submit a wrong word in one of the rows, the corresponding row will be cleared.

The game ends, when the player submitted 5 wrong words. 

User can pause the game and save it to a file. They can continue to play the game whenever they feel like it.

///////////////////////////////////////////////////////PROTOTYPE\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

Total Score: (score)                                                                                          mistakes: 0 

                                                                                                                          

score   100  100  100  300  400  500  500  500  800  1000                                                                 

Row 1 :  _    _    _    _    _    _    _    _    _    _                                                                   

Row 2 :  _    _    _    _    _    _    _    _    _    _                                                                   

Row 3 :  _    _    _    _    _    _    _    _    _    _                                                                   

Row 4 :  _    _    _    _    _    _    _    _    _    _                                                                   

Row 5 :  _    _    _    _    _    _    _    _    _    _                                                                    

                                                                                                                          

Letter: (random letter)                                                                         High Score: (all-time hs)  

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//////////////////////////////////////////////////////////////////


Functions:
----------
1. Generation of random game sets or events
  - Random letter generator
2. Data structures for storing game status
  - Storing mistakes
  - Storing unfinished words
  - Storing scores
3. Dynamic memory management
  - To store each row in a dynamic array (will be freed when a word is completed)
  - Change size when adding a new word.
4. File input/output (e.g., for loading/saving game status)
  - When game ends fout to a file containing the scores
  - fin from the file of scores the highest score
  - user can pause the game, saved to a file (savefile.txt)
  - user can load paused game, fin from the savefile.txt
5. Program codes in multiple files
  - different functions will be coded in multiple files (i.e function to randomise letter, function to save mistake counter etc.)
6. Importing dictionary to check if word exist

Citation:
---------
This game was inspired from a mobile game called "Words Out"
