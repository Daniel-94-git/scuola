package struttureDati;

import java.util.ArrayList;

public class MiaLista {

    public static void main(String[] args) {
        // Creazione di un ArrayList di Stringhe
        ArrayList<String> listaDiNomi = new ArrayList<>();

        // Aggiungere elementi alla lista
        listaDiNomi.add("Alice");
        listaDiNomi.add("Bob");
        listaDiNomi.add("Charlie");
        System.out.println("Lista dopo l'aggiunta: " + listaDiNomi);

        // Vedere quanti elementi ci sono nella lista
        int numeroDiElementi = listaDiNomi.size();
        System.out.println("Numero di elementi nella lista: " + numeroDiElementi);

        // Rimuovere un elemento per valore
        listaDiNomi.remove("Bob");
        System.out.println("Lista dopo la rimozione di 'Bob': " + listaDiNomi);

        // Rimuovere un elemento per indice
        listaDiNomi.remove(0); // Rimuove l'elemento all'indice 0 (Alice)
        System.out.println("Lista dopo la rimozione dell'elemento all'indice 0: " + listaDiNomi);

        // Vedere quanti elementi ci sono ora
        numeroDiElementi = listaDiNomi.size();
        System.out.println("Numero di elementi nella lista dopo le rimozioni: " + numeroDiElementi);

        // Accedere a un elemento specifico (attenzione all'indice!)
        if (!listaDiNomi.isEmpty()) {
            String primoNome = listaDiNomi.get(0);
            System.out.println("Il primo elemento della lista è: " + primoNome);
        }
    }
}