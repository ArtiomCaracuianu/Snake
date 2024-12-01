Acest proiect implementează jocul clasic al șarpelui (Snake) și folosește un design modular, cu mai multe module separate pentru gestionarea logicii jocului și pentru redarea graficii. Fiecare componentă este organizată într-un fișier propriu, ceea ce permite o dezvoltare mai ușoară și o întreținere eficientă a codului.

Structura Fișierelor
src/snake.cpp și include/snake.hpp
Modificări:
Codul a fost organizat într-o bibliotecă statică (libsnake.a).
Funcționalitate:
Modulul este responsabil de logica mișcării șarpelui, de creșterea acestuia și de plasarea pe tabla de joc.

src/painter.cpp și include/painter.hpp
Modificări:
Acest modul servește ca legătură între logica jocului și redarea graficii. A fost compilat într-o bibliotecă statică (libpainter.a).
Funcționalitate:
Se ocupă cu desenarea șarpelui, a textului și a altor elemente vizuale pe ecran. Metodele de redare sunt definite în cadrul clasei abstracte AbstractPainter.

.gitignore
Modificări:
Au fost adăugate reguli pentru a ignora fișierele temporare și automate, cum ar fi fișierele obiect (.o), bibliotecile statice și dinamice (.a, .so), și fișierele executabile (.exe, *.out).
Funcționalitate:
Asigură că fișierele generate automat nu sunt incluse în controlul versiunii, menținând astfel un depozit curat.

src/point.cpp și include/point.hpp
Modificări:
Codul acestei componente este compilat într-o bibliotecă statică (libpoint.a).
Funcționalitate:
Gestionează coordonatele (punctele) esențiale pentru plasarea șarpelui și a altor elemente pe tabla de joc.

src/board.cpp și include/board.hpp
Modificări:
Compilat într-o bibliotecă statică (libboard.a).
Funcționalitate:
Acest modul definește dimensiunile tablei de joc și gestionează plasarea obiectelor pe aceasta.

main.cpp
Modificări:
Este fișierul principal care integrează toate modulele (Board, Snake, Painter).
Funcționalitate:
Servește ca punct de intrare al aplicației, permițând utilizatorului să testeze logica jocului.

abstract_painter.hpp
Modificări:
Tipurile de date char* au fost înlocuite cu std::string, iar char** cu std::vector<std::string>, în acord cu standardele moderne din STL (Standard Template Library).
Funcționalitate:
Definirea unei interfețe abstracte pentru redarea grafică a jocului, inclusiv metode pentru desenarea textului și imaginilor. Clasele care moștenesc această interfață trebuie să implementeze aceste metode.

src/painter.cpp și include/painter.hpp
Modificări:
În acest modul, tipurile de date char* au fost înlocuite cu std::string pentru a facilita manipularea textului, iar pentru imagini s-a folosit std::vector<std::string> în loc de char**, îmbunătățind gestionarea memoriei și manipularea datelor.
Funcționalitate:
Clasa Painter se ocupă cu desenarea efectivă a elementelor pe tabla de joc, inclusiv șarpele și textele.

Makefile
Modificări:
Procesul de compilare a fost modularizat, fiecare componentă (Point, Board, Painter, Snake) fiind compilată într-o bibliotecă statică (.a).
Funcționalitate:
Definește pașii necesari pentru construirea aplicației, incluzând compilarea fiecărei componente într-o bibliotecă statică și linkarea acestora într-un program complet. De asemenea, include un script de curățare (clean) pentru a elimina fișierele generate în timpul compilării.
