package Esercitazione62.iterator.classiEsottoclassi.Biciclette;

import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;

public class ProvaIterator2 {

    public static void main(String[] args) {

        LinkedList <Integer> lista = new LinkedList<>();
        Collections.addAll(lista,1,2,3,4,5,6,7,8,9,10);

        Iterator<Integer> it = lista.iterator();

        while(it.hasNext()){

            int numeroLetto = (int) it.next();
            System.out.println(numeroLetto);

            if(it.next().equals(8)){
                System.out.println("C'è un otto");
                }
        }

    }
    }
