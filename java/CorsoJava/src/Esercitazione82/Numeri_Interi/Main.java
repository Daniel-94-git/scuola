package Esercitazione82.Numeri_Interi;

import java.util.LinkedList;

public class Main {public static void main(String[] args) {

    //Filtro Numeri
    //Costruire una LinkedList che contiene numeri interi,
    //rimuove i numeri pari e stampa il risultato.

    LinkedList<Integer> lista = new LinkedList<>();

    lista.add(1);
    lista.add(2);
    lista.add(3);
    lista.add(4);
    lista.add(5);
    lista.add(6);
    lista.add(7);
    lista.add(8);
    lista.add(9);
    lista.add(10);

    for(int i = lista.size()-1;i>=0;i--){

        if (lista.get(i)%2 == 0){
            lista.remove(i);
        }
    }

    System.out.println(lista);
}
}
