# SnakeGame

## Descrierea proiectului

**SnakeGame** este o implementare modernă a jocului clasic "Snake", în care jucătorul controlează un șarpe care se mișcă pe o tablă de joc 2D. Scopul jocului este de a mânca "mere" (sau alte obiecte) care apar aleatoriu pe tablă. Fiecare obiect mâncat face ca șarpele să crească în lungime, iar jocul devine mai greu pe măsură ce avansează. Jucătorul trebuie să evite coliziunile cu pereții sau cu propriul corp pentru a nu pierde jocul.

Jocul continuă până când șarpele se lovește de o barieră (perete) sau de propriul corp.

## Regulile jocului

- **Obiectivul**: Controlează șarpele și mănâncă mere (sau alte obiecte) pentru a-l face să crească.
- **Creșterea șarpelui**: La fiecare obiect consumat, șarpele devine mai lung și jocul devine mai dificil.
- **Coliziuni**: Jocul se termină dacă șarpele lovește un perete sau se auto-colizionează.
- **Finalul jocului**: Șarpele moare atunci când se lovește de o barieră sau de propriul corp.

## Structura fișierelor

### 1. `snake.cpp` și `snake.hpp`

- **Funcționalitate**: Aceste fișiere definesc clasa `Snake`, care controlează mișcarea șarpelui pe tablă.
- **Modificări aduse**:
  - Înlocuirea unui **array static** cu un **`std::vector<Point>`** pentru a stoca segmentele șarpelui, ceea ce permite creșterea dinamică a acestuia.
  - Utilizarea **STL (Standard Template Library)** pentru gestionarea memoriei și a structurilor de date.
  
- **Metode principale**:
  - **`Move`**: Permite mutarea șarpelui într-o direcție (sus, jos, stânga, dreapta).
  - **`Grow`**: Extinde șarpele prin adăugarea unui segment.
  - **`GetHeadPosition`**: Returnează poziția capului șarpelui pentru a verifica coliziunile.

---

### 2. `painter.hpp` și `painter.cpp`

- **Funcționalitate**: Aceste fișiere definesc clasa `Painter`, care este responsabilă pentru desenarea elementelor vizuale pe tablă (imagini și texte).
- **Modificări**:
  - Înlocuirea tipurilor **`char*`** și **`char**[]`** cu **`std::string`** și **`std::vector<std::string>`**, respectiv, pentru o manipulare mai ușoară și mai sigură a șirurilor de caractere și a imaginilor.
  
- **Metode principale**:
  - **`DrawImage`**: Desenează o imagine între două puncte date pe tablă.
  - **`WriteText`**: Afișează text într-o locație specificată pe tablă.

---

### 3. `point.hpp` și `point.cpp`

- **Funcționalitate**: Aceste fișiere definesc structura `Point`, care reprezintă un punct pe tabla de joc, cu coordonate **`x`** și **`y`**.
  
- **Modificări**:
  - Suprascrierea operatorilor pentru manipularea obiectelor **`Point`**, incluzând operatori de atribuire și de comparație.
  
- **Metode și operatori**:
  - **Constructori**: Permite crearea unui punct cu coordonate specifice sau implicite.
  - **Operatori**: Compară două puncte sau efectuează citirea/afisarea acestora.

---

### 4. `board.hpp`

- **Funcționalitate**: Reprezintă tabla de joc, care are dimensiuni **`width`** și **`height`**. Aceste dimensiuni sunt esențiale pentru validarea coliziunilor cu pereții.
  
- **Metode principale**:
  - **`GetWidth`** și **`GetHeight`**: Returnează dimensiunile tabloului de joc.
  - **`operator>>`** și **`operator<<`**: Permite citirea și scrierea dimensiunilor tabloului din/în fluxuri.

---

### 5. `abstract_painter.hpp`

- **Funcționalitate**: Definește o interfață abstractă pentru desenarea imaginii și a textului pe tablă.
- **Modificări**:
  - Înlocuirea tipurilor **`char*`** și **`char**[]`** cu **`std::string`** și **`std::vector<std::string>`** pentru o manipulare mai ușoară a datelor.

---

### 6. `Makefile`

- **Funcționalitate**: Permite compilarea și generarea executabilului final.
- **Modificări**:
  - Actualizat pentru a folosi standardul **C++17**, care permite utilizarea STL și smart pointers.
  
- **Comenzi disponibile**:
  - **`make all`**: Compilează și leagă fișierele sursă pentru a crea executabilul.
  - **`make clean`**: Șterge fișierele temporare și executabilul generat.

---
