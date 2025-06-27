# Libft

**Une bibliothèque de fonctions basiques en C**

---

## 📋 Table des matières
- [Présentation](#présentation)
- [Fonctionnalités](#fonctionnalités)
  - [Tests de caractères](#tests-de-caractères)
  - [Manipulation de chaînes](#manipulation-de-chaînes)
  - [Gestion de la mémoire dynamique](#gestion-de-la-mémoire-dynamique)
  - [Opérations sur blocs mémoire](#opérations-sur-blocs-mémoire)
  - [Listes chaînées](#listes-chaînées)
  - [Conversion de types](#conversion-de-types)
  - [Sortie sur le terminal](#sortie-sur-le-terminal)
- [Installation](#installation)
  - [Compilation obligatoire](#compilation-obligatoire)
  - [Compilation bonus](#compilation-bonus)

---

## Présentation

Libft est une bibliothèque de fonctions basiques réécrivant certaines fonctions standards de `<string.h>`, `<ctype.h>`, `<stdlib.h>` et d'autres. Elle sert de base pour de nombreux projets 42, afin de maîtriser la gestion de la mémoire et les manipulations de chaînes et de listes.

---

## Fonctionnalités

### Tests de caractères

| Fonction   | Description                                  |
|------------|----------------------------------------------|
| `isalnum`  | Vérifie si le caractère est alphanumérique    |
| `isalpha`  | Vérifie si le caractère est alphabétique      |
| `isascii`  | Vérifie si le caractère est un ASCII valide   |
| `isdigit`  | Vérifie si le caractère est un chiffre        |
| `isprint`  | Vérifie si le caractère est imprimable        |

### Manipulation de chaînes

| Fonction    | Description                                    |
|-------------|------------------------------------------------|
| `strchr`    | Recherche la première occurrence d’un caractère |
| `strrchr`   | Recherche la dernière occurrence d’un caractère |
| `strdup`    | Duplique une chaîne (`malloc`)                 |
| `strlen`    | Calcule la longueur d’une chaîne               |
| `strcmp`    | Compare deux chaînes                           |
| `strncmp`   | Compare deux chaînes sur `n` caractères        |
| `strlcpy`   | Copie sécurisée de chaîne                      |
| `strlcat`   | Concaténation sécurisée de chaîne              |
| `strnstr`   | Recherche d’un mot dans une chaîne             |
| `substr`    | Extrait une sous-chaîne (`malloc`)             |
| `strjoin`   | Concatène deux chaînes (`malloc`)              |
| `strtrim`   | Supprime les caractères donnés en début/fin    |
| `split`     | Découpe une chaîne selon un délimiteur         |
| `striteri`  | Applique une fonction sur chaque caractère     |
| `strmapi`   | Similaire à `striteri`, renvoie nouvelle chaîne|
| `tolower`   | Convertit en minuscule                         |
| `toupper`   | Convertit en majuscule                         |

### Gestion de la mémoire dynamique

| Fonction   | Description                              |
|------------|------------------------------------------|
| `calloc`   | Alloue et initialise un bloc mémoire     |
| `realloc`  | Redimensionne un bloc alloué             |
| `tab_header`| Initialise un tableau de pointeurs (bonus)|

### Opérations sur blocs mémoire

| Fonction   | Description                                  |
|------------|----------------------------------------------|
| `memset`   | Remplit un bloc mémoire avec une valeur donnée|
| `bzero`    | Met à zéro un bloc mémoire                   |
| `memcpy`   | Copie un bloc mémoire (zones non chevauchantes)|
| `memmove`  | Copie un bloc mémoire (zones chevauchantes)  |
| `memchr`   | Recherche un octet dans un bloc mémoire      |
| `memcmp`   | Compare deux blocs mémoire                   |

### Listes chaînées

| Fonction      | Description                                   |
|---------------|-----------------------------------------------|
| `lstnew`      | Crée un nouvel élément de liste               |
| `lstadd_front`| Ajoute un élément en tête                      |
| `lstadd_back` | Ajoute un élément en fin                       |
| `lstsize`     | Retourne la taille de la liste                |
| `lstlast`     | Retourne le dernier élément                   |
| `lstiter`     | Applique une fonction à chaque élément        |
| `lstdelone`   | Supprime un élément                            |
| `lstclear`    | Vide toute la liste                            |
| `lstmap`      | Applique une fonction et crée une nouvelle liste|

### Conversion de types

| Fonction   | Description                                |
|------------|--------------------------------------------|
| `atoi`     | Convertit une chaîne en entier            |
| `itoa`     | Convertit un entier en chaîne (`malloc`)  |

### Sortie sur le terminal

| Fonction      | Description                              |
|---------------|------------------------------------------|
| `putchar_fd`  | Écrit un caractère sur un descripteur    |
| `putstr_fd`   | Écrit une chaîne sur un descripteur      |
| `putendl_fd`  | Écrit une chaîne suivie d’un saut de ligne |
| `putnbr_fd`   | Écrit un entier                          |

---

## Installation

### Compilation obligatoire
```bash
git clone https://github.com/momori85/libft.git
cd libft
make
```

### Compilation bonus
```bash
git clone https://github.com/momori85/libft.git
cd libft
make bonus
```