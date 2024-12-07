# Snake Game - Proiect C++

## Descrierea Proiectului

Acest proiect implementează o versiune a jocului Snake utilizând C++ și un design modular orientat pe obiecte. Scopul jocului este să controlezi un șarpe, să îl faci să mănânce fructe și să eviți coliziunile cu propriul corp sau cu marginile tablei.

Codul sursă este structurat în module care se ocupă cu logica jocului, interfața grafică și interacțiunile utilizatorului. Arhitectura aleasă permite scalabilitate și ușurință în întreținere, oferind o bază solidă pentru extinderea ulterioară a jocului.

Acest proiect reprezintă o oportunitate de a învăța programarea orientată pe obiecte, gestionarea memoriei în C++ și integrarea cu biblioteci externe pentru grafica și evenimente.

---

## **Regulile Jocului**

În **Snake**, scopul este să controlezi un șarpe care se mișcă pe o tablă pătrată. Obiectivul principal este să mănânci fructe, crescându-ți astfel lungimea, fără a te lovi de margini sau de propriul corp.

### **Condiții de terminare a jocului:**
1. Șarpele lovește marginea tablei.
2. Șarpele se lovește de propria coadă.

### **Reguli esențiale:**
- Jocul începe cu un șarpe de lungime mică, aflat în centrul tablei.
- După fiecare fruct consumat, șarpele va crește cu un segment.
- Mișcarea șarpelui este continuă, iar direcția acestuia poate fi modificată prin tastele săgeți (sus, jos, stânga, dreapta).

### **Scor:**
- Fiecare fruct consumat adaugă un punct la scorul total.
- Jocul va salva și va afișa cel mai mare scor obținut într-o sesiune.

---

## **Structura Proiectului**

Proiectul este împărțit în module distincte, fiecare având un rol clar:

### **Modulele principale:**
- **Snake:**
  - Gestionează poziția și mișcarea șarpelui pe tablă.
  - Se ocupă cu creșterea șarpelui atunci când acesta mănâncă un fruct.

- **Board:**
  - Definește dimensiunile și limitele tablei de joc.

- **Painter:**
  - Redă grafic elementele jocului, inclusiv șarpele, fructele și mesajele de joc.

- **Point:**
  - Reprezintă coordonatele 2D ale unui punct `(x, y)`, folosit pentru a poziționa obiectele pe tablă.

### **Teste Unitare:**
În directorul `tests`, se regăsesc teste pentru fiecare componentă importantă:
- `PointTest.cpp`: Verifică funcționalitățile clasei `Point`.
- `SnakeTest.cpp`: Testează mișcarea și logica de creștere a șarpelui.
- `GameBoardTest.cpp`: Verifică dimensiunile și comportamentul tablei de joc.

---

## **Dependențe și Mediu de Dezvoltare**

### **Mediu de Dezvoltare:**
- **Sisteme de operare:** Compatibil cu Windows, Linux și macOS.
- **Compilator:** `g++`, cu suport pentru C++17 sau mai recent.
- **Instrumente:** Make pentru automatizarea procesului de construire.

### **Biblioteci externe necesare:**
1. **SFML (Simple and Fast Multimedia Library):**
   - Folosită pentru redarea graficii și gestionarea ferestrelor.
   - Instalare pe Linux:
     ```bash
     sudo apt install libsfml-dev
     ```

2. **SQLite3:**
   - Utilizată pentru gestionarea și stocarea scorurilor maxime.
   - Instalare pe Linux:
     ```bash
     sudo apt install libsqlite3-dev
     ```

3. **Boost:**
   - Oferă funcționalități suplimentare pentru manipularea fișierelor și alte operațiuni utile.
   - Instalare pe Linux:
     ```bash
     sudo apt install libboost-all-dev
     ```

---
