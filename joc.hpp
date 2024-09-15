1.Structura Point:
Reprezintă o coordonată pe tablă (x, y).
2.Enum-ul Direction:
Reprezintă direcțiile posibile de mișcare ale șarpelui (UP, DOWN, LEFT, RIGHT).
3.Clasa SnakeGame:
-SnakeGame(): Constructor care inițializează jocul, plasează șarpele și hrana.
-printBoard(): Afișează starea curentă a tablei de joc.
-processInput(char input): Procesează input-ul utilizatorului pentru a schimba direcția șarpelui.
-update(): Actualizează starea jocului (mișcă șarpele, verifică coliziunile).
-isGameOver(): Verifică dacă jocul s-a terminat.
-generateFood(): Plasează hrana într-o poziție aleatorie pe tablă.
-moveSnake(): Mișcă șarpele în funcție de direcția curentă.
-checkCollision(): Verifică dacă șarpele a lovit un perete sau și-a lovit propria coadă.
-growSnake(): Crește lungimea șarpelui atunci când mănâncă hrana.

