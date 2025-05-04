package Esercitazione82.FilaIngresso;

import java.util.LinkedList;
import java.util.Queue;

public class Main {
    public static void main(String[] args) {
        //Simulatore Code
        //Creare un programma che usa una Queue per
        //simulare una fila all'ingresso di un evento.

        Queue<String> coda = new LinkedList<>();

        coda.add("Persona1");
        coda.add("Persona2");
        coda.add("Persona3");
        coda.add("Persona4");
        coda.add("Persona5");

        for(int i = 0; i <5;i++){

            System.out.println("Cliente : " + coda.peek());
            System.out.println("Serviamo : " + coda.poll());
            System.out.println("Rimangono clienti numero : " + coda.size());
        }

        System.out.println("La lista clienti è vuota : " + coda.isEmpty());
    }

}
