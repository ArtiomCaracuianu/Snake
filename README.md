# Snake
lab1

1.Denumirea Jocului:
Snake

2.Repreyentarea jocului:
O implementare simplă a jocului clasic Snake în C++

3.Caracteristicile jocului:
- Joc jucabil în consolă
- Comenzi de bază pentru deplasarea șarpelui
- Urmărirea scorului
- Cresterea sarpelui in timp ce mananca mere

4. Tipurile de Date Noi Declarate
a. Point
Descriere: Point este o structură care reprezintă un punct în coordonatele bidimensionale (2D). Aceasta conține două variabile: x și y, care sunt coordonatele unui punct pe tabla de joc.
Utilizare: Structura Point este folosită pentru a marca pozițiile elementelor din joc, cum ar fi capul și segmentele corpului șarpelui sau pozițiile merelor pe tablă.
b. Board
Descriere: Clasa Board definește dimensiunile și cadrul pentru joc. Aceasta are două variabile esențiale, width și height, care stabilesc dimensiunile tablei de joc.
Utilizare: Board se ocupă cu gestionarea limitei de mișcare a șarpelui și cu definirea zonei de joc. Este folosită pentru a verifica dacă mișcările șarpelui sunt valide și pentru a plasa obiectele pe tabla de joc.
c. Snake
Descriere: Clasa Snake reprezintă șarpele din joc. Aceasta stochează pozițiile segmentelor șarpelui într-un array de tip Point, iar lungimea șarpelui este păstrată într-o variabilă length.
Utilizare: Clasa Snake se ocupă cu mișcarea șarpelui, creșterea acestuia atunci când consumă un măr și verificarea coliziunilor între șarpe și obiectele de pe tablă.
5. Funcționalitatea Fișierelor board.hpp, snake.hpp și point.hpp
Point.hpp
Scop: Fișierul point.hpp definește structura fundamentală Point, care reprezintă un punct în coordonate 2D. Acesta este folosit pentru a stoca și manipula pozițiile pe tabla de joc, inclusiv pentru a reprezenta capul și corpul șarpelui sau mărul.

Detalii:

Structura Point: Aceasta include două variabile, x și y, care reprezintă coordonatele unui punct pe tabla de joc.
Constructor implicit: Setează coordonatele la valori implicite (de obicei 0,0).
Constructor cu parametri: Permite crearea unui punct cu coordonate personalizate, oferind flexibilitate pentru manipularea pozițiilor în joc.
Snake.hpp
Scop: Fișierul snake.hpp definește comportamentele și logica jocului pentru șarpe. Clasa Snake gestionează segmentele șarpelui (stocate într-un array de tip Point), mișcările acestuia și creșterea sa atunci când consumă un măr.

Detalii:

Atributul segments[100]: Un array de tip Point care conține coordonatele fiecărui segment al șarpelui. Este limitat la 100 de segmente pentru simplitate.
Atributul length: Păstrează lungimea curentă a șarpelui, adică numărul de segmente active ale acestuia.
Metode:
Move(Point direction): Mișcă șarpele în direcția specificată de parametrul direction (de exemplu, sus, jos, stânga, dreapta).
Grow(): Extinde șarpele prin adăugarea unui nou segment la capătul său.
GetHeadPosition(): Returnează poziția capului șarpelui, care este primul element din array-ul segments.
Board.hpp
Scop: Fișierul board.hpp definește clasa Board, care reprezintă tabla de joc. Aceasta gestionează dimensiunile tablei și verifică dacă șarpele respectă limitele jocului.

Detalii:

Atributele width și height: Aceste variabile definesc dimensiunile tablei de joc (lățimea și înălțimea), limitând astfel zona în care șarpele se poate deplasa.
Metode:
GetWidth(): Returnează lățimea tablei de joc.
GetHeight(): Returnează înălțimea tablei de joc.
Constructorul Board(int w, int h) inițializează tabla cu dimensiunile dorite (de exemplu, 20x20).
6. Fișierele de Implementare: Detalii și Funcționalități
Board.cpp
Constructorul Board(int w, int h): Inițializează tabla cu dimensiuni personalizate, definind limitele de joc.
GetWidth() și GetHeight(): Permite obținerea dimensiunilor tablei pentru a verifica dacă șarpele respectă limitele de mișcare.
Snake.cpp
Constructorul Snake(): Inițializează șarpele cu un singur segment plasat la coordonatele (10, 10) și setează lungimea inițială la 1.
Move(Point direction): Modifică pozițiile segmentelor șarpelui pe tabla de joc în funcție de direcția dată. Capul șarpelui se mișcă în direcția specificată, iar celelalte segmente îl urmează.
Grow(): Extinde lungimea șarpelui prin adăugarea unui nou segment la capătul cozii.
GetHeadPosition(): Returnează poziția capului șarpelui (primul segment din array-ul segments).
Point.cpp
Structura Point este implementată direct în fișierul point.hpp. Nu sunt necesare funcții suplimentare în point.cpp, deoarece structura Point nu conține logica complexă, doar datele pentru coordonate (x, y).
7. Fișierul .gitignore
CXX: Specifică utilizarea compilatorului g++ pentru construirea proiectului.
CXXFLAGS: Setează opțiunile de compilare, cum ar fi -Wall (pentru avertismente) și -std=c++17 (pentru a folosi standardul C++17).
EXEC: Definește numele executabilului generat.
SRC: Listă de fișiere sursă (.cpp) care trebuie compilate.
OBJ: Fișierele obiect rezultate din compilarea fișierelor sursă.
all: Regula care creează executabilul prin legarea fișierelor obiect.
clean: Regula care șterge fișierele obiect și executabilul pentru a curăța directorul de fișierele temporare.
8. Concluzie
În ansamblu, structurile Point, Snake și Board definesc elementele fundamentale ale jocului Snake. Point reprezintă pozițiile pe tablă, Snake gestionează comportamentul șarpelui (mișcarea și creșterea acestuia), iar Board definește dimensiunile și limitele de joc. Codul este bine structurat pentru a sprijini extinderea și întreținerea pe termen lung, iar fișierele sursă și header sunt organizate pentru a reflecta acest design modular.









