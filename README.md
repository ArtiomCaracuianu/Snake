# Snake Game - Proiect C++

## Descrierea Proiectului

Acest proiect este o implementare a jocului Snake, realizată în C++, care folosește un design modular și orientat pe obiecte. Scopul jocului este de a controla un șarpe, să-l faci să consume fructe pentru a crește în lungime și să eviți coliziunile cu marginile tablei și cu propriul corp.

Proiectul utilizează mai multe module separate pentru gestionarea logicii jocului, redarea graficii și interacțiunile cu utilizatorul. Structura modulară asigură scalabilitate și ușurință în întreținere, iar arhitectura aleasă permite extinderea ulterioară a funcționalităților.

Acesta este un proiect ideal pentru a învăța concepte fundamentale în C++, cum ar fi programarea orientată pe obiecte, gestionarea memoriei și integrarea cu biblioteci externe pentru grafică.

---

## **Regulile Jocului**

Jocul **Snake** presupune controlul unui șarpe care se mișcă pe o tablă pătrată. Scopul este să mănânci fructe, crescându-ți lungimea, în timp ce eviți să te lovești de margini sau de propriul corp.

### **Condiții de terminare a jocului:**
1. Șarpele intră în coliziune cu marginea tablei.
2. Șarpele se lovește de propria sa coadă.

### **Reguli de bază:**
- Șarpele începe cu o lungime de 1 unitate și este poziționat în centrul tablei.
- La fiecare fruct consumat, șarpele crește cu un segment.
- Mișcarea șarpelui este continuă, iar direcția poate fi schimbată folosind tastele săgeți (sus, jos, stânga, dreapta).

### **Scor:**
- Fiecare fruct consumat adaugă un punct la scor.
- Jocul salvează și afișează cel mai mare scor obținut pe parcursul unei sesiuni.

---

## **Structura Proiectului**

Proiectul este organizat pe module separate, fiecare având un rol specific:

### **Modulele principale:**
- **Snake:**
  - Gestionează mișcarea și poziția șarpelui pe tablă.
  - Administrează creșterea șarpelui atunci când acesta consumă un fruct.

- **Board:**
  - Definirea dimensiunilor tablei și a limitelor acesteia.

- **Painter:**
  - Răspunde de redarea grafică a șarpelui, fructelor și altor elemente vizuale ale jocului.

- **Point:**
  - Reprezintă un punct în coordonate 2D `(x, y)`, folosit pentru poziționarea obiectelor pe tablă.

### **Teste Unitare:**
În directorul `tests` există teste unitare pentru funcționalitățile esențiale ale jocului:
- `PointTest.cpp`: Testează funcționalitățile clasei `Point`.
- `SnakeTest.cpp`: Testează logica de mișcare și creșterea șarpelui.
- `GameBoardTest.cpp`: Verifică dimensiunile și comportamentul tablei de joc.

---

## **Dependențe și Configurare**

### **Mediu de Dezvoltare:**
- **Sistem de operare:** Compatibil cu Windows, Linux și macOS.
- **Compilator:** `g++`, cu suport pentru C++17 sau o versiune mai nouă.
- **Instrumente de construcție:** Make pentru a automatiza procesul de construire al aplicației.

### **Biblioteci externe necesare:**
1. **SFML (Simple and Fast Multimedia Library):**
   - Folosită pentru redarea graficii și gestionarea ferestrelor de joc.
   - Instalare pe Linux:
     ```bash
     sudo apt install libsfml-dev
     ```

2. **SQLite3:**
   - Utilizată pentru salvarea scorurilor maxime ale jucătorului.
   - Instalare pe Linux:
     ```bash
     sudo apt install libsqlite3-dev
     ```

3. **Boost:**
   - Oferă librării suplimentare pentru manipularea fișierelor și alte operațiuni.
   - Instalare pe Linux:
     ```bash
     sudo apt install libboost-all-dev
     ```

---
