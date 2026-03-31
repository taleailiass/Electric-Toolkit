#include <stdio.h>
void ohms_law() {
    flaot voltage, resistance , current;
    printf("\n--- Ohmsches Gesetz ---\n");
    printf("Geben Sie die Spannung (V) ein: ");
    scanf("%f", &voltage);
    printf("Geben Sie den Widerstand (R) ein: ");
    scanf("%f", &resistance);
    if(resistance != 0) {
        current = voltage / resistance;
        printf("Der Strom (I) beträgt: %.2f A\n", current);
    } else {
        printf("Der Widerstand darf nicht null sein.\n");
    }
}