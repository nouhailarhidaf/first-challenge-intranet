#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void afficher_menu() {
    printf("\n--- Menu ---\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Moyenne\n");
    printf("6. Valeur absolue\n");
    printf("7. Exponentiation\n");
    printf("8. Racine carrée\n");
    printf("0. Quitter\n");
}

int main() {
    int choix;
    do {
        afficher_menu();
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                int n, somme = 0;
                printf("Combien de nombres à additionner ? ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    int nombre;
                    printf("Entrez le nombre %d : ", i + 1);
                    scanf("%d", &nombre);
                    somme += nombre;
                }
                printf("La somme est : %d\n", somme);
                break;
            }
            case 2: {
                int a, b;
                printf("Entrez le premier nombre : ");
                scanf("%d", &a);
                printf("Entrez le deuxième nombre : ");
                scanf("%d", &b);
                printf("La soustraction est : %d\n", a - b);
                break;
            }
            case 3: {
                int n, produit = 1;
                printf("Combien de nombres à multiplier ? ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    int nombre;
                    printf("Entrez le nombre %d : ", i + 1);
                    scanf("%d", &nombre);
                    produit *= nombre;
                }
                printf("Le produit est : %d\n", produit);
                break;
            }
            case 4: {
                float a, b;
                printf("Entrez le numérateur : ");
                scanf("%f", &a);
                printf("Entrez le dénominateur : ");
                scanf("%f", &b);
                if (b != 0) {
                    printf("La division est : %.2f\n", a / b);
                } else {
                    printf("Erreur : Division par zéro !\n");
                }
                break;
            }
            case 5: {
                int n;
                float somme = 0;
                printf("Combien de nombres pour la moyenne ? ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    float nombre;
                    printf("Entrez le nombre %d : ", i + 1);
                    scanf("%f", &nombre);
                    somme += nombre;
                }
                printf("La moyenne est : %.2f\n", somme / n);
                break;
            }
            case 6: {
                int a;
                printf("Entrez un nombre : ");
                scanf("%d", &a);
                printf("La valeur absolue de %d est : %d\n", a, abs(a));
                break;
            }
            case 7: {
                double base;
                int exposant;
                printf("Entrez la base : ");
                scanf("%f", &base);
                printf("Entrez l'exposant : ");
                scanf("%d", &exposant);
                printf("%.2f à la puissance %d est : %.2f\n", base, exposant, pow(base, exposant));
                break;
            }
            case 8: {
                double nombre;
                printf("Entrez un nombre positif : ");
                scanf("%f", &nombre);
                if (nombre >= 0) {
                    printf("La racine carrée de %.2f est : %.2f\n", nombre, sqrt(nombre));
                } else {
                    printf("Erreur : Le nombre doit être positif !\n");
                }
                break;
            }
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Option invalide, veuillez réessayer.\n");
        }
    } while (choix != 0);

    return 0;
}
