# Get_Next_Line - 42 Lyon 2019
Le but de ce projet est de créer une fonction qui lit un fichier et renvoie à chaque appel une nouvelle ligne sans retour à la ligne à partir de ce fichier.

| Titre | Description |
| ------ | ----- |
| Prototype 	| int get_next_line(int fd, char **line);|
| Paramètres 	| #1. le file descriptor sur lequel lire <br> #2. La valeur de ce qui a été lu|
| Valeur de retour	| 1 : Une ligne a été lue <br> 0 : La lecture est terminée <br> -1 : Une erreur est survenue|
