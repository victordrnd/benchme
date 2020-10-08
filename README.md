# **TP 2 - Algorithmes de tri Benchme**

Auteur : *Victor Durand et Leo Albouy*


Le but de ce projet est d'implémenter 4 algorithmes de tri (tri à bulle, tri par sélection, tri par insertion, tri par tas) où l'on peut choisir son ordre de tri (croissant ou décroissant). Il permettra par ailleurs un Bench de chacun de ces tri, les résultats seront exportés au format csv.

## Commande `make documentation`

Le code est annoté et documenté au format javadoc.
On peut ensuite taper la commande qui permet d'extraire la documentation technique.
Les paramètres de cette commande sont dans le fichier *Makefile*

`make documentation`

## Commande `benchme` 

Cette commande permet de créer un fichier au format CSV qui contient tous les temps d'exécution pour chaque algorithmes. 

Voici la syntaxe à utiliser : `benchme <nom du fichier>`

## Evolution à venir

- Implémentation de nouveaux algorithmes de tri.
- Création d'un menu graphique pour visualiser la courbe de chaque algorithme
