package Esercitazione62.iterator;

import java.awt.*;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {

        LinkedList <Integer> lista = new LinkedList<>();
        Collections.addAll(lista,4,5,67,8,40,50,30);


        Iterator iteroLista = lista.iterator();

        while(iteroLista.hasNext()){

            int numeroIntero = (int) iteroLista.next();
            System.out.println(numeroIntero);
            iteroLista.remove();
        }
        System.out.println("Da qui non ci dovrebbe essere nulla");

        //if (it.next().equals("Verde"))
        //{
          //  it.remove(); // Rimuove
           // l'elemento corrente
        //}

    }
}
